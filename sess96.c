#include <stdio.h>
main96()
{
	int count = 0;
	while(count<100)
	{
		printf("This goes on forever, Help!!!\n");
		count+=10;
		printf("\t%d",count);
		count-=10;
		printf("\t%d",count);
		printf("\nCtrl-C will help");
	}
}
