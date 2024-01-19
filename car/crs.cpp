#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <direct.h>
#include <iomanip>
int close();
void info();
void exist();
void login();
void menu ();
void newcar();
void rent2();
void buy();
void sell();
void view();
using namespace std;
class customer
{
	private:
	public:
	string customername;
	string customername2;
    string carmodel;
    string carnumber;
    string ID;
    string invoice;
    char data;
};
class rent : public customer
{
	public:
	int days=0 ;
 int  rentalfee=0,carprice=0,total=rentalfee+carprice;
	void setrent(int a)
	{
	   rentalfee+=a;
	}
	void data()
	{

	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout<<"\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\tPlease Enter  first Name of customer : ";
    cin >> customername;
    cout << "\t\t\t\tPlease Enter last Name of customer: ";
    cin >> customername2;
    cout << "\t\t\t\tPlease Enter identification card  of  a customer: ";
    cin >> ID;
    cout << "\t\t\t\tPlease Enter the invoice no: ";
    cin >> invoice;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl;
        cout<<"\t\t\t\tEnter 'A' for TATA CAR."<<endl;
        cout<<"\t\t\t\tEnter 'B' for HYUNDAI CAR."<<endl;
        cout<<"\t\t\t\tEnter 'C' for MARUTI SUZUKI CAR."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;

if(carmodel=="A"||carmodel=="a")
 {
 	system("CLS");

		cout<<"You have choosed TOYOYA CAR"<<endl;
		 ifstream inA("A.txt");
         char str[200];
         while(inA)
		 {
         inA.getline(str, 200);
         if(inA) cout << str << endl;
         }
sleep(1);
 }
  if(carmodel=="B"||carmodel=="b")
  {
  	system("CLS");

		cout<<"You have choosed HYUNDAI CAR"<<endl;
		 ifstream inB("B.txt");
         char str[200];
         while(inB)
		 {
         inB.getline(str, 200);
         if(inB) cout << str << endl;
         }
     sleep(1);
 }
 if(carmodel=="C"||carmodel=="c")
 {
 	system("CLS");
	     cout<<"You have choosed MARUTI SUZUKI CAR"<<endl;
		 ifstream inC("C.txt");
         char str[200];
         while(inC)
		 {
         inC.getline(str, 200);
         if(inC) cout << str << endl;
     	 }
     sleep(1);
 }
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" &&carmodel !="a" && carmodel !="b" &&  carmodel !="c")

      cout<<"Invaild Car Model. Please try again!"<<endl;}

      while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="a" && carmodel !="b" &&  carmodel !="c");

      }
