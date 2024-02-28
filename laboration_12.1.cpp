#include <iostream>
using namespace std;

struct Elem {
	Elem* link1,
		* link2;
	int info;
};


int main() {
	Elem* p = new Elem; //1
	p->link1 = nullptr; //2
	p->info = 1; //3
	p->link2 = new Elem; //4
	p->link2->info = 2; //5
	p->link2->link1 = new Elem; //7
	p->link2->link1->info = 4; //8
	p->link2->link1->link2 = p; //9
	p->link2->link1->link1 = new Elem; //10
	p->link2->link1->link1->info = 3; //11
	p->link2->link2 = p->link2->link1->link1; //12




	delete  p->link2->link1->link1;
	delete  p->link2->link1;
	delete  p->link2;
	delete  p;
	
	system("pause");
	return 0;
}