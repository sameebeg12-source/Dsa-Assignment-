// Q16: Insert 20 with priority 1 in Priority Queue
#include <stdio.h>
int val[10], pr[10], n = 0;
void insert(int v, int p) { val[n]=v; pr[n]=p; n++; printf("Inserted: %d (Priority %d)\n",v,p); }
int main() {
    insert(10, 2);
    insert(20, 1);
    printf("Queue:\n");
    for (int i = 0; i < n; i++) printf("  Value=%d, Priority=%d\n", val[i], pr[i]);
    return 0;
}
