/* 計算機概論實務-基本練習作業-作業6*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫int 
int main(void)
{
	int year; //定義 
	printf("輸入一個西元年數：\n");
	scanf("%d" , &year); //輸入年份 
	if(year % 400 == 0 )  //被400整除
			printf("%d年是閏年\n",year);  
	else if(year % 100 == 0) //被100整除 
			printf("%d年是平年\n",year);
	else if(year % 4 == 0) //被4整除 
			printf("%d年是閏年\n",year);
	else
			printf("%d年是平年\n",year); //其他都是平年 
    system("pause"); //暫停視窗 
    return 0; //回傳值為0  
}
