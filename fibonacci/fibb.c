#include <stdio.h>
int main(){
 
printf("ktory element ciagu obliczyc?\n");
int n;
scanf("%d",&n);
 
if(n<=2) printf("%d elementem ciagu Fibonacciego jest 1\n",n);
else{
int f1=1; 
int f2=1; 
int temp; 
for(int i=3;i<=n;i++){
temp=f1+f2;
f1=f2;
f2=temp;

}
printf("%d elementem ciagu Fibonacciego jest %d\n",n,f2);
}
return 0;
}