#include <iostream>
#include <fstream>

void
    search_replace(std::ifstream ifs, std::ofstream ofs, std::string search, std::string replace)
{
    std::string     line;
    size_t          find_pos;

    while (std::getline(ifs, line, '\n'))
    {
        find_pos = 0;
        while ((find_pos = line.find(search, find_pos)) != std::string::npos)
        {
            line.replace(find_pos, search.size(), replace);
            find_pos += replace.size();
        }
        ofs << line << std::endl;
    }
}

void
    cpp_sed(std::string filename, std::string search, std::string replace)
{
    std::ifstream   ifs(filename);
    std::ofstream   ofs;

    if (!ifs.is_open())
    {
        std::cout << filename << " not found" << std::endl;
        return ;
    }
    ofs.open(filename + ".replace");
    if (!ofs.is_open())
    {
        ifs.close();
        std::cout << "Failed to create new file" << std::endl;
        return ;
    }
    ifs.close();
    ofs.close();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong input" << std::endl;
        return (EXIT_FAILURE);
    }
    cpp_sed(av[1], av[2], av[3]);

    return (0);
}
