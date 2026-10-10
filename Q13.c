// Q13: Delete one element from Rear of Deque
#include <stdio.h>
#define S 10
int dq[S], f = -1, r = -1;
void insertFront(int v) { if(f==-1) f=r=0; else f=(f-1+S)%S; dq[f]=v; }
void insertRear(int v) { if(f==-1) f=r=0; else r=(r+1)%S; dq[r]=v; }
void deleteFront() { f=(f+1)%S; }
void deleteRear() { printf("Deleted from Rear: %d\n", dq[r]); r=(r-1+S)%S; }
int main() {
    insertFront(10); insertRear(20); insertFront(30);
    deleteFront();
    printf("Before: 10 20\n");
    deleteRear();
    printf("After: ");
    int i=f; while(1){ printf("%d ",dq[i]); if(i==r) break; i=(i+1)%S; }
    return 0;
}
