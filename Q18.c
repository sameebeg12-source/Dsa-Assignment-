// Q18: Delete element with highest priority from Priority Queue
#include <stdio.h>
int val[10], pr[10], n = 0;
void insert(int v, int p) { val[n]=v; pr[n]=p; n++; }
void deleteHighest() {
    int m = 0;
    for (int i = 1; i < n; i++) if (pr[i] > pr[m]) m = i;
    printf("Deleted: %d (Priority %d)\n", val[m], pr[m]);
    for (int i = m; i < n-1; i++) { val[i]=val[i+1]; pr[i]=pr[i+1]; }
    n--;
}
int main() {
    insert(10, 2); insert(20, 1); insert(30, 3);
    printf("Before: (10,P2) (20,P1) (30,P3)\n");
    deleteHighest();
    printf("After:\n");
    for (int i = 0; i < n; i++) printf("  Value=%d, Priority=%d\n", val[i], pr[i]);
    return 0;
}
