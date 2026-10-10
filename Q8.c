// Q8: Display elements of Circular Queue
#include <stdio.h>
#define S 5
int q[S], f = -1, r = -1;
void insert(int v) { if(f==-1) f=0; r=(r+1)%S; q[r]=v; }
void delete() { f=(f+1)%S; }
int main() {
    insert(10); insert(20); insert(30); insert(40);
    delete(); delete();
    insert(50); insert(60);
    printf("Circular Queue: ");
    int i=f; while(1){ printf("%d ",q[i]); if(i==r) break; i=(i+1)%S; }
    return 0;
}
