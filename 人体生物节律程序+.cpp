#include <stdio.h>
#include <math.h>
#include <iostream>
int main()
{
	int thisyear,thismonth,thisday,pastyear,pastmonth,pastday,leaps,x,y,SUM,years1,
		years2,yeardiff,labor,emotion,widsom;
	printf("��������ĳ��������գ�");
	scanf_s("%ld %ld %ld",&pastyear,&pastmonth,&pastday);
	printf("��ĳ���������Ϊ��%ld,%ld,%ld\n",pastyear,pastmonth,pastday);
	printf("���������Ϊ��");
	scanf_s("%ld %ld %ld",&thisyear,&thismonth,&thisday);
	printf("���������Ϊ��%ld,%ld,%ld\n",thisyear,thismonth,thisday);
	
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

	printf("�������������������Ϊ��%ld\n",labor);
	printf("�������������������Ϊ��%ld\n",emotion);
	printf("����ǻ۽����ǻ�����Ϊ��%ld\n",widsom);


  if(labor>=1&&labor<=3)
  {printf("����������ɴ����ٽ��ڣ����Ҫ���ݽ��Ӵ~\n");}
 else if((labor>=4&&labor<=12)||(labor>=19&&labor<=26))
  {printf("����������ɴ��ڵͳ��ڣ���Ҫ�Ͷ����࣬��������岻����~\n");}
else 
	printf("����������ɴ��ڸ߳��ڣ����Լ�ǿ�˶���Ҳ������ú�����~\n");
	if(emotion>=1&&emotion<=3)
	{printf("����������ɴ����ٽ��ڣ�Ҫע����ʱ��Ƣ�����ܱ���Ӵ��\n");}
	else if((emotion>=4&&emotion<=12)||(emotion>=20&&emotion<=26))
	{  printf("����������ɴ��ڵ͹��ڣ���Ƣ��̫��ɲ�̫��Ӵ��\n");}
	else 
	printf("����������ɴ��ڸ߳��ڣ�����������ڷ��ģ�ϣ���Ǻ������أ�\n");
	if(widsom>=1&&widsom<=3)
		{printf("����ǻ�ˮƽ���У��ٽ�������\n");}
	else if((widsom>=4&&widsom<=12)||(widsom>=20&&widsom<=26))
	{printf("������̴��ڵ͹��ڣ��ද���Խ�Ӵ~\n");}
	else 
	printf("�������̫��������̫��������\n");
	

	

		system("pause");
		return 0;

}