#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>
#include<graphics.h>
	struct avon
	{
		int id;
		char fname[20],lname[20],dob[10],email[10],city[10],add[10],ph[10];
		 }a[10];
	void frmt();
	void join();
	void display();
	void login();
	void order();
	void modify();
	void del();
	int i=0;
	void main()
	{
		textbackground(RED);
		textcolor(WHITE);
		clrscr();
		cout<<"\n\n\t\t\t"; char t;
		cout<<setw(20)<<"*** KANHA MAKHAN PUBLIC SCHOOL ***\n";
		cout<<"\t\t\t^^^++++++++++++++++++++++++++++^^^\n\n";
		delay(1000);
		cout<<"\n\t\t\t";
		for(int j=0;j<=2;j++)
		{
		delay(50);
		cout<<"*";
		}
		cout<<"INVOICE MANAGEMENT";
		delay(50);
		cout<<" ***\n";
		delay(500);
		cout<<"\t\t\t^^^++++++++++++++++++++^^^\n\n";
		cout<<"\n\n\n";	cout<<"\t\t\t";
		cout<<"*** Avon AGL(ADVANCE GROUP LEADER)Records  ***";
		cout<<"\n\t\t\t^^^++++++++++++++++++++++++++++++++++++++++^^^\n\n\n\n\n\n";
		delay(500);
		cout<<"\t* Submitted by:-\t\t\t\t* Submitted to:-\n";
		cout<<"\t ++++++++++++\t\t\t\t\t  +++++++++++++++\n\n";
		cout<<"\t*> Vaishali\n\t* Anshika\t\t\t\t\t*> Mr.Naveen Sir.\n";
		cout<<"\t*> class:- 11th *>(Science)\n";
		cout<<"\n> Press any key to proceed :-";
		cin>>t;
		clrscr();
		textbackground(GREEN);
		textcolor(WHITE);
		cout<<"\n\t\t* Just remember...\n" ;
		cout<<"\n\n\t\t\t\t> There will be OBSTACLES..\n\n\t\t\t\t> There will be DOUBTERS..\n\n\t\t\t\t> There will be MISTAKES..\n\n\t\t\t\t> But with HARDWORK..\n\n\t\t\t\t> There are NO LIMITS..!! \n\n";
		cout<<"It will take few seconds";
		for(int k=0;k<=3;k++)
		{
		delay(1000) ;
		cout<<".";
		}
		frmt();
		getch();
			}
	void frmt()
		{
		clrscr();
		textbackground(RED);
		textcolor(WHITE);

		cout<<setw(40)<<"\n\n\n\t* Press any key to proceed : ";
		int x;char y;
		cin>>y;
		clrscr();
		cout<<"\n\n\n\n";
		cout<<setw(35)<<"LOADING";
		for(int k=0;k<=3;k++)
	{
		delay(500);
		cout<<".";
	}
		clrscr();
		cout<<"\n";
		cout<<setw(50)<<"-> Select your desire option :\n\n\n";
		cout<<setw(45)<<"1 -> To join online\n\n"<<setw(49)<<"2 -> To view AGL Record\n\n"<<setw(53)<<"3 -> Login to your account \n\n"<<setw(49)<<"  4 -> To place an order \n\n"<<setw(53)<<"5 -> To delete your account\n\n"<<setw(53)<<"6 -> To modify your account\n\n"<<setw(34)<<"7 -> Exit\n";
		cout<<"\n\n";	cout<<setw(39)<<"* Your Choice :- ";
		cin>>x;
		switch(x)
		{
			case 1:
			join();
			break;
			case 2:
			display();
			break;
			case 3:
			login();
			break;
			case 4:
			order();
			break;
			case 5:
			del();
			break;
			case 6:
			modify();
			break;
			case 7:
			exit(0);
			break;
			default:
			cout<<"invalid";
		 }
	       cout<<"\n*> Thanks for your interest";
			getch();
		}
		void join()
		{       p:
			clrscr();
			textbackground(GREEN);
		textcolor(WHITE);
			cout<<setw(45)<<"*** Appointment Form ***\n";
			cout<<setw(47)<<"***=========w========*** \n\n";	     char ch,r;int x;
			cout<<"\n\t=> Fill the following entries :-\n\n";
			cout<<"\t\t  *> Id(ex-601 ++) :-";
			cin>>a[i].id; cout<<"\n\t\t  *> First Name :-";gets(a[i].fname);cout<<"\n\t\t  *> Last Name :-";gets(a[i].lname);cout<<"\n\t\t  *> DOB :-";
			gets(a[i].dob);cout<<"\n\t\t  *> Phone no. :-";gets(a[i].ph);cout<<"\n\t\t  *> Address :-";gets(a[i].add);
			cout<<"\n\t\t  *> City :-";gets(a[i].city);
			i++;
			cout<<"\n*> Are you confirmed ..? (Y/N):\n";    cin>>r;
			if(r=='y'||r=='Y')
		{
			clrscr();
			cout<<"\n*> PLEASE WAIT";
			for(int k=0;k<=2;k++)
		{
			delay(50);
			cout<<".";
		}
		}
			else
		     {
			cout<<"-> Thanks for your interest..!!";
			cout<<"\n-> To view main menu,press any key :- ";
		       frmt();
			}
			clrscr();
			cout<<"\n\tWe have recieved your application to become an Avon Representative.\n\n";
			cout<<"\tWe look forward to you joining the AVON world..!!\n\n";
			cout<<"\tYour sincerely\n\tAvon India\n\n";

			cout<<"\n-> Do you want to add more..?(Y/N) :-\n";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			goto p;
			else
			frmt();
			}
		void display()
		{
			clrscr();
			textbackground(GREEN);
		textcolor(WHITE);
			int j;
			char ch;
			cout<<"\t\tId || Name || DOB || Contact || Add. || City\n";
			cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			cout<<"\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			for(j=0;j<i;j++)
		{
			cout<<"\t\t"<<a[j].id<<"\t"<<"  "<<a[j].fname<<" "<<a[j].lname<<"\t"<<"  "<<a[j].dob<<"\t"<<"  "<<a[j].ph<<"\t"<<"  "<<a[j].add<<"\t"<<"  "<<a[j].city<<"\n\n";
		   }
			cout<<setw(40)<<"\n\n*> Do you want to view main menu? (y/n) :-\n";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			frmt();
			else
			exit(0);
			}
		void login()
		{
			clrscr();
			p:
			textbackground(GREEN);
			textcolor(WHITE);
			int x,flag=-1;char ch;
			cout<<"\n"<<setw(30)<<" To login your account enter : \n";
			cout<<"\n"<<setw(30)<<"*****************************\n\n";
	       cout<<"\n";		cout<<setw(40)<<"-> Representative id :-";
			cin>>x;
			for(int j=0;j<i;j++)
		{
			if(x==a[j].id)
		{
			cout<<setw(35)<<"------+++++++++++++++++++++++++++++++++++++++++++++++----------\n\n";
			cout<<setw(35)<<" Id  || Name || DOB || Contact || Add. || City || Invoice\n\n";
			cout<<setw(35)<<"------+++++++++++++++++++++++++++++++++++++++++++++++----------\n\n";
			cout<<a[j].id<<"\t  "<<a[j].fname<<" "<<a[j].lname<<"\t"<<a[j].dob<<"\t"<<a[j].ph<<"\t";
			cout<<a[j].add<<"\t"<<a[j].city<<"\t\t9000\n\n";
			flag++;
		}
		}
			if(flag==-1)
			cout<<setw(20)<<" > SORRY,NO SUCH RECORD FOUND..!!\n";
			cout<<"\n> Do you want to view the Main Menu?(y/n) :-";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			frmt();
			else
			exit(0);
		}                                               //order
		void order()
		{
			p:
			clrscr();
			textbackground(WHITE);
		textcolor(BLACK+BLINK);
			int x,p,r,q,c,sum=0;char ch,y;
			cout<<setw(35)<<"^^^^^^^^^^^^^^^^^^^^^^^^";cout<<"\n";
			cout<<setw(35)<<"-< Welcome to AVON...>-";cout<<"\n";
			cout<<setw(35)<<"^^^^^^^^^^^^^^^^^^^^^^^^^";  cout<<"\n";
			cout<<"*> To place your order fill the following entries ->\n\n";
			cout<<"*> Representative Id :-";
			cin>>x;
			for(int j=0;j<i;j++)
		{
			if(x==a[j].id)
		{
			cout<<"\n*> Contact No.:-";
			cin>>p;
			cout<<"\n"<<"--++++++++++++++++++++++--\n";
			cout<<"Product code\tQty\tcost\n";
			cout<<"--++++++++++++++++++++++--\n";
			for(int k=0;k<5;k++)
			   {
				cin>>c>>q>>r;
				sum=sum+q*r;
			   }
			cout<<"*> Total Cost :\n"<<sum;
			if((sum>=0)&&(sum<=1499))
			cout<<"\n*> Award Sale :"<<sum;
			else if((sum>=1500)&&(sum<=2499))
			{
			x=(sum*15)/100;
			cout<<"\n*> Award Sale :"<<(sum-x);
			}
			else if((sum>=2500)&&(sum<=4499))
			{
			x=(sum*20/100);
			cout<<"\n*> Award Sale :"<<(sum-x);
			}
			else if((sum>=4500)&&(sum<=8999))
			{
			x=(sum*25)/100;
			cout<<"\n*> Award sale :"<<(sum-x);
			}
			else if(sum>=9000)
			{
			x=(sum*30)/100;
			cout<<"\n*> Award Sale :"<<(sum-x);
			  }
			else
			{
			cout<<setw(35)<<"*> check your order again..!!\n";
			goto p;
			  }
		  }
			else
		{
			cout<<"\n"<<setw(35)<<"*> Id is incorrect,try again\n";
			exit(0);
			}
		 cout<<"\n\n";	cout<<setw(35)<<"*> Thanks for placing your order,Your order has been successfully processed..!!";
			cout<<"\n\n"<<setw(35)<<"*> Do you want to place your order?(y/n)";
			cin>>ch;
			if(ch=='y'||ch=='Y')
			goto p;
			else
			frmt();
		}

			cout<<"\n\n\t\t* To view main menu press..(y/n) :-\n";
			cin>>y;
			if(y=='y'||y=='Y')
			frmt();
			else
			exit(0);

		}

