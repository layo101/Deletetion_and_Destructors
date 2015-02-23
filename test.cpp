
#include "LL1.h"

#include <iostream>
using namespace std;

void listTest();

int main() {
	cout << "!!!Hello!!!" << endl;
        listTest();
	cout << "!!!Goodbye!!!" << endl; 
	return 0;
}

void listTest(){

        cout << "A little exercise with memory leaks in the LL1 linked list class." << endl << endl ;

	cout << "List1 and List1A are empty LL1 instances in heap memory." << endl;
	LL1 * ls1;
	LL1 * ls1A;
        ls1 = new LL1();
        ls1A = new LL1();
	cout << "Add 1,2,3,4 to List1 and List1A." << endl;
	ls1->add(1);
	ls1->add(2);
	ls1->add(3);
	ls1->add(4);
	ls1A->add(1);
	ls1A->add(2);
	ls1A->add(3);
	ls1A->add(4);
	cout << "List1 is:"; ls1->printList(); cout << endl << endl; 
	cout << "List1A is:"; ls1A->printList(); cout << endl << endl; 

	cout << "Remove some items from List1" << endl;
	ls1->remove(2);
	ls1->remove(4);
        cout << "List1 is:" ; ls1->printList() ; cout << endl ;  

        cout << "Now, empty List1 with removeAll" << endl ;
        ls1->removeAll();
        cout << "List1 is:" ; ls1->printList() ; cout << endl ;  

        cout << endl ;
	delete ls1;
	delete ls1A;
        cout << "That's all!" << endl;
}
