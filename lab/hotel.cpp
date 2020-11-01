/** This is the program for hotel data base management system which is
made because of making data base system more easier and soft for all those
manager who always work for the prestige of the hotel..
we have assume in this code which is purely designed for hotel gautam star
and the name has take form the school gautam international..
this code code is designed in the programing language c c++ and with the help file handling
concepts.and Dos. h we using just to give the colour and animation to the
code..
*/

#include <iostream>
#include <fstream>
//#include <stdio>
//#include <conio>
//#include <dos>
// Header Files Decelaration



class hotel{
int room_no;
char name[30];
char address[50];
char phone[10];


public:
  void main_menu();      //to dispay the main menu
  void add();            //to book a room
  void display();        //to display the customer record
  void rooms();          //to display alloted rooms
  void edit();           //to edit the customer record
  int check(int);        //to check room status
  void modify(int);      //to modify the record
  void delete_rec(int);  //to delete the record

};



void hotel::main_menu(){
 int choice;
 while(choice!=5){

 cout<<"\n\t\t    =========================================";
 cout<<"\n\t\t    =                MAIN MENU              =";
 cout<<"\n\t\t    =========================================";
 cout<<"\n\t\t          WELCOME TO HOTEL GAUTAM STAR \n";
 cout<<"\t==============================================================";
 cout<<"\n\n\n\t1 :: To Book A Room";
 cout<<"\n\t2 :: To Search Customer Record";
 cout<<"\n\t3 :: To Check Rooms Allotted";
 cout<<"\n\t4 :: To Edit Record";
 cout<<"\n\t5 :: To Exit";
 cout<<"\n\n\tPlease Enter Your Choice From Above Category >>.. ";
 cin>>choice;



 switch(choice){
 case 1: add();
	 break;
 case 2: display();
	 break;
 case 3: rooms();
	 break;
 case 4: edit();
	 break;
 case 5: break;
	 default:

 {
 cout<<"\n\n\tWrong choice!!!";
 cout<<"\n\tPress any key to go back to \" Main Menu!!!.. \"";
 getch();
}
}
}
}



void hotel::add(){
clrscr();
int r,flag;


ofstream fout("Record.dat",ios::app);
cout<<"\n\t\t       =============================";
cout<<"\n\t\t       Please Enter Customer Details";
cout<<"\n\t\t       =============================";
cout<<"\n\n Please Enter The Room no: ";
cin>>r;

flag=check(r);
if(flag){
cout<<"\n Room is already booked";
cout<<"\n Please try again with different Room Number ";
}
else{
room_no=r;
cout<<" Please Enter Your Name: ";
gets(name);
cout<<" Please Enter Your Address: ";
gets(address);
cout<<" Please Enter Your Phone No: ";
gets(phone);
fout.write((char*)this,sizeof(hotel));
cout<<"\n Wait...";
sleep(1);
cout<<"\n processing \n";
sleep(1);
cout<<"\n Suceed....";
sleep(1);
cout<<"\n Your Room is booked!!!";
}

cout<<"\n\n\n Press any key to go back to \" Main Menu!!! \" ";
getch();
fout.close();
}




void hotel::display()
{
clrscr();
ifstream fin("Record.dat",ios::in);
int r,flag;
cout<<"\n ==========================================";
cout<<"\n If You Want To Check The Customer Details ";
cout<<"\n Please Enter The Room Number";
cout<<"\n ==========================================";
cout<<"\n Enter Here..";
cin>>r;

while(!fin.eof()){
fin.read((char*)this,sizeof(hotel));
if(room_no==r)
{
clrscr();
cout<<"\n ========================================";
cout<<"\n The Customer Details Are As follows >>..";
cout<<"\n ========================================";
cout<<"\n\n Customer Alloted Room no :: "<<room_no;
cout<<"\n Name of the Customer :: "<<name;
cout<<"\n Address of the Customer :: "<<address;
cout<<"\n Phone no of the Customer :: "<<phone;
flag=1;
break;
}
}



if(flag==0)
cout<<"\n Sorry Room no. not found or vacant!!";
cout<<"\n\n Press any key to go back to \" Main Menu!!!\" ";
getch();
fin.close();
}




