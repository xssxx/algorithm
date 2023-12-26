#include <stdio.h>

void merge(int *l, int *r, int n) {
    for (int i = n; i < n*2; i++)
        l[i] = r[i - n];
}

void merge_sort(int* arr, int n) {
    if (n <= 1) return;

    int mid = (n + 1) / 2;
    int l[mid], r[mid];

    for (int i = 0; i < mid; i++)
        l[i] = arr[i];
    
    for (int i = mid; i < n; i++)
        r[i] = arr[i];
    
    merge_sort(l, mid);
    merge_sort(r, mid);

    merge(l, r, mid);
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int p[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &p[i]);

    merge_sort(p, n);

    int b = 0;
    int l = 0, r = n-1;
    while (l <= r) {
        if (p[l] + p[r] <= x) {
            l++;
            r--;
        } else {
            r--;
        }
        b++;
    }

    printf("%d", b);

    return 0;
}