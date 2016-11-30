#include"ThreeChess.h"
#define _CRT_SECURE_NO_WARNINGS 1

void FunTest()
{
	int select = 0;

	while(1)
	{
		printf("------------------------------------\n");
		printf("------------- 1. play---------------\n");
		printf("------------- 2. exit---------------\n");
		printf("------------------------------------\n");
		printf("请选择:>\n");
		scanf("%d",&select);
		switch(select)
		{
		case 1:
			Game();
			break;
		case 2:
			return;
		default:
			break;
		}
	}
}

int main()
{
	FunTest();
	return 0;
}
