// QUESTION URL: https://www.codechef.com/problems/MAKEMULTIPLE

#include <stdio.h>

int main(void) {
    int t, a, b, flag;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        flag = (b%a == 0 || (b-a) >= a) ? 1:0;
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}


