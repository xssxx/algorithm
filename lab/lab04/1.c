#include <stdio.h>
#include <string.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    int t, n, i, k;
    char s[10000];
    scanf("%d", &t);

    while (t--) {
        scanf("%s", s);
        int max = 0, prev = -1;
        n = strlen(s);

        for (int i = 0; i <= n; i++) {
            if (s[i] == 'R' || i == n) {
                max = MAX(max, i - prev);
                prev = i;
            }    
    	}
    	
    	printf("%d\n", max);    
    }
}