// Q9: Insert 10 from Front in Deque
#include <stdio.h>
#define S 10
int dq[S], f = -1, r = -1;
void insertFront(int v) { if(f==-1) f=r=0; else f=(f-1+S)%S; dq[f]=v; printf("Inserted %d at Front\n",v); }
int main() {
    insertFront(10);
    printf("Deque: %d\n", dq[f]);
    return 0;
}
