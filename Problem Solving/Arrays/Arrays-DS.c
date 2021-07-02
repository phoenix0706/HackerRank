#include<stdio.h>
#include<stdlib.h>
int n;
void revarray(int a[]){
 int i,j;
 j=n-1;
 for(j=n-1;j>=0;j--){
     printf("%d ",a[j]);
 }
 
 
 
}
int main(){
    void revarray(int []);
int i;
int a[10000];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
 revarray(& a[0]);
 getchar();
}
