// Q3: Insert 40 into the Rear of Linear Queue
#include <stdio.h>
int q[10], f = 0, r = -1;
void insert(int v) { q[++r] = v; }
void delete() { f++; }
int main() {
    insert(10); insert(20); insert(30);
    delete(); delete();
    printf("Before: 30\n");
    insert(40);
    printf("Inserted 40 at Rear\n");
    printf("After: ");
    for (int i = f; i <= r; i++) printf("%d ", q[i]);
    return 0;
}
