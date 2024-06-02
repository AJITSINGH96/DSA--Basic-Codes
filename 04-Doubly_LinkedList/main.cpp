#include"DoublyLinkedList.h";
#include <iostream>

int main()
{
    int A[] = { 1,2,3,4,5 };
    int n = sizeof A / sizeof(A[0]);

    DoublyList objcreate;
    DoublyList* p = nullptr;


    DoublyList* rpass = nullptr;
    p = objcreate.CreateDoubly(A, p, n);


    p = objcreate.Dispay(p, rpass);
    cout << endl;

    Insert ins;
    rpass = ins.insert(p, rpass);
    cout << endl;


    p = objcreate.Dispay(rpass, p);
    cout << endl;


}