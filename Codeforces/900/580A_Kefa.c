#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);


    int num[100000];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    int current_len=1;
    int max_len=1;

    for(int i=0;i<n;i++){
        if(num[i] <= num[i+1]){
            current_len++;
        } else{
            current_len=1;
        }

        if(current_len > max_len)
            max_len = current_len;
    }
    printf("%d",max_len);

    return 0;
}