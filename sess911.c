#include <stdio.h>
main911()
{
	int num ;
	label1:
		printf("\nEnter a number (1) :");
		scanf("%d",&num);
		if(num==1)
			goto Test;
		else
			goto label1;
	Test:
		printf("All done...");
}
