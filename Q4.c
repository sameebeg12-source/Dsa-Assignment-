// Q4: Display remaining elements in Linear Queue
#include <stdio.h>
int q[10], f = 0, r = -1;
void insert(int v) { q[++r] = v; }
void delete() { f++; }
int main() {
    insert(10); insert(20); insert(30);
    delete(); delete(); insert(40);
    printf("Remaining elements: ");
    for (int i = f; i <= r; i++) printf("%d ", q[i]);
    return 0;
}