void del()                              //delete
{
  p:
  clrscr();
 textcolor(GREEN);
  int v,flag=-1;
  char ch,chh;
  cout<<"*> Enter Representative id:";
  cin>>v;
  for(int j=0;j<i;j++)
  {
    if(v==a[j].id)
    {
      cout<<setw(35)<<"------+++++++++++++++++++++++++++++++++++++++++++++++----------\n\n";
      cout<<setw(35)<<"Id\t|| Name\t|| DOB\t||Contact\t|| Add.\t|| City\t|| Invoice\n\n";
      cout<<setw(35)<<"------+++++++++++++++++++++++++++++++++++++++++++++++----------\n\n";
      cout<<a[j].id<<"\t"<<a[j].fname<<" "<<a[j].lname<<"\t"<<a[j].dob<<"\t"<<a[j].ph<<"\t"<<a[j].add<<"\t"<<a[j].city<<"\n\n";
      cout<<setw(30)<<"\n* Are u confirm to delete your account?(Y/N):";
      cin>>chh;
      if(chh=='y'||chh=='Y')
      {
	 for(int k=j;k<i;k++)
	 {

	    a[k].id=a[k+1].id;
	    strcpy(a[k].fname,a[k+1].fname);
	    strcpy(a[k].lname,a[k+1].lname);
	    strcpy(a[k].dob,a[k+1].dob);
	    strcpy(a[k].ph,a[k+1].ph);
	    strcpy(a[k].add,a[k+1].add);
	    strcpy(a[k].city,a[k+1].city);
	    flag++;
	 }
	 textcolor(BLACK);
	 cout<<setw(35)<<"\n\n\t-> Your account has been deleted..!!!";
	 cout<<"\n\n"<<"\t-> Thanks for being a member of AVON FAMILY..!!";
	 cout<<"\n\n"<<"\t-> To be representative join AVON FAMILY..!!";
	 i--;
       }
       else
       goto p;
    }
  }
  if(flag==-1)
  cout<<"\n*> SORRY..!!,No such record found..";
  cout<<"\n\n*> Do u want to delete more? (Y/N) ";
  cin>>ch;
  if(ch=='y'||ch=='Y')
  goto p;
  else
  frmt();
}
		    void modify()
		{
			clrscr();
			textbackground(RED);
			textcolor(WHITE);
			int n,flag=-1;  char y,ch;
			cout<<"\n\t\t\t\t*> Enter representative id :-";
			cin>>n;
			for(int j=0;j<i;j++)
		{
			if(n==a[j].id)
		{
			cout<<setw(35)<<"------+++++++++++++++++++++++++++++++++++++++++++++++----------\n\n";
			cout<<setw(35)<<"Id || Name || DOB || Contact || Add. || City || Invoice\n\n";
			cout<<setw(35)<<"------+++++++++++++++++++++++++++++++++++++++++++++++----------\n\n";
			cout<<a[j].id<<"\t"<<a[j].fname<<" "<<a[j].lname<<"\t"<<a[j].dob<<"\t"<<a[j].ph<<"\t"<<a[j].add<<"\t"<<a[j].city<<"\n\n";
			cout<<"\n*> Do you still want to modify Avon Account?(Y/N) :-";
			cin>>ch;
			if(ch=='y'||ch=='Y')
		{

			cout<<"->Enter new details:-";
			cout<<"\n\n> First Name:-";
			gets(a[j].fname);
			cout<<"\n> Last Name:-";
			gets(a[j].lname);
			cout<<"\n> DOB:-";
			gets(a[j].dob);
			cout<<"\n> Phone no.:-";
			gets(a[j].ph);
			cout<<"\n> Address:-";
			gets(a[j].add);
			cout<<"\n> City:-";
			gets(a[j].city);     cout<<"\n\n*> Your Avon account has been modified..!!";
			flag++;
		}

			else
			{
			cout<<"\n\n*> Thanks for your interest";
			frmt();
			  }
		 }

		 }
			if(flag==-1)
			cout<<setw(30)<<"\n\n*> NO SUCH RECORD FOUND..!!";
			cout<<"\n\n*> Do you want to view Main Menu? (y/n)\n";
			cin>>y;
			if(y=='y'||y=='Y')
			frmt();
			else
			exit(0);
		}
