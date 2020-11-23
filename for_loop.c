/* Calculate (1*1)+(2*2)+(3*3)+(4*4)+(5*5)+...+(n*n)
*/
#include<stdio.h>

int main(){
    int i, n;
    long sum = 0;
    
    puts("Enter the value: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum = sum + (i * i);
    }
    
    printf("Sum: %ld", sum);


    return 0;
}