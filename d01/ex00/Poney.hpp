#ifndef PONEY_H
# define PONEY_H

class Poney {

public:

    Poney(int age, int size, std::string color);
    ~Poney(void);

    static int  poney_count;

    void        poney_run(void) const;
    void        poney_sleep(void) const;
    void        poney_print(void) const; 

private:

    int         _id;
    int         _age;
    int         _size;
    std::string _color;

}

#endif