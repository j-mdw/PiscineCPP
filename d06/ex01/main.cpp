#include <string>
#include <cstdlib>
#include <iostream>
#include <limits>

void *
serialize(void)
{
    static char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    std::string *s1 = new std::string;
    std::string *s2 = new std::string;
    char * serial = new char [(sizeof(std::string *) * 2) + sizeof(int)];

    int size = clock() % 10 + 3;
    while (size--)
    {
        *s1 += alpha[(clock() + size) % 26];
        *s2 += alpha[(clock() - size) % 26];
    }
    std::string **tmps1 = reinterpret_cast<std::string **>(serial);
    *tmps1 = s1;
    int *tmpi = reinterpret_cast<int *>(serial + sizeof(std::string *));
    *tmpi = clock() % std::numeric_limits<int>::max();
    std::string **tmps2 = reinterpret_cast<std::string **>(serial + sizeof(std::string *) + sizeof(int));
    *tmps2 = s2;

    return (static_cast<void *>(serial));
}

struct Data {
    std::string *s1;
    std::string *s2;
    int         i;
};

Data *
deserialize(void * raw)
{
    Data *data = new Data;

    data->s1 = *reinterpret_cast<std::string **>(raw);
    data->i = *reinterpret_cast<int *>(static_cast<char *>(raw) + sizeof(std::string *));
    data->s2 = *reinterpret_cast<std::string **>(static_cast<char *>(raw) + sizeof(std::string *) + sizeof(int));
    return (data);
}

int
main(void)
{
    void *p = serialize();
    Data *dp = deserialize(p);

    std::cout << *dp->s1 << std::endl;
    std::cout << *dp->s2 << std::endl;
    std::cout << dp->i << std::endl;
    delete dp->s1;
    delete dp->s2;
    delete reinterpret_cast<Data *>(p);
}
