#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	do
	{
		printf("~~~~~~~~~~~~~~~~~~~~MENU BAI TAP~~~~~~~~~~~~~~~~~~~~");
		printf("\n+--------------------------------------------------+\n");
		printf("\n    1.TINH TRUNG BINH CONG\n                      \n");
		printf("\n    2.TIM SO NGUYEN TO\n                          \n");
		printf("\n    3.TIM SO CHINH PHUONG\n                       \n");
		printf("\n--------------------------------------------------\n");

		printf("xin moi chon : \n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("------------Chuc nang so 1: TINH TRUNG BINH CONG --------");
			break;
		case 2:
			printf("-----------Chuc nang so 2. TIM SO NGUYEN TO -----------");
			break;
		case 3:
			printf("------------Chuc nang so 3: TIM SO CHINH PHUONG ------------");
			break;
		case 4:

			exit(0);
		}
	} while (a != 1 && a != 2 && a != 3);

	return (0);
}