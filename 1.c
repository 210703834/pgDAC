//user defined function adding two numbers.
#include <stdio.h>
int addNumbers(int a, int b);         
int main()
{
    int n1,n2,sum;
    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum = addNumbers(n1, n2);        
    printf("sumetion = %d",sum);
    return 0;
}
int addNumbers(int a, int b)            
{
    int result;
    result = a+b;
    return result;               
}