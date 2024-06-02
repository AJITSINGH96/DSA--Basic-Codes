#include"CreateNode.h"
int main() {

    int A[] = { 3, 5, 7, 10, 15 };
    int N = sizeof(A) / sizeof(A[0]);

    CreateNode node;
    CreateNode* P = nullptr;
    P = node.create(A, N, P);
    node.display(P);


    InsertNode NodeIns;
    CreateNode* rP = nullptr;
    rP = NodeIns.insert(P, rP, N);
    NodeIns.display(rP);


    CountNodes counts;
    int x = 0;
    x = counts.count(rP, x);
}