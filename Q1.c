// Q1: Insert 10, 20, 30 into Linear Queue
#include <stdio.h>
int q[10], r = -1;
void insert(int v) { q[++r] = v; printf("Inserted: %d\n", v); }
int main() {
    insert(10); insert(20); insert(30);
    printf("Queue: ");
    for (int i = 0; i <= r; i++) printf("%d ", q[i]);
    return 0;
}
