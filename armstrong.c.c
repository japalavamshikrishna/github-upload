#include<stdio.h>
#include <math.h>

 int main()
{
    int N;
    scanf("%d",&N);

    for(int i=0;i<N;i++) {

        int num,rem,sum=0,count=0,temp;
        scanf("%d",&n);
        temp=num;
        while(temp!=0){
            count++;
            temp=temp/10;
        }
        temp=num;
    while(num>0){
        rem=num%10;
        sum=sum+pow(rem,count);
        num=n/10;
    }
    if(temp!=sum)
        printf("NO\n");
    else
        printf("YES\n");
    }
    return 0;
}
