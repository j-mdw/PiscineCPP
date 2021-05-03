#include "Poney.hpp"

void
    PoneyOnTheStack(void) {
    Poney   red_pon(12, 100, "Red");
    Poney   blue_pon(2, 200, "Blue");

    red_pon.poney_print();
    blue_pon.poney_print();
    blue_pon.poney_sleep();
    red_pon.poney_run();
    blue_pon.poney_sleep();
    red_pon.poney_sleep();
}