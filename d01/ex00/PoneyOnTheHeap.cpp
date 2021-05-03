#include "Poney.hpp"

void
    PoneyOnTheHeap(void) {
    Poney   *purple_pon;
    Poney   *dark_pon;

    purple_pon = new Poney(5, 1000, "purple");
    dark_pon = new Poney(105, 55, "dark");

    purple_pon->poney_print();
    dark_pon->poney_print();
    dark_pon->poney_sleep();
    purple_pon->poney_run();
    purple_pon->poney_sleep();
    dark_pon->poney_sleep();

    delete purple_pon;
    delete dark_pon;
}