#include <stdio.h>
int main()
{

    float aver,dis,time;
	printf("Distance travelled in meter: \n");
	scanf("%f",&dis);
	printf("Time taken in seconds: \n");
	scanf("%f",&time);
	aver=dis/time;
	printf("Average Speed is %.2f meter per sec",aver);
	return 0;
}
