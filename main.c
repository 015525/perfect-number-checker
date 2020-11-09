#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, counter, sum;
    sum= 0;
    printf("This is a perfect number checker program\n\n");
    printf("please enter a num : ");
    scanf("%d", &num);
    for (counter= 1; counter<num; counter++){
        if (num%counter == 0){
            sum+= counter;
        }
    }
    if (sum == num){
        printf("\n%d is a perfect number\n", num);
    }
    else{
        printf("\n%d is not a perfect number\n",num);
    }
    return 0;
}
