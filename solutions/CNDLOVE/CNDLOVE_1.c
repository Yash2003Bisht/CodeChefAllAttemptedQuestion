// QUESTION URL: https://www.codechef.com/problems/CNDLOVE

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int total=0;
        for(int i=0; i<n; i++){
            scanf("%d", &a);
            total += a;
        }
        if (total%2 == 0){
            printf("NO\n");
        } else{
            printf("YES\n");
        }
    }
	return 0;
}



