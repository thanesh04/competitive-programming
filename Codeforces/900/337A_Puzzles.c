#include<stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int num[1000];
    for(int i=0;i<m;i++){
        scanf("%d",&num[i]);
    }

    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if (num[j] > num[j+1]) {
            int temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
        }
    }
}

    int min_diff = 10000;

    for(int i=0;i<=m-n;i++){
        int diff = num[n+i-1] - num[i]; //num[n+i-1] last element
        if(diff<min_diff)
            min_diff = diff;
    }

    printf("%d ",min_diff);

    return 0;
}