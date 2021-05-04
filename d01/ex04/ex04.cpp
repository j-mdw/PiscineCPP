#include <iostream>

int
    main(void)
{
    std::string msg = "HI THIS IS BRAIN";
    std::string *msg_ptr = &msg;
    std::string &msg_ref = msg;

    std::cout << "Str: " << msg << std::endl
    << "Ptr: " << *msg_ptr << std::endl
    << "Ref: " << msg_ref << std::endl;

    return (0);
}
