#include <iostream>

struct El {

    El* link1,
        * link2;
    int info;
};

El* p;

int main() {

    p = new El;
    p->info = 1;
    p->link1 = new El;
    p->link1->info = 4;
    p->link1->link2 = nullptr;
    p->link2 = new El;
    p->link2->info = 2;
    p->link2->link2 = nullptr;
    p->link2->link1 = p;
    p->link1->link1 = new El;
    p->link1->link1->info = 3;
    p->link1->link1->link1 = p->link2;
    p->link1->link1->link2 = p->link1;

    delete p->link1->link1;
    delete p->link2;
    delete p->link1;
    delete p;

    system("pause");
    return 0;
}