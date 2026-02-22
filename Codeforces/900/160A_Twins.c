#include<stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[100];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    int taken_sum =0;
    int count=0;

    for(int i=0;i<n;i++){
        taken_sum += arr[i];
        count++;
        if(taken_sum > sum-taken_sum)
            break;
    }
    
    printf("%d",count);
    return 0;
}