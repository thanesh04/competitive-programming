#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        unsigned long long n;
        scanf("%llu",&n);

        long long temp = n;
        int count2 =0,count3 =0;

        while(temp % 2 == 0){
            temp /= 2;
            count2++;
        }

        while (temp % 3 == 0){
            temp /= 3;
            count3++;
        }

        if(temp != 1)
            printf("-1\n");
        else if(count2 > count3)
            printf("-1\n");
        else
            printf("%d\n",2* count3 - count2);
    }

    return 0;
}