// Q5: Insert 10, 20, 30, 40 into Circular Queue (Size 5)
#include <stdio.h>
#define S 5
int q[S], f = -1, r = -1;
void insert(int v) { if(f==-1) f=0; r=(r+1)%S; q[r]=v; printf("Inserted: %d\n",v); }
int main() {
    insert(10); insert(20); insert(30); insert(40);
    printf("Queue: ");
    int i=f; while(1){ printf("%d ",q[i]); if(i==r) break; i=(i+1)%S; }
    return 0;
}
