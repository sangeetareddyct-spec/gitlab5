#include<stdio.h>
int main()
{
    int i, sum=0, count=0;
    printf("Numbers between 100 to 200 divisible by 7 :\n");
    for(i=100;i<=200;i++){
        if(i%7==0){
            printf("%d",i);
            sum+=i;
            count++;
        }
    }
    printf("\n\n count of numbers divisible by 7 = %d\n",count);
    printf("sum of numbers divisible by 7= %d\n",sum);
    return 0;


}

