// Q15: Insert 10 with priority 2 in Priority Queue
#include <stdio.h>
int val[10], pr[10], n = 0;
void insert(int v, int p) { val[n]=v; pr[n]=p; n++; printf("Inserted: %d (Priority %d)\n",v,p); }
int main() {
    insert(10, 2);
    printf("Queue: Value=%d, Priority=%d\n", val[0], pr[0]);
    return 0;
}
