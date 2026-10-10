// Q7: Insert 50 and 60 into Circular Queue
#include <stdio.h>
#define S 5
int q[S], f = -1, r = -1;
void insert(int v) { if(f==-1) f=0; r=(r+1)%S; q[r]=v; }
void delete() { f=(f+1)%S; }
int main() {
    insert(10); insert(20); insert(30); insert(40);
    delete(); delete();
    printf("Before: 30 40\n");
    insert(50); printf("Inserted: 50\n");
    insert(60); printf("Inserted: 60\n");
    printf("After: ");
    int i=f; while(1){ printf("%d ",q[i]); if(i==r) break; i=(i+1)%S; }
    return 0;
}
