#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int list();
void diposite();
void last();
void transfer();
void withdrow();
void checkDetail();
void sound();
int TotalAmount=1000,Amount,Amo,Tr,TotalDiposite=0,Totalwith=0,TotalTr=0,flag=0;
int Acc=90,acc,acc2;
char name1[50],name2[50];
void main()
{
	textbackground(6);
	textcolor(0);
	clrscr();
	printf("\n\n\n\n\n\n\n\t\t\tEnter your Name          : ");
	gets(name1);
	printf("\n\n\t\t\tEnter your Account Number: ");
	scanf("%d",&acc);
	if(acc==Acc)
	{
	sound();
	while(1)
	{
		clrscr();
		switch(list())
		{
			case 1:
				diposite();
				TotalDiposite+=Amount;
				break;

			case 2:
				withdrow();
				if(Amo<=TotalAmount)
				Totalwith+=Amo;
				break;
			case 3:

				printf("\nEnter the Transfer account holder Name  :");
				fflush(stdin);
				gets(name2);
				printf("\nEnter the Transfer account Number       :");
				scanf("%d",&acc2);
				transfer();
				if(Tr<=TotalAmount)
				TotalTr+=Tr;
				flag=1;
				break;

			case 4:
				checkDetail();
				break;
			case 5:
				clrscr();
				last();
				getch();
				exit(0);
				break;

			default:
				printf("\nInvalid Choice:");
		}
		getch();
	}
	}
	else
		printf("\nInvalid Account number:");

}
int list()
{
	int ch;
	printf("\n\n\n\t\t\t1. Diposite Amount   :");
	printf("\n\n\t\t\t2. Withdrow Amount   :");
	printf("\n\n\t\t\t3. Transfer Amount   :");
	printf("\n\n\t\t\t4. Check Detail      :");
	printf("\n\n\t\t\t5. Exit              :");
	printf("\n\n\t\t\tEnter your Choice    :");
	scanf("%d",&ch);
	return(ch);

}
void diposite()
{
	printf("\nEnter the Amount you want to diposite:");
	scanf("%d",&Amount);
	TotalAmount+=Amount;
}
void withdrow()
{
	printf("\nEnter The Amount u wish to withdrow:");
	scanf("%d",&Amo);
	if(Amo<=TotalAmount)
		TotalAmount-=Amo;
	else
		printf("\nLess Amount Withdrow is not posible:");
}
void transfer()
{
       printf("\nEnter the Amount you want to Transfer:");
       scanf("%d",&Tr);
       if(Tr<=TotalAmount)
		TotalAmount-=Tr;
	else
		printf("\nLess Amount Trasfer is not possible:");
}
void checkDetail()
{
	printf("\n\t\t\tTotal Amount =  %d",TotalAmount);
	printf("\n\t\t\tTotal Diposited Amount = %d",TotalDiposite);
	printf("\n\t\t\tTotal Withdrow Amount = %d",Totalwith);
	printf("\n\t\t\tTotal Transfer Amount = %d",TotalTr);
	if(flag==1)
	{
		printf("\n\t\t\t    (Transfer Account holder Name   = %s)",name2);
		printf("\n\t\t\t    (Transfer Account holder Number = %d)",acc2);
	}
}
void last()
{
	printf("\n\n\n\n\t\t\t************************************\n");
	printf("\n\t\t\tyour Name              = %s",name1);
	printf("\n\n\t\t\tyour Account Numeber   = %d",Acc);
	printf("\n\n\t\t\tTotal Amount           = %d",TotalAmount);
	printf("\n\n\t\t\tTotal Diposited Amount = %d",TotalDiposite);
	printf("\n\n\t\t\tTotal Withdrow Amount  = %d",Totalwith);
	printf("\n\n\t\t\tTotal Transfer Amount  = %d",TotalTr);
	printf("\n\n\t\t\t***************THANKS***************\n");
}
void sound()
{
	int i;
	for(i=15;i<=500;i++)
	{

		sound(i*65);
		delay(15);
		nosound();
	}
	getch();
}

