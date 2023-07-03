#include<stdio.h>

 void main()
{
    int a,b;
    int prerin;
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Modulo\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    
    do{
    	printf("================\n");
printf("Press 1 for +\n");
printf("Press 2 for -\n");
printf("Press 3 for *\n");
printf("Press 4 for /\n");
printf("Press 5 for %\n");
printf("Press 0 for exit\n");
	
    printf("Enter your Choice : ");
    scanf("%d",&prerin);
    switch(prerin)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    case 5  :
    	printf("Modulo of Two Numbers is %d  :", a%b);
    default	:
        printf(" You Are Exited.");
        break;
    }}while(a != 0);
}

