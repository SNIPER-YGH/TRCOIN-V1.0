#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h> 
//2020-02-09 V-1.0 function:1.dig 2.trade 3.history 4.THANK&VERSION 5.exit
//2020-      V-1.6 function:1.dig 2.trade 3.history 4.THANK&VERSION 5.RMBshop 6.house 7.event 8.exit
using namespace std;
int times=888*888,pocket=0,trcoin=0,tp=1,sr=0,swait=0;
int wtrcoin=0,digtimes=0,buytimes=0,selltimes=0,trno=0;
const int automatic=88888,lottery=6666,er=588;
double wait=1000;
void out(char a[])
{
	int s=strlen(a);
	for(int i=0;i<s;i++)
	{
		cout<<a[i];
		Sleep(100);
	}
}
void encode()
{
	srand(time(0));
	int sr=rand()%times+1;
} 
void decode()
{
	int i=0;
	encode();
	while(i!=sr)
	{
		for(;i<times*times;i++)
		{
		}
	}
	trcoin+=sqrt(sqrt(sqrt(wait)));
	wtrcoin+=sqrt(sqrt(sqrt(wait)));
	digtimes++;
	srand(time(0));
	swait=rand()%1999+1;
	wait+=swait;
	Sleep(1000+wait);
}
void mine()
{
	MI:
	cout<<"TRCOIN NUM:"<<trcoin<<endl<<"GO DIGGING? 1.YES 2.NO 3.exit"<<endl;
	char g=getch();
	if(g<'1'||g>'3')
	{
		out("TRDEFENSE IS DEFENSING."); 
		system("cls");
		goto MI;
	}
	if(g=='1')
	{
		cout<<"Digging!Expect wait time:"<<wait/1000+1<<"s";
		decode();
		system("cls");
		tp+=sqrt(wait);
		goto MI;
	}
}
void sell()
{
	cout<<"SELL ONE?"<<endl<<"1.YES 2.exit"<<endl;
	char get=getch();
	if(get=='1')
	{
		trcoin--;
		pocket+=tp;
		selltimes++;
	}
	out("OK!");
	cout<<endl;
	if(get>'3'||get<'1') 
	{
		system("cls");
		out("TRDEFENSE IS DEFENSING.");
	}
}
void buy()
{
	cout<<"BUY ONE?"<<endl<<"1.YES 2.exit"<<endl;
	char get=getch();
	if(get=='1')
	{
		pocket-=tp;
		trcoin++;
		buytimes++;
	}
	out("OK!");
	cout<<endl;
	if(get>'3'||get<'1') 
	{
		system("cls");
		out("TRDEFENSE IS DEFENSING.");
	}
}
void market()
{
	MA:
	cout<<"TRCOIN NUM:"<<trcoin<<" POCKET RMB:"<<pocket<<endl;
	cout<<"1 TRCOIN="<<tp<<" RMB"<<endl;
	cout<<"GO TRADING? 1.SELL 2.BUY 3.exit"<<endl;
	char g=getch();
	if(g<'1'||g>'3')
	{
		system("cls");
		out("TRDEFENSE IS DEFENSING."); 
		system("cls");
		goto MA;
	}
	if(g=='1'&&trcoin>0)
	{
		system("cls");
		sell();
		system("cls");
		goto MA;
	}
	if(g=='1'&&trcoin==0)
	{
		system("cls");
		out("GO DIGGING!YOU DON'T HAVE ANY TRCOINS!");
		system("cls");
		goto MA;
	}
	if(g=='2'&&pocket>=tp)
	{
		system("cls");
		buy();
		system("cls");
		goto MA;
	}
	if(g=='2'&&trcoin<tp)
	{
		system("cls");
		out("GO SELLING!YOU DON'T HAVE ANY RMB!");
		system("cls");
		goto MA;
	}
}
void history()
{
	out("You have digged: ");
	cout<<wtrcoin<<" TRCOINS"<<endl;
	out("You have sold TRCOINS for: ");
	cout<<selltimes<<" times"<<endl;
	out("You have bought TRCOINS for: ");
	cout<<buytimes<<" times"<<endl;
}
void thank()
{
	if(trno==0)
	{
	out("First,thank you for running this code.");
	cout<<endl; 
	out("As a thank,I will give you 200 TRCOINS.");
	trcoin+=200;
	trno++;
	cout<<endl;
	out("This program was coded by YGH,tested by his father.");
	cout<<endl;
	out("This program is V-1.0.");
	cout<<endl;
	out("This is my first time code.So if you have some advice,you can email me.");
	cout<<endl;
	out("My email address is ygh@foxmail.com.Welcome to email me!");
	}
	else
	{
		out("First,thank you for running this code.");
		cout<<endl; 
		out("As a thank,I will give you 200 TRCOINS.");
		cout<<endl;
		out("This program was coded by YGH,tested by his father.");
		cout<<endl;
		out("This program is V-1.0.");
		cout<<endl;
		out("This is my first time code.So if you have some advice,you can email me.");
		cout<<endl;
		out("My email address is ygh@foxmail.com.Welcome to email me!");
	}
}
void home()
{
	HO:
	out("1.dig 2.trade 3.history 4.THANK&VERSION 5.exit\n");
	char g=getch();
	if(g>'5'||g<'1')
	{
		out("TRDEFENSE IS DEFENSING."); 
		system("cls");
		goto HO;
	}	
	if(g=='1')
	{
		system("cls");
		mine();
		system("cls");
		goto HO;
	}
	if(g=='2')
	{
		system("cls");
		market();
		system("cls");
		goto HO;
	} 
	if(g=='3')
	{
		system("cls");
		history();
		Sleep(5000);
		system("cls");
		goto HO;
	}
	if(g=='4')
	{
		system("cls");
		thank();
		Sleep(5000);
		system("cls");
		goto HO;
	} 
}
int main()
{
	system("title TRCOIN-1.0");
	out("Start your TRCOIN digging!\n");
	home(); 
	return 0;
}
