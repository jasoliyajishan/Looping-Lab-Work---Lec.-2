#include <stdio.h>

int main()
 {
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i;n >= i; n--)
     {
    	if(n%2==0)
        printf("%d\n", n);
       
    }

    return 0;
}
