#include <stdio.h>
int main()
{
    int f,c;
    printf("Enter temperature in Faranhite: ");
    scanf("%d/F/",&f);
    c= (f-32)*5/9;
    printf("%dF  temperature in celcius is %d Celcius\n",f,c);

	return 0;
}
