#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i =0;i<(2*n-1);i++){
    for(int j=(2*n-1);j>=0;j--){
        printf("%d ",n);

    }
    printf("\n");
}
return 0;
}
