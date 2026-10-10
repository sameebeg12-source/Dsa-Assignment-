// Q2: Delete two elements from Front of Linear Queue
#include <stdio.h>
int q[10], f = 0, r = -1;
void insert(int v) { q[++r] = v; }
void delete() { printf("Deleted: %d\n", q[f++]); }
int main() {
    insert(10); insert(20); insert(30);
    printf("Before: 10 20 30\n");
    delete(); delete();
    printf("After: ");
    for (int i = f; i <= r; i++) printf("%d ", q[i]);
    return 0;
}
