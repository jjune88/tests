#include <stdio.h>

int main()
{
	int a; a=0;
	
	printf("1.하늘을 달리다\n");
	printf("2.땅바닥 달리다\n");
	printf("3.솔로는영화따위\n");
	printf("다른번호누르면 종료\n");
	
	scanf("%d", &a );
	if( a == 1)
	{
	  printf("1.하늘을 달리다\n");
	}	
	if( a == 2)
	{ 
	  printf("2.땅바닥 달리다\n");
  	}
	if( a == 3)
	{
	  printf("3.ㅠㅠ솔로였어..\n");
  	}
	if( a > 3)
	{ 
	  printf("다시 실행하자 \n");
	}
	  return 0;
}

