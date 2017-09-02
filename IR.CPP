#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
class TICKETS
{
	int tno,noof1ac,noof2ac,noof3ac,noofsc,noofcc,fare,stax;
	char tnm[80],from[80],to[80],name[80],dtofj[80],sex[10],status[80],uid[80],pwd[80];
	int pnrno,acfc,acsc,actc,scs,ccs,age,cno,sno;
	public:
	TICKETS()
	{
		tno=999999;
		noof1ac=400;
		noof2ac=400;
		noof3ac=400;
		noofsc=400;
		noofcc=400;
		acfc=0;
		acsc=0;
		actc=0;
		scs=0;
		ccs=0;
		strcpy(tnm,"RAJDHANI EXPRESS");
		strcpy(from,"NEW DELHI RLY");
		strcpy(to,"MUMBAI CENTRAL");
	}
	void GET();
	void SHOW();
	void RESERVATION();
	void CANCELLATION();
	void PNR();
	void MODIFY();
	int retpnrno();
}T;
int TICKETS::retpnrno(){return pnrno;}
void TICKETS::GET()
{       clrscr();
	gotoxy(10,7);
	cout<<"ENTER TRAIN NAME";
	gotoxy(56,7);
	gets(tnm);
	gotoxy(10,8);
	cout<<"ENTER DATE OF JOURNEY";
	gotoxy(56,8);
	cin>>dtofj;
	gotoxy(10,9);
	cout<<"FROM:";
	gotoxy(56,9);
	gets(from);
	gotoxy(10,10);
	cout<<"TO";
	gotoxy(56,10);
	gets(to);
}
void TICKETS::SHOW()
{	clrscr();
	gotoxy(10,6);
	cout<<"TRAIN NAME";
	gotoxy(56,6);
	puts(tnm);
	gotoxy(10,7);
	cout<<"TRAIN NUMBER ";
	gotoxy(56,7);
	cout<<tno;
	gotoxy(10,8);
	cout<<"DATE OF JOURNEY";
	gotoxy(56,8);
	cout<<dtofj;
	gotoxy(10,9);
	cout<<"DATE OF BOARDING";
	gotoxy(56,9);
	cout<<dtofj;
	gotoxy(10,10);
	cout<<"FROM:";
	gotoxy(56,10);
	puts(from);
	gotoxy(10,11);
	cout<<"TO";
	gotoxy(56,11);
	puts(to);
}
void TICKETS::RESERVATION()
{
	clrscr();
	gotoxy(10,10);
	cout<<"User ID\t\t";
	cin>>T.uid;
	gotoxy(10,11);
	cout<<"Password\t";
	for(int i=0;i<80;i++)
	{
		T.pwd[i]=getch();
		cout<<"*";
		if(T.pwd[i]==(char)13)
		break;
	}
	clrscr();
	randomize();
	tno=random(500)+10000;
	fstream f("IND_RAIL.DAT",ios::binary|ios::app|ios::in);
	gotoxy(15,8);
	cout<<"PRESS ANY KEY TO CONTINUE!!!!";
	getch();
	clrscr();
	gotoxy(10,5);
	cout<<"PROCESSING....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	clrscr();
	gotoxy(10,8);
	cout<<"PLEASE ENTER FOLOWING DETAILS";
	gotoxy(10,10);
	cout<<"NAME:";
	gotoxy(20,10);
	gets(name);
	gotoxy(10,12);
	cout<<"AGE:";
	gotoxy(20,12);
	cin>>age;
	gotoxy(10,14);
	cout<<"SEX:";
	gotoxy(20,14);
	cin>>sex;
	gotoxy(10,16);
	cout<<"PRESS ANY KEY TO ENTER INTO NEW PAGE";
	getch();
	T.GET();
	clrscr();
	gotoxy(10,5);
	cout<<"THE DETAILS ARE....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	delay(200);
	cout<<"....";
	clrscr();
	gotoxy(10,4);
	cout<<"PASSENGER DETAILS";
	gotoxy(10,5);
	cout<<"NAME:";
	gotoxy(56,5);
	cout<<name;
	gotoxy(10,6);
	cout<<"AGE:";
	gotoxy(56,6);
	cout<<age;
	gotoxy(10,7);
	cout<<"SEX:";
	gotoxy(56,7);
	cout<<sex;
	gotoxy(10,8);
	cout<<"USER ID:";
	gotoxy(56,8);
	cout<<uid;
	gotoxy(10,12);
	cout<<"PRESS ANY KEY TO SEE FURTHER DETAILS";
	getch();
	T.SHOW();
	cout<<"\nPRESS ANY KEY TO CONTINUE";
	getch();
	clrscr();
	gotoxy(10,6);
	cout<<"SELECT THE CLASS IN WHICH YOU WISH TO TRAVEL";
	gotoxy(10,8);
	cout<<"1.A/C FIRST CLASS " ;
	gotoxy(10,9);
	cout<<"2.A/C SECOND CLASS " ;
	gotoxy(10,10);
	cout<<"3.A/C THIRD CLASS " ;
	gotoxy(10,11);
	cout<<"4.FIRST CLASS SLEEPER " ;
	gotoxy(10,12);
	cout<<"5.A/C CHAIR CAR  ";
	gotoxy(10,13);
	cout<<" ENTER YOUR CHOICE";
	gotoxy(30,13);
	int c;
	cin>>c;
	clrscr();
	gotoxy(10,13);
	cout<<"PRESS ANY KEY TO SEE FARE DETAILS";
	getch();
	clrscr();
	gotoxy(10,6);
	cout<<"FARE DETAILS";
	gotoxy(10,8);
	cout<<"TICKET FARE:";
	randomize();
	fare=random(2000)+500;
	gotoxy(40,8);
	cout<<"Rs"<<fare;
	gotoxy(10,9);
	cout<<"IRCTC Service Charge";
	gotoxy(10,10);
	cout<<"(Incl. of Service Tax)";
	stax=random(10);
	gotoxy(40,9);
	cout<<"Rs"<<stax;
	gotoxy(10,12);
	cout<<"TOTAL";
	gotoxy(40,12);
	cout<<"Rs."<<fare+stax;
	gotoxy(4,14);
	cout<<"This ticket is booked on a personal user ID and cannot be sold by an agent.\n If bought from an agent by any individual, it is at his/her own risk";
	getch();
	clrscr();
	gotoxy(15,10);
	cout<<"PLEASE WAIT....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	delay(100);
	cout<<".....";
	clrscr();
	switch(c)
	{       randomize();
		case 1:acfc++;
		pnrno=random(200)+20000;
		cno=random(6)+1;
		sno=random(399)+1;
		if((noof1ac-acfc)>0)
		{       clrscr();
			strcpy(status,"CONFIRMED");
			gotoxy(10,10) ;
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"=======HAPPY JOURNEY=========";
			gotoxy(15,14);
			cout<<"RESERVATION CUM PNR NO, PLEASE NOTE YOUR RESERVATION NO.";
			gotoxy(15,15);
			cout<<pnrno;
			gotoxy(15,17);
			cout<<"COACH NO.";
			gotoxy(40,17);
			cout<<cno;
			gotoxy(15,18);
			cout<<"SEAT NO.";
			gotoxy(40,18);
			cout<<sno;
			getch();
			break;
		}
		else
		{       clrscr();
			strcpy(status,"PENDING");
			gotoxy(10,10);
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"========SORRY,FOR INCONVINIENCE============";
			getch();
			break;
		}
		case 2:acsc++;
		pnrno=random(200)+20000;
		cno=random(6)+1;
		sno=random(399)+1;
		if((noof2ac-acsc)>0)
		{       clrscr();
			strcpy(status,"CONFIRMED");
			gotoxy(10,10);
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"==============HAPPY JOURNEY=============";
			gotoxy(15,14);
			cout<<"RESERVATION CUM PNR NO, PLEASE NOTE YOUR RESERVATION NO.";
			gotoxy(15,15);
			cout<<pnrno;
			gotoxy(15,17);
			cout<<"COACH NO.";
			gotoxy(40,17);
			cout<<cno;
			gotoxy(15,18);
			cout<<"SEAT NO.";
			gotoxy(40,18);
			cout<<sno;
			getch();
			break;
		}
		else
		{       clrscr();
			strcpy(status,"PENDING");
			gotoxy(10,10);
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"============SORRY, FOR INCOVINIENCE==========";
			getch();
			break;
		}
		case 3:actc++;
		pnrno=random(200)+20000;
		cno=random(6)+1;
		sno=random(399)+1;
		if((noof3ac-actc)>0)
		{       clrscr();
			strcpy(status,"CONFIRMED");
			gotoxy(10,10) ;
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"==============HAPPY JOURNEY=============";
			gotoxy(15,14);
			cout<<"RESERVATION CUM PNR NO, PLEASE NOTE YOUR RESERVATION NO.";
			gotoxy(15,15);
			cout<<pnrno;
			gotoxy(15,17);
			cout<<"COACH NO.";
			gotoxy(40,17);
			cout<<cno;
			gotoxy(15,18);
			cout<<"SEAT NO.";
			gotoxy(40,18);
			cout<<sno;
			getch();
			break;
		}
		else
		{       clrscr();
			strcpy(status,"PENDING");
			gotoxy(10,10);
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"============SORRY, FOR INCOVINIENCE============";
			getch();
			break;
		}
		case 4:scs++;
		pnrno=random(200)+20000;
		cno=random(6)+1;
		sno=random(399)+1;
		if((noofsc-scs)>0)
		{       clrscr();
			strcpy(status,"CONFIRMED");
			gotoxy(10,10) ;
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"==============HAPPY JOURNEY=============";
			gotoxy(15,14);
			cout<<"RESERVATION CUM PNR NO, PLEASE NOTE YOUR RESERVATION NO.";
			gotoxy(15,15);
			cout<<pnrno;
			gotoxy(15,17);
			cout<<"COACH NO.";
			gotoxy(40,17);
			cout<<cno;
			gotoxy(15,18);
			cout<<"SEAT NO.";
			gotoxy(40,18);
			cout<<sno;
			getch();
			break;
		}
		else
		{       clrscr();
			strcpy(status,"PENDING");
			gotoxy(10,10);
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"============SORRY, FOR INCOVINIENCE============";
			getch();
			break;
		}
		case 5:ccs++;
		pnrno=random(200)+20000;
		cno=random(6)+1;
		sno=random(399)+1;
		if((noofcc-ccs)>0)
		{       clrscr();
			strcpy(status,"CONFIRMED");
			gotoxy(10,10) ;
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"==============HAPPY JOURNEY=============";
			gotoxy(15,14);
			cout<<"RESERVATION CUM PNR NO, PLEASE NOTE YOUR RESERVATION NO.";
			gotoxy(15,15);
			cout<<pnrno;
			gotoxy(15,17);
			cout<<"COACH NO.";
			gotoxy(40,17);
			cout<<cno;
			gotoxy(15,18);
			cout<<"SEAT NO.";
			gotoxy(40,18);
			cout<<sno;
			getch();
			break;
		}
		else
		{       clrscr();
			strcpy(status,"PENDING");
			gotoxy(10,10);
			cout<<"STATUS";
			gotoxy(30,10);
			puts(status);
			gotoxy(15,12);
			cout<<"============SORRY, FOR INCOVINIENCE============";
			getch();
			break;
		}
		default:gotoxy(10,16);
			cout<<"PLEASE ENTER VALID CHOICE";
			getch();
	}
	f.write((char*)&T,sizeof(T));
	f.close();
}
void TICKETS::CANCELLATION()
{       clrscr();
	fstream f1("IND_RAIL.DAT",ios::binary|ios::in|ios::app);
	fstream f2("IND_TEMP.DAT",ios::binary|ios::out);
	f1.seekg(ios::beg);
	gotoxy(10,10);
	cout<<"ENTER THE RESERVATION OR PNR NO \t";
	int r,tag=1;
	cin>>r;
	while(f1.read((char*)&T,sizeof(T)))
	{
		if(T.retpnrno()!=r)
		{
			f2.write((char*)&T,sizeof(T));
		}
		if(T.retpnrno()==r)
			tag=0;
	}
	remove("IND_RAIL.DAT");
	rename("IND_TEMP.DAT","IND_RAIL.DAT");
	if(tag==1)
	{
		gotoxy(10,12);
		cout<<"NO SUCH RESERVATION IS MADE !!!PLEASE RETRY....";
		getch();
	}
	else
	{       clrscr();
		gotoxy(10,12);
		cout<<"CANCELLING.......\n\t\tPLEASE WAIT....";
		delay(2000);
		clrscr();
		gotoxy(10,12);
		cout<<"RESERVATION CANCELLED";
		getch();
	}
	f1.close();
	f2.close();
}
void TICKETS::PNR()
{       int tag=1,pnr;
	clrscr();
	fstream f3("IND_RAIL.DAT",ios::binary|ios::in|ios::app);
	gotoxy(10,10);
	cout<<"ENTER PNR NO.\t";
	cin>>pnr;
	f3.seekg(ios::beg);
	while(f3.read((char*)&T,sizeof(T)))
	{       clrscr();
		if(T.retpnrno()==pnr)
		{       tag=0;
			clrscr();
			SHOW();
			gotoxy(4,2);
			cout<<"This ticket will only be valid along with an ID proof in original.";
			gotoxy(4,3);
			cout<<"If found travelling without ID Proof,Passenger will be treated as without" ;
			gotoxy(4,4);
			cout<<"Ticket and charged as per extant Railway rules";
			gotoxy(10,12);
			cout<<"PASSENGER DETAILS";
			gotoxy(15,13);
			cout<<"NAME:";
			gotoxy(40,13);
			cout<<name;
			gotoxy(15,14);
			cout<<"AGE:";
			gotoxy(40,14);
			cout<<age;
			gotoxy(15,15);
			cout<<"SEX:";
			gotoxy(40,15);
			cout<<sex;
			gotoxy(15,16);
			cout<<"USER ID";
			gotoxy(40,16);
			cout<<uid;
			gotoxy(10,17);
			cout<<"FARE DETAILS";
			gotoxy(15,18);
			cout<<"TICKET FARE:";
			gotoxy(40,18);
			cout<<"Rs"<<fare;
			gotoxy(15,19);
			cout<<"IRCTC Service Charge";
			gotoxy(15,20);
			cout<<"(Incl. of Service Tax)";
			gotoxy(40,19);
			cout<<"Rs"<<stax;
			gotoxy(15,21);
			cout<<"TOTAL";
			gotoxy(40,21);
			cout<<"Rs."<<fare+stax;
			gotoxy(15,22);
			cout<<"STATUS";
			gotoxy(40,22);
			cout<<status;
			gotoxy(15,23);
			cout<<"COACH NO.";
			gotoxy(40,23);
			cout<<cno;
			gotoxy(15,24);
			cout<<"SEAT NO.";
			gotoxy(40,24);
			cout<<sno;
			gotoxy(4,25);
			cout<<"This ticket is booked on a personal user ID and cannot be sold by an agent.\n If bought from an agent by any individual, it is at his/her own risk.";
			getch();
			break;
		}
		else
			tag=1;
	}
	if(tag==1)
	{
		gotoxy(10,12);
		cout<<"NO RECORD FOUND !!!PLEASE RETRY....";
		getch();
	}
	f3.close();
	clrscr();
}
void TICKETS::MODIFY()
{
	clrscr();
	int pnr,tag=1;
	fstream f4("IND_RAIL.DAT",ios::binary|ios::in|ios::out);
	gotoxy(20,4);
	cout<<"ENTER PNR NO. TO MODIFY THE TICKET\t";
	cin>>pnr;
	while(f4.read((char*)&T,sizeof(T)))
	{
		if(T.retpnrno()==pnr)
		{       tag=0;
			clrscr();
			gotoxy(20,6);
			cout<<"TO ENTER NEW DETAILS.... press any key";
			getch();
			f4.seekg(f4.tellp()-sizeof(T),ios::beg);
			clrscr();
			gotoxy(10,5);
			cout<<"PROCESSING....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			cout<<"....";
			delay(200);
			clrscr();
			gotoxy(10,8);
			cout<<"PLEASE ENTER FOLOWING DETAILS";
			gotoxy(10,10);
			cout<<"NAME:";
			gotoxy(20,10);
			gets(name);
			gotoxy(10,12);
			cout<<"AGE:";
			gotoxy(20,12);
			cin>>age;
			gotoxy(10,14);
			cout<<"SEX:";
			gotoxy(20,14);
			cin>>sex;
			gotoxy(10,16);
			cout<<"PRESS ANY KEY TO ENTER INTO NEW PAGE";
			getch();
			T.GET();
			clrscr();
			f4.write((char*)&T,sizeof(T));
			break;
		}
		else
			tag=1;
	}
	if(tag==1)
	{       clrscr();
		gotoxy(10,4);
		cout<<"PLEASE WAIT....";
		delay(400);
		cout<<"....";
		delay(400);
		cout<<"....";
		delay(400);
		cout<<"....";
		delay(400);
		cout<<"....";
		gotoxy(20,10);
		cout<<"RECORD NOT FOUND !!!PLEASE RETRY....";
	}
	else if(tag==0)
	{
		clrscr();
		gotoxy(10,4);
		cout<<"PLEASE WAIT....";
		delay(400);
		cout<<"....";
		delay(400);
		cout<<"....";
		delay(400);
		cout<<"....";
		delay(400);
		cout<<"....";
		gotoxy(20,10);
		cout<<"RECORD MODIFIED";
	}
	f4.close();
	getch();
	clrscr();
}
void main()
{
	clrscr();
	int ch;
	long pnr;
	gotoxy(8,10);
	cout<<"LOADING.....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	cout<<"....";
	delay(400);
	clrscr();
	gotoxy(16,5);
	cout<<"============================================";
	gotoxy(34,7);
	cout<<"WELCOME";
	gotoxy(37,8);
	cout<<"TO";
	gotoxy(26,9);
	cout<<"IRCTCs e-Ticketing Service";
	gotoxy(22,20);
	cout<<"===============================";
	gotoxy(26,21);
	cout<<"DEVELOPED BY PARV JAIN";
	delay(2000);
	clrscr();
	while(1)
	{
		gotoxy(35,5);
		cout<<"MENU";
		gotoxy(25,7);
		cout<<"1.RESERVING A TICKET";
		gotoxy(25,8);
		cout<<"2.CANCELLING A TICKET";
		gotoxy(25,9);
		cout<<"3.PNR ENQIRY CUM PRESENT TICKET STATUS";
		gotoxy(25,10);
		cout<<"4.TO MODIFY TICKET";
		gotoxy(25,11);
		cout<<"5.EXIT";
		gotoxy(25,13);
		cout<<"PLAESE ENTER YOUR CHOICE\t";
		cin>>ch;
		switch(ch)
		{
			case 1: T.RESERVATION();
				clrscr();
				break;
			case 2: T.CANCELLATION();
				clrscr();
				break;
			case 3: T.PNR();
				break;
			case 4: T.MODIFY();
				break;
			case 5: exit(0);
				break;
			default:gotoxy(25,15);
				cout<<"PLEASE ENTER VALID CHOICE";
				getch();
				clrscr();
		}
	}
	getch();
}
