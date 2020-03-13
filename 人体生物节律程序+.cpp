#include <stdio.h>
#include <math.h>
#include <iostream>
int main()
{
	int thisyear,thismonth,thisday,pastyear,pastmonth,pastday,leaps,x,y,SUM,years1,
		years2,yeardiff,labor,emotion,widsom;
	printf("请输入你的出生年月日：");
	scanf_s("%ld %ld %ld",&pastyear,&pastmonth,&pastday);
	printf("你的出生年月日为：%ld,%ld,%ld\n",pastyear,pastmonth,pastday);
	printf("今天的日期为：");
	scanf_s("%ld %ld %ld",&thisyear,&thismonth,&thisday);
	printf("今天的日期为：%ld,%ld,%ld\n",thisyear,thismonth,thisday);
	
	if((pastyear%4==0&&pastyear%100!=0)||(pastyear%400==0))
	{
	
	switch(pastmonth)
	{
	case 1:x=0;break;
	case 2:x=31;break;
	case 3:x=31+29;break;
	case 4:x=31+29+31;break;
	case 5:x=31+29+31+30;break;
	case 6:x=31+29+31+30+31;break;
	case 7:x=31+29+31+30+31+30;break;
	case 8:x=31+29+31+30+31+30+31;break;
	case 9:x=31+29+31+30+31+30+31+31;break;
	case 10:x=31+29+31+30+31+30+31+31+30;break;
	case 11:x=31+29+31+30+31+30+31+31+30+31;break;
	case 12:x=31+29+31+30+31+30+31+31+30+31+30;break;
		break;
	}
	}
	else 
		switch(pastmonth)
	{
	case 1:x=0;break;
	case 2:x=31;break;
	case 3:x=31+28;break;
	case 4:x=31+28+31;break;
	case 5:x=31+28+31+30;break;
	case 6:x=31+28+31+30+31;break;
	case 7:x=31+28+31+30+31+30;break;
	case 8:x=31+28+31+30+31+30+31;break;
	case 9:x=31+28+31+30+31+30+31+31;break;
	case 10:x=31+28+31+30+31+30+31+31+30;break;
	case 11:x=31+28+31+30+31+30+31+31+30+31;break;
	case 12:x=31+28+31+30+31+30+31+31+30+31+30;break;
		break;
	}
		
			
	if((thisyear%4==0&&thisyear%100!=0)||(thisyear%400==0))
	{
	
	switch(thismonth)
	{
	case 1:y=0;break;
	case 2:y=31;break;
	case 3:y=31+29;break;
	case 4:y=31+29+31;break;
	case 5:y=31+29+31+30;break;
	case 6:y=31+29+31+30+31;break;
	case 7:y=31+29+31+30+31+30;break;
	case 8:y=31+29+31+30+31+30+31;break;
	case 9:y=31+29+31+30+31+30+31+31;break;
	case 10:y=31+29+31+30+31+30+31+31+30;break;
	case 11:y=31+29+31+30+31+30+31+31+30+31;break;
	case 12:y=31+29+31+30+31+30+31+31+30+31+30;break;
		break;
	}
	}

	else 
		switch(thismonth)
	{
	case 1:y=0;break;
	case 2:y=31;break;
	case 3:y=31+28;break;
	case 4:y=31+28+31;break;
	case 5:y=31+28+31+30;break;
	case 6:y=31+28+31+30+31;break;
	case 7:y=31+28+31+30+31+30;break;
	case 8:y=31+28+31+30+31+30+31;break;
	case 9:y=31+28+31+30+31+30+31+31;break;
	case 10:y=31+28+31+30+31+30+31+31+30;break;
	case 11:y=31+28+31+30+31+30+31+31+30+31;break;
	case 12:y=31+28+31+30+31+30+31+31+30+31+30;break;
		break;
	}



	yeardiff=thisyear-pastyear;
	years1=365*yeardiff;
	leaps=years1/4;
	years2=years1+leaps;
	SUM=years2-(x+pastday)+(y+thisday);
	labor=SUM%23;
	emotion=SUM%28;
	widsom=SUM%33;

	printf("你的体力节律体力周期为：%ld\n",labor);
	printf("你的情绪节律情绪周期为：%ld\n",emotion);
	printf("你的智慧节律智慧周期为：%ld\n",widsom);


  if(labor>=1&&labor<=3)
  {printf("你的体力节律处于临界期！最近要劳逸结合哟~\n");}
 else if((labor>=4&&labor<=12)||(labor>=19&&labor<=26))
  {printf("你的体力节律处于低潮期！不要劳动过多，以免对身体不好呢~\n");}
else 
	printf("你的体力节律处于高潮期！可以加强运动，也不会觉得很累哪~\n");
	if(emotion>=1&&emotion<=3)
	{printf("你的情绪节律处于临界期，要注意随时坏脾气可能爆发哟！\n");}
	else if((emotion>=4&&emotion<=12)||(emotion>=20&&emotion<=26))
	{  printf("你的情绪节律处于低谷期，坏脾气太多可不太好哟！\n");}
	else 
	printf("你的情绪节律处于高潮期，你的情绪正在泛滥，希望是好情绪呢！\n");
	if(widsom>=1&&widsom<=3)
		{printf("你的智慧水平还行，再接再厉！\n");}
	else if((widsom>=4&&widsom<=12)||(widsom>=20&&widsom<=26))
	{printf("你的智商处于低谷期，多动动脑筋哟~\n");}
	else 
	printf("你的智商太棒啦！你太聪明啦！\n");
	

	

		system("pause");
		return 0;

}