void hotel::rooms(){
clrscr();
ifstream fin("Record.dat",ios::in);
cout<<"\n\t\t\t======================";
cout<<"\n\t\t\tList Of Rooms Allotted";
cout<<"\n\t\t\t======================";
cout<<"\n\n Room No.\t Name\t\t  Address\t\t  Phone No.\n";
cout<<"\n===========================================================================";



while(!fin.eof()){
fin.read((char*)this,sizeof(hotel));
cout<<"\n\n  "<<room_no<<"\t\t "<<name;
cout<<"\t\t  "<<address<<"\t\t "<<phone;
}


cout<<"\n\n\n\t         Press any key to go back to \" Main Menu!!!\"";
getch();
fin.close();
}



void hotel::edit(){
clrscr();
int choice,r;
cout<<"\n ====================";
cout<<"\n =    EDIT MENU     =";
cout<<"\n ====================";
sleep(1);
cout<<"\n\n 1.To Modify Customer Record";
sleep(1);
cout<<"\n 2.To Delete Customer Record";
sleep(1);
cout<<"\n Please enter your choice >>: ";
cin>>choice;

clrscr();
cout<<"\n Please Enter the room no: ";
cin>>r;

switch(choice){
case 1: modify(r);
	break;
case 2: delete_rec(r);
	break;
default: cout<<"\n Wrong Choice!!";
}

cout<<"\n Press any key to go back to \" Main Menu!!!\" ";
getch();
}




int hotel::check(int r){
int flag=0;
ifstream fin("Record.dat",ios::in);
while(!fin.eof()){
fin.read((char*)this,sizeof(hotel));
if(room_no==r)
{
flag=1;
break;
}
}

fin.close();
return(flag);
}





void hotel::modify(int r){
long pos,flag=0;
fstream file("Record.dat",ios::in|ios::out|ios::binary);

while(!file.eof()){
pos=file.tellg();
file.read((char*)this,sizeof(hotel));
if(room_no==r){
cout<<"\n ==============================";
cout<<"\n =  Please Enter New Details  =";
cout<<"\n ==============================";
cout<<"\n Please Enter The Name: ";
gets(name);
cout<<" Please Enter The Address: ";
gets(address);
cout<<" Please Enter Phone no: ";
gets(phone);

file.seekg(pos);
file.write((char*)this,sizeof(hotel));
sleep(1);
cout<<"\n Wait";
sleep(1);
cout<<"\n Processing...";
sleep(1);
cout<<"\n Suceed \n";
sleep(1);
cout<<"\n Your New Record is Updated!!!";
flag=1;
break;
}
}



if(flag==0)
cout<<"\n Sorry Room no. not found or vacant!!";

file.close();
}




void hotel::delete_rec(int r){
int flag=0;
char ch;
ifstream fin("Record.dat",ios::in);
ofstream fout("temp.dat",ios::out);

while(!fin.eof()){
fin.read((char*)this,sizeof(hotel));
if(room_no==r){
cout<<"\n Customer Name: "<<name;
cout<<"\n Customer Address: "<<address;
cout<<"\n Customer Phone No: "<<phone;
sleep(1);
cout<<"\n\n Do you want to delete this record(y for \" YES \" / n for \" NO\" ): ";
cin>>ch;

if(ch=='n')
fout.write((char*)this,sizeof(hotel));
flag=1;
}
else
fout.write((char*)this,sizeof(hotel));
}



fin.close();
fout.close();


if(flag==0)
cout<<"\n Sorry room no. not found or vacant!!";
else{
remove("Record.dat");
rename("temp.dat","Record.dat");
}
}




void main(){           // This Is Main Funtion

hotel h;
textmode(C80);         // This is Text Mode
textbackground(BLACK);   // This Funtions is Related to change the colour of the background
textcolor(YELLOW);      // This fucntion is related to change the colour of the text

clrscr();
cout<<"\n\t\t       ==============================";
cout<<"\n\t\t     <<      HOTEL GAUTAM STAR       >>";
cout<<"\n\t\t       ==============================";
cout<<"\n   =========================================================================\n\t\t\t             ";

sleep(1);          // this is sleep fucntion giving delay of 1 sec

cout<<"\n\t\t\t   Made By:";

sleep(1);


cout<<" SAURAV KUMAR"<<endl;          // This is code for main page
cout<<"\t\t\t            AVI CHAUDHARY"<<endl;
cout<<"\t\t\t\t    Class 12 "<<endl;
cout<<"\t\tIn The Guidence of :>> \" Mrs. EKTA CHAUDHARY \" "<<endl;
cout<<"\t\t\t    PGT COMPUTER SCIENCE \n\t\t\t\t     ";



sleep(1);


cout<<"\n\n\n\n\n\n\n\n\n\n\t\t      !!  Press any key to continue  !!\n\t\t\t\t      ";
getch();
h.main_menu();
}


