# include <string>
# include <iostream>
# include <limits>
# include <cmath>

# define TYPE_CHAR 0
# define TYPE_INT 1
# define TYPE_FLOAT 2 
# define TYPE_DOUBLE 3
# define EXCEPTION 4


void
handle_exceptions(int type, std::string s)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    if (type == TYPE_FLOAT)
    {
        std::cout << "float: " << s << std::endl;
        s.resize(s.size() - 1);
        std::cout << "double: " << s << std::endl;
    }
    else if (type == TYPE_DOUBLE)
    {
        std::cout << "float: " << s + "f" << std::endl;
        std::cout << "double: " << s << std::endl;
    }
}

static int
special_case(std::string & s)
{
    static std::string sArr[] = {
        "-inff",
        "+inff",
        "nanf",
        "-inf",
        "+inf",
        "nan"
        };

    if (s.size() == 1)
        return (TYPE_CHAR);
    for (int i = 0; i < 6; i++)
    {
        if (sArr[i] == s)
        {
            handle_exceptions(2 + (i > 2), s);
            return (EXCEPTION);
        }
    }
    return (-1);
}

int
get_type(std::string & s)
{
    std::string::iterator it = s.begin();
    std::string::iterator end = s.end();
    int dot_count = 0;
    int type;

    type = special_case(s);
    if (type >= 0)
        return (type);
    if (*it == '+' || *it == '-')
        it++;
    for (;it < end; it++)
    {
        dot_count += (*it == '.');
        if ((*it == '.' && dot_count >= 2)
        || (!std::isdigit(*it) && *it != '.'))
            break ;
    }
    if (it == end && dot_count == 0)
        return (TYPE_INT);
    else if (it == end && dot_count == 1)
        return (TYPE_DOUBLE);
    else if (std::isdigit(*(it - 1)) && it == (end - 1) && *it == 'f')
        return (TYPE_FLOAT);
    return (-1);
} 

void
print_from_char(char c)
{
    if (!std::isprint(c))
        std::cout << "char: " << "impossible" << std::endl;
    else
    {
        std::cout << "char: " << c << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    }
}

void
print_from_int(int i)
{
    if (!std::isprint(i))
        std::cout << "char: " << "impossible" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;

    std::cout << "int: " << static_cast<int>(i) << std::endl;
    std::cout << "float: " << static_cast<float>(i) << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void
print_from_float(float f)
{
   int i;

        std::cout << f << '\n';
    if (f > std::numeric_limits<int>::min()
        && f < std::numeric_limits<int>::max())
    {
        i = static_cast<int>(f);
        std::cout << f << '\n';
        if (!std::isprint(static_cast<int>(f)))
            std::cout << "char: " << "impossible" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(f) << std::endl;
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    }
    else
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
    }
    std::cout << "float: " << f << std::endl;
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void
print_from_double(double d)
{
   int i;

    if (d >= std::numeric_limits<int>::min()
        && d <= std::numeric_limits<int>::max())
    {
        i = static_cast<int>(d);
        if (!std::isprint(i))
            std::cout << "char: " << "impossible" << std::endl;
        else
            std::cout << "char: " << static_cast<char>(d) << std::endl;
        std::cout << "int: " << i << std::endl;
    }
    else
    {
        std::cout << "char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
    }
    if (d > std::numeric_limits<float>::max()
    || d < std::numeric_limits<float>::min())
        std::cout << "float: " << "impossible" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(d) << std::endl;
    std::cout << "double: " << d << std::endl;
}

void
print_impossible(void)
{
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << "impossible" << std::endl;
    std::cout << "float: " << "impossible" << std::endl;
    std::cout << "double: " << "impossible" << std::endl;
}

int
convert_print(std::string s)
{
    int         type;
    long double d;
    long int    li;


    type = get_type(s);
    std::cout << "Type: " << type << std::endl;
    if (type < 0)
    {
        std::cout << "Input is neither, char, int, float or double convertible" << std::endl;
        return (1);
    }
    if (type == EXCEPTION)
        return (0);
    if (type == TYPE_CHAR)
        print_from_char(*s.begin());
    else if (type == TYPE_INT)
    {
        li = std::strtol(s.c_str(), NULL, 10);
        if (li < std::numeric_limits<int>::min()
        || li > std::numeric_limits<int>::max())
            print_impossible();
        else
            print_from_int(std::atoi(s.c_str()));
    }
    else if (type == TYPE_FLOAT)
    {
        d = std::atof(s.c_str());
        if (d > std::numeric_limits<float>::max()
        || d < std::numeric_limits<float>::min())
            print_impossible();
        else
            print_from_float(static_cast<float>(d));
    }
    else if (type == TYPE_DOUBLE)
    {
        d = std::strtold(s.c_str(), NULL);
        if (d == HUGE_VAL)
            print_impossible();
        else
            print_from_double(std::strtod(s.c_str(), NULL));
    }
    return (0);
}

int
main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Provide 1 input" << std::endl;
        return (1);
    }
    return (convert_print(av[1]));
}