void renting(){

while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="a" && carmodel !="b" &&  carmodel !="c");

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;
    cout<<"Please select a Car No. from 1 to 5:  \n ";
    cin >> carnumber;

    cout<<"Number of days you wish to rent the car \n : ";
    cin >> days;
    cout<<endl;
}
void buy(){

while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="a" && carmodel !="b" &&  carmodel !="c");

    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;
    cout<<"Please select a Car No. from 1 to 5: to buy \n ";
    cin >> carprice;

}
void add ()
{
    int choice;
    cout<<"would you like to rent or buy something else\n";
    cout<< "if << yes >> \t enter(1)\n";
    cout<< "if << no >> \t enter(0) or another number\n";
    cin >>choice;
    if(choice==1) {
            system("cls");
        info();

//        setrent();
    }
    else calculate();
}

	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"|| carmodel == "a"){
            if(carnumber=="1") {rentalfee=days*250;}
            else if (carnumber=="2") {rentalfee=days*200;}
           else if ( carnumber=="3"){rentalfee=days*100;}
           else if ( carnumber=="4") {rentalfee=days*80;}
           else if ( carnumber=="5") {rentalfee=days*50;}
           else {cout<< "choose an available car number";
      info();
           }
		}

        if(carmodel == "B" ||carmodel=="b"){

            if(carnumber=="1") rentalfee=days*300;
            else if (carnumber=="2") rentalfee=days*270;
           else if ( carnumber=="3") rentalfee=days*250;
           else if ( carnumber=="4") rentalfee=days*200;
           else if ( carnumber=="5") rentalfee=days*150;
           else {cout<< "choose an available car number";
          info();
           }

           }

        if(carmodel == "C" ||carmodel=="c")
        {

            if(carnumber=="1") rentalfee=days*400;
            else if (carnumber=="2") rentalfee=days*380;
           else if ( carnumber=="3") rentalfee=days*350;
           else if ( carnumber=="4") rentalfee=days*300;
           else if ( carnumber=="5") rentalfee=days*250;
           else {cout<< "choose an available car number";
       info();}
       }
       }
       void calculate2()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"|| carmodel == "a"){
            if(carnumber=="1") carprice=25000;
            else if (carnumber=="2") carprice=20000;
           else if ( carnumber=="3")carprice=18000;
           else if ( carnumber=="4") carprice=15000;
           else if ( carnumber=="5") carprice=10000;
           else {cout<< "choose an available car number";
      info();
           }
		}


        if(carmodel == "B" ||carmodel=="b"){

            if(carnumber=="1")      carprice=30000;
            else if (carnumber=="2") carprice=27000;
           else if ( carnumber=="3") carprice=25000;
           else if ( carnumber=="4") carprice=20000;
           else if ( carnumber=="5") carprice=15000;
           else {cout<< "choose an available car number";
          info();
           }

           }

        if(carmodel == "C" ||carmodel=="c")
        {

            if(carnumber=="1")        carprice=35000;
            else if (carnumber=="2") carprice=30000;
           else if ( carnumber=="3") carprice=27000;
           else if ( carnumber=="4") carprice=25000;
           else if ( carnumber=="5") carprice=25000;
           else {cout<< "choose an available car number";
       info();}
       }
       }

void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(5)<<"#"<<invoice<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(6)<<customername<<' '<<customername2<<" |"<<endl;
    cout << "\t\t	| Customer  ID :"<<"-----------------|"<<setw(10)<<ID<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<"$|"<<endl;
    cout << "\t\t	| car price     :"<<"----------------|"<<setw(10)<<carprice<<"$|"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<total<<" $|"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     ifstream inf("thank_you.txt");
exist();


  char str[300];

  while(inf)
  {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}

};
class welcome
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt");

  if(!in)
  {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in)
  {
    in.getline(str, 1000);
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1);
  system ("CLS");


}
};
int close()
    {
      cout<<"thankyou  ";
      return 0;
    }
   void info()
   {
rent obj2;
obj2.data();
obj2.renting();
obj2.add();
//obj2.setrent();
obj2.calculate();
obj2.showrent();
    }
void exist (){
  int exit;
cout<<"\n\nEnter 1 to go to the main menu and 0 to exit:";
cin>>exit;
        system("cls");
        if (exit==1){
 menu();

        }

        else if (exit==0)
         {
           close();}
}
void menu ()
{
    int choice;
    system("cls");
    system("color 9");
   cout<<"\n\n\t\t\tCAR RENTAL MANAGMENT SYSTEM\t";
 cout<<"\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2";
    cout<<"\n\n\t\t 1.Add a new car\n\t\t 2.list all  the newewst car\n\t\t3.rent an available  car \n\t\t4.buy a car \n\t\t5.sell a car \n\t\t6.Exit\n\n\n\n\n\t\t Enter your choice:";
    cin>>choice;
    system("cls");
    switch(choice)
    {
        case 1: newcar();
        break;
        case 2:view();
        break;
        case 3:rent2();
        break;
        case 4:buy();
        break;
        case 5:sell();
        break;
        case 6:close();
        break;
    }}
   void  newcar(){}
  void   view(){}
   void  rent2 (){
welcome obj1;
obj1.welcum();
    info();
    }
    void buy (){
    rent obj3;
    obj3.data();
    obj3.buy();
    obj3.add();
  //  obj3.setrent();
    obj3.calculate2();
    obj3.showrent();
    }
void   sell(){}
int main()
{
login();
menu();

return 0;
}

void login()
{
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";
   cout<<"\t\t\t\t\t------------------------------\n\n";
   cout << "\t\t\t\t\tEnter Pin: ";
   ch = _getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "1234")
   {
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }
   else
   {
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
}


}



