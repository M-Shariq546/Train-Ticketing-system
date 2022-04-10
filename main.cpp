//Header Files
#include<fstream>  //For storing data in file
#include<iostream>  //Input output stream
#include<string>  //For string
#include<windows.h>  //For color text and background
using namespace std;
//Class of the program
class Ticket
{
private:
    int no[15];
    int n;
    string n1[15];
    int i;
    int o;
    int r;
    string name;
    string cls;
    int date;
    string month;
    int year;
    string t_name;
    string fr;
    string to;
    int p;
    int hr;
    int mint;
    int sec;
    int day;
    int total;
    int age;
    char gen;
    long double cnic;
//Class Functions inside class
public:
    //Default Constructor
    Ticket()
    {

    }
    //parametrized Constructor
    Ticket(int N, string Na, string CS, int d, string m, int y , string T, string F, string To);
    //Date of the Day
    void showdate();
    //Detail of the train
    void showtname();
    //Setters of Program
    void setNo(int N);
    void setName(string Na);
    void setcls(string CS);
    //Getters of the Program
    int getNo();
    string getName();
    string getcls();
    void input();
    void output();
    void Storedata();
};
//parametrized Constructor outside the class
Ticket::Ticket(int N, string Na, string CS, int d, string m, int y , string T, string F, string To)
{

    name = Na;
    cls= CS;
    date = d;
    month = m;
    year = y;
    t_name = T;
    fr = F;
    to = To;
}
//Date function of class outside the class
void Ticket :: showdate()
{
    cout<<"Date : ";
    cin>>date;
    cout<<"Month : ";
    cin>>month;
    cout<<"Year : ";
    cin>>year;
}
//Details of trains available in different routes outside of class
void Ticket :: showtname()
{
    cout<<"Select Train :";
    cin>>t_name;
    cout<<" "<<endl;
    //Nested loops for storing train informations
    if(t_name == "RawalExpress" || t_name == "rawalexpress"  || t_name == "rawalExpress"  ||  t_name == "Rawalexpress")
    {
        cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-";
        cout<<""<<endl;
        cout<<"Lahore        ======>        Rawalpindi"<<endl;
        cout<<"Departure time : 00:30 "<<endl;
        cout<<"Arrival Time : 05:00"<<endl;
        cout<<""<<endl;
        }
        else if(r == 2){
        cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Rawalpindi        ======>        Lahore"<<endl;
        cout<<"Departure time : 00:30 "<<endl;
        cout<<"Arrival Time : 05:00"<<endl;
        }
         else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else if(t_name == "SubakRaftar" || t_name == "subakRaftar"  || t_name == "Subakraftar" || t_name == "subakraftar")
    {
        cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Lahore        ======>        Rawalpindi"<<endl;
        cout<<"Departure time : 07:30 "<<endl;
        cout<<"Arrival Time : 12:00"<<endl;
        cout<<""<<endl;
        }
        else if( r == 2 )
        {
           cout<<"Route # 2:-"<<endl;
        cout<<""<<endl;
        cout<<"Rawalpindi        ======>        Lahore"<<endl;
        cout<<"Departure time : 07:30 "<<endl;
        cout<<"Arrival Time : 12:00"<<endl;

        }
    else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else if(t_name == "JaffarExpress"  ||  t_name == "jaffarExpress"  || t_name == "Jaffarexpress" || t_name == "jaffarexpress")
    {
        cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Karachi        ======>        Lahore     ========>   Rawalpindi"<<endl;
        cout<<"Departure time : 15:30 "<<endl;
        cout<<"Arrival Time : 13:30"<<endl;
        cout<<""<<endl;

        }
         else if( r == 2 )
        {
        cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Rawalpindi        ======>        Lahore     ========>   Karachi"<<endl;
        cout<<"Departure time : 00:30 "<<endl;
        cout<<"Arrival Time : 05:00"<<endl;
        }
         else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else if(t_name == "AwamExpress"  ||  t_name == "awamExpress" || t_name == "awamexpress"  ||  t_name == "Awamexpress")
    {
         cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Karachi        ======>        Lahore     =========>        Rawalpindi"<<endl;
        cout<<"Departure time : 17:30 "<<endl;
        cout<<"Arrival Time : 15:30"<<endl;
        cout<<""<<endl;
        }
        else if(r == 2)
        {
           cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Rawalpindi        ======>        Lahore     =========>        Karachi"<<endl;
        cout<<"Departure time : 17:30 "<<endl;
        cout<<"Arrival Time : 15:30"<<endl;
    }
     else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else if(t_name == "SubakKhurram" || t_name == "subakkhurram" || t_name == "Subakkhurram" || t_name == "subakKhurram")
    {
         cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Lahore        ======>        Rawalpindi"<<endl;
        cout<<"Departure time : 16:30 "<<endl;
        cout<<"Arrival Time : 21:00"<<endl;
             cout<<""<<endl;
        }
        else if(r == 2)
        {
           cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Rawalpindi        ======>        Lahore"<<endl;
        cout<<"Departure time : 16:30 "<<endl;
        cout<<"Arrival Time : 21:00"<<endl;
    }
     else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else if(t_name == "IslamabadExpress"  || t_name == "Islamabadexpress"  ||  t_name == "islamabadexpress"  ||  t_name == "islamabadExpress")
    {
         cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Lahore        ======>        Rawalpindi"<<endl;
        cout<<"Departure time : 18:00 "<<endl;
        cout<<"Arrival Time : 21:30"<<endl;
             cout<<""<<endl;
        }
        else if(r == 2)
        {
           cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Rawalpindi        ======>        Lahore"<<endl;
        cout<<"Departure time : 18:00 "<<endl;
        cout<<"Arrival Time : 21:30"<<endl;
    }
     else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
     else if(t_name == "MusaPak"  || t_name == "Musapak"  ||  t_name == "musaPak"  ||  t_name == "musapak")
    {
         cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Lahore        ======>        Multan"<<endl;
        cout<<"Departure time : 00:30 "<<endl;
        cout<<"Arrival Time : 05:05"<<endl;
             cout<<""<<endl;
        }
        else if(r == 2)
        {
           cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Multan        ======>        Lahore"<<endl;
        cout<<"Departure time : 16:00 "<<endl;
        cout<<"Arrival Time : 21:00"<<endl;
    }
     else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else if(t_name == "ShalimarExpress"  || t_name == "Shalimarexpress"  ||  t_name == "shalimarExpress"  ||  t_name == "shalimarexpress")
    {
         cout<<"Select Route 1 Or 2 : ";
        cin>>r;
        if(r == 1)
        {
        cout<<"Route # 1:-"<<endl;
        cout<<"Karachi         ======>    Multan        ======>        Lahore"<<endl;
        cout<<"Departure time : 06:00 "<<endl;
        cout<<"Arrival Time : 01:15   (Next Day)"<<endl;
             cout<<""<<endl;
        }
        else if(r == 2)
        {
           cout<<"Route # 2:-";
        cout<<""<<endl;
        cout<<"Lahore         =======>    Multan        ======>        karachi"<<endl;
        cout<<"Departure time : 06:00 "<<endl;
        cout<<"Arrival Time : 01:45  (Next day)"<<endl;
    }
     else{
        cout<<"wrong direction indicated please try again from start";
    }
    }
    else{
        cout<<"No route found!"<<endl;
    }
    cout<<""<<endl;
}
//Input function of class outside class
void Ticket::input()
{
    cout<<"\t"<<"\t"<<"-:Select Your Tour:-"<<endl;
    cout<<""<<endl;
    cout<<"Select Starting Station : ";
    cin>>fr;
    cout<<" "<<endl;
    cout<<"Select Destination : ";
    cin>>to;
    cout<<" "<<endl;
    cout << "Enter the Name of Passenger : ";
    cin>>name;
    cout<<"Enter the age : ";
    cin>>age;
    if(age<18)
    {
        cout<<"Unable to buy ticket.";
    }
    else
    {
        cout<<"Enter CNIC : ";
        cin>>cnic;
    }
    cout<<"Enter Gender : ";
    cin>>gen;
    cout<<"Enter number of seats to reserved :";
    cin>>n;
    cout<<" "<<endl;
    cout << "Enter the class of seats : ";
    cin>>cls;
    cout<<""<<endl;
    cout<<"Other travelers Details "<<endl;
    for(i=0; i<n ; i++)
    {
        cout<<"Enter Name : ";
        cin>>n1[i];
    cout<<"Enter the Seat Number : ";
    cin>>no[i];
    }
    cout<<" "<<endl;
    cout<<"Price to be paid : Rs. ";
    cin>>p;
    cout<<" "<<endl;
    total = p * n;
    cout<<"Total Price is :"<<total<<endl;
    cout<<" "<<endl;
}
//Output Function of the class outside the class
void Ticket::output()
{
    cout<<"Train Name :"<<t_name<<endl;
    cout<<""<<endl;
    cout<<"From :"<<fr<<"\t"<<"\t"<<"To :"<<to<<endl;
    cout<<""<<endl;
    cout << "Passenger Name : " << name << endl;
    cout<<""<<endl;
    cout<<"Age :"<<age;
    cout<<""<<endl;
    cout<<"Gender :"<<gen;
    cout<<""<<endl;
    cout<<"CNIC :"<<cnic;
    cout<<""<<endl;
    cout << "Class of Seats : " << cls << endl;
    cout<<""<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<"Name : "<<n1[i]<<endl;
        cout<<"Seat number : "<<no[i]<<endl;
	}
    cout<<""<<endl;
    cout<<"Total Payable Amount : "<< total <<endl;
    cout<<""<<endl;
    cout<<"---------------------------"<<endl;
}
//Setters and Getters outside the class Declaration
void Ticket::setName(string Na)
{
    name = Na;
}
void Ticket::setcls(string CS)
{
    cls = CS;
}
string Ticket::getName()
{
    return name;
}
string Ticket::getcls()
{
    return cls;
}
//store data in TXT file
void Ticket::Storedata()
{
   ofstream fout;
   fout.open("Data.txt", ios::out|ios::app);
   fout<<"-------------------------------------"<<endl;
   fout<<"Reservation Details:"<<endl;
   fout<<" "<<"Date"<<" "<<"Month"<<" "<<"Year"<<endl;
   fout<<" "<<date<<" "<<month<<" "<<year<<endl;
   fout<<" "<<"Train Details :"<<endl;
   fout<<" "<<"Train Name :"<<t_name<<endl;
   fout<<" "<<"From : "<<fr<<"\t"<<"\t"<<"To :"<<to<<endl;
   fout<<" "<<endl;
   fout<<" "<<"Passenger Details :"<<endl;
   fout<<" "<<"P. Name:"<<name<<endl;
   fout<<" "<<"Age:"<<age<<endl;
   fout<<" "<<"Gender:"<<gen<<endl;
   fout<<" "<<"CNIC :"<<cnic<<endl;
   fout<<" "<<"Class :"<<cls<<endl;
   fout<<" "<<"Seats :"<<n<<endl;
   fout<<" "<<"Total P :"<<total<<endl;
   fout<<"--------------------------------------"<<endl;
   Sleep(100);
   system("CLS");
   fout.close();
}
//Main Function
int main()
{
    Ticket T1[5], T2;
    int i;
    int n = 150;
    int a;
    int num;
    int s;
    char sname[50];
    char city[50];
    char des[50];
    int q;
    int ch;
    system("color 2f");
    cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
    cout<<""<<endl;
    cout<<"\t"<<"\t"<<"MAIN MENU"<<endl;
    cout<<"1 - Passenger login"<<endl;
    cout<<"2 - Administration login"<<endl;
    cout<<"3 - Shut Down System"<<endl;
    cout<<""<<endl;
    cout<<"Select your choice : ";
    cin>>ch;
    cout<<""<<endl;
    if(ch == 1)
    {
        cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
    cout<<""<<endl;

    T2.showdate();
    T2.Storedata();
    cout<<" "<<endl;
    cout << "The total Numbers of seats available per Train are : " << n << endl;
    cout<<" "<<endl;
    cout<<"The classes available in trains..."<<endl;
     cout<<" "<<endl;
     cout<<"\t"<<"\t"<<" 1:- AC Standard Class :"<<endl;
    cout<<" "<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 2:- Business Class :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 3:- lower Business :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 4:- Economy Class :"<<endl;
     cout<<""<<endl;
    cout<<" "<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 5:- VIP Class :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
    cout <<"\t"<<"\t"<< "=============Inputs============" << endl;


        for (int i = 0; i < 5; i++)
        {
            cout<<"\t"<<"\t"<<"Enter 1 to Start Entries and 2 to Terminate :  ";
        cin>>q;
        cout<<" "<<endl;
        if(q == 1)
        {
        cout<<"Sr No."<<(i + 1)<<endl;
         T1[i].showtname();
        T1[i].input();
        T1[i].Storedata();
        }
         else if(q == 2)
        {
            cout<<"\t"<<"\t"<<"System Terminated Please check database for entered Entries..."<<endl;
        }
        else{
            cout<<"\t"<<"\t"<<"Wrong parameters Selected!!!"<<endl;
        }
        cout<<" "<<endl;
        cout<<"\t"<<"\t"<<"The seats have been filled properly ...."<<endl;
        }
        cout<<" "<<endl;
        cout<<""<<endl;
        cout<<""<<endl;
        cout<<"1 - Record of Passengers"<<endl;
        cout<<"2 - Administration login"<<endl;
        cout<<"3 - According to Seat class Record"<<endl;
        cout<<"4 - Shut Down System"<<endl;
        cout<<"Enter Your Choice :";
        cin>>ch;
        cout<<""<<endl;
        if(ch == 1)
        {

            system("color 04");
            cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
    cout<<""<<endl;
            cout <<"\t"<<"\t"<< "=============Outputs of all day entries============" << endl;
            cout<<" "<<endl;
            for (int a = 0; a < 5; a++)
        {
            T1[a].output();
        }
        }
        else if(ch == 2)
        {
            system("color 17");
            Sleep(100);
            system("CLS");
             cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
             cout<<""<<endl;
            cout<<"\t"<<"The Administration Page"<<"\t"<<endl;
            cout<<"Enter the service man Name :";
            cin>>sname;
            cout<<"The Designation of the service man :";
            cin>>des;
            cout<<"City of Working :";
            cin>>city;
            cout<<"Press O for Main Menu :";
            cin>>num;
            if(num == 0)
            {
                system("color 2f");
                Sleep(100);
                system("CLS");
                 cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
                 cout<<""<<endl;
                cout<<"\t"<<"\t"<<"MAIN MENU"<<endl;
                cout<<"1 - Passenger login"<<endl;
                cout<<"2 - Shut Down System"<<endl;
                cout<<""<<endl;
                cout<<"Select your choice : ";
                cin>>ch;
                cout<<""<<endl;
                if(ch == 1)
    {

        cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
    cout<<""<<endl;
      cout<<""<<endl;
    T2.showdate();
    T2.Storedata();
    cout<<" "<<endl;
    cout << "The total Numbers of seats available per Train are : " << n << endl;
    cout<<" "<<endl;
    cout<<"The classes available in trains..."<<endl;
     cout<<" "<<endl;
     cout<<"\t"<<"\t"<<" 1:- AC Standard Class :"<<endl;
    cout<<" "<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 2:- Business Class :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 3:- lower Business :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 4:- Economy Class :"<<endl;
     cout<<""<<endl;
    cout<<" "<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 5:- VIP Class :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
    cout <<"\t"<<"\t"<< "=============Inputs============" << endl;


        for (int i = 0; i < 5; i++)
        {
            cout<<"\t"<<"\t"<<"Enter 1 to Start Entries and 2 to Terminate :  ";
        cin>>q;
        cout<<" "<<endl;
        if(q == 1)
        {
        cout<<"Sr No."<<(i + 1)<<endl;
         T1[i].showtname();
        T1[i].input();
        T1[i].Storedata();
        }
         else if(q == 2)
        {
            cout<<"\t"<<"\t"<<"System Terminated Please check database for entered Entries..."<<endl;
        }
        else{
            cout<<"\t"<<"\t"<<"Wrong parameters Selected!!!"<<endl;
        }
        cout<<" "<<endl;
        cout<<"\t"<<"\t"<<"The seats have been filled properly ...."<<endl;
        }
    }
        cout<<" "<<endl;
        cout<<"1 - Record of Passengers"<<endl;
        cout<<"2 - According to Seat class Record"<<endl;
        cout<<"3 - Shut Down System"<<endl;
        cout<<"Enter Your Choice :";
        cin>>ch;
        cout<<""<<endl;
          if(ch == 1)
        {

            system("color 04");
            cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
    cout<<""<<endl;
            cout <<"\t"<<"\t"<< "=============Outputs of all day entries============" << endl;
            cout<<" "<<endl;
            for (int a = 0; a < 5; a++)
        {
            T1[a].output();
        }
        cout<<""<<endl;
        cout<<"1 - According to Seat class Record"<<endl;
        cout<<"2 - Shut Down System"<<endl;
        cout<<"Enter Your Choice :";
        cin>>ch;
        cout<<""<<endl;
        if( ch == 1)
        {
             cout<<""<<endl;
    cout<<"\t"<<"\t"<<"The Selected Data Entries of AC Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="AC"|| T1[a].getcls()=="ac" || T1[a].getcls()=="Ac"  ||  T1[a].getcls()=="aC")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Business Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Business"|| T1[a].getcls()=="BUsiness" || T1[a].getcls()=="Business"  ||  T1[a].getcls()=="business")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of LowerBusiness Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="LowerBusiness"|| T1[a].getcls()=="lowerBusiness" || T1[a].getcls()=="Lowerbusiness"  ||  T1[a].getcls()=="lowerbusiness")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Economy Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Economy"|| T1[a].getcls()=="eConomy" || T1[a].getcls()=="ECOnomy"  ||  T1[a].getcls()=="economy")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of VIP Class Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="VIP"|| T1[a].getcls()=="vip"|| T1[a].getcls()=="Vip"|| T1[a].getcls()=="vIP")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
        }
        else if(ch == 2)
        {
             cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
        }
        }
        else if(ch == 2 )
        {
             cout<<""<<endl;
    cout<<"\t"<<"\t"<<"The Selected Data Entries of AC Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="AC"|| T1[a].getcls()=="ac" || T1[a].getcls()=="Ac"  ||  T1[a].getcls()=="aC")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Business Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Business"|| T1[a].getcls()=="BUsiness" || T1[a].getcls()=="Business"  ||  T1[a].getcls()=="business")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of LowerBusiness Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="LowerBusiness"|| T1[a].getcls()=="lowerBusiness" || T1[a].getcls()=="Lowerbusiness"  ||  T1[a].getcls()=="lowerbusiness")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Economy Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Economy"|| T1[a].getcls()=="eConomy" || T1[a].getcls()=="ECOnomy"  ||  T1[a].getcls()=="economy")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of VIP Class Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="VIP"|| T1[a].getcls()=="vip"|| T1[a].getcls()=="Vip"|| T1[a].getcls()=="vIP")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
        }
        else if(ch == 3)
        {
            cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
        }
    }
    else if(ch == 2)
    {
        cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
    }
            }
        }
        else if(ch == 3)
        {
            cout<<""<<endl;
    cout<<"\t"<<"\t"<<"The Selected Data Entries of AC Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="AC"|| T1[a].getcls()=="ac" || T1[a].getcls()=="Ac"  ||  T1[a].getcls()=="aC")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Business Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Business"|| T1[a].getcls()=="BUsiness" || T1[a].getcls()=="Business"  ||  T1[a].getcls()=="business")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of LowerBusiness Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="LowerBusiness"|| T1[a].getcls()=="lowerBusiness" || T1[a].getcls()=="Lowerbusiness"  ||  T1[a].getcls()=="lowerbusiness")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Economy Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Economy"|| T1[a].getcls()=="eConomy" || T1[a].getcls()=="ECOnomy"  ||  T1[a].getcls()=="economy")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of VIP Class Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="VIP"|| T1[a].getcls()=="vip"|| T1[a].getcls()=="Vip"|| T1[a].getcls()=="vIP")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
        }
        else if( ch == 4)
        {
              cout<<"---------------------------"<<endl;
             cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
        }


    else if(ch == 2)
    {
        system("color 17");
        Sleep(100);
        system("CLS");
         cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
         cout<<""<<endl;
        cout<<"\t"<<"The Administration Page"<<"\t"<<endl;
            cout<<"Enter the service man Name :";
            cin>>sname;
            cout<<"The Designation of the service man :";
            cin>>des;
            cout<<"City of Working :";
            cin>>city;
            cout<<"Press O for Main Menu : ";
            cin>>num;
            if(num == 0)
            {
                system("color 2f");
                Sleep(100);
                system("CLS");
                cout<<"\t"<<"\t"<<"MAIN MENU"<<endl;
                cout<<"1 - Passenger login"<<endl;
                cout<<"2 - Record of Passengers"<<endl;
                cout<<"3 - Shut Down System"<<endl;
                cout<<""<<endl;
                cout<<"Select your choice : ";
                cin>>ch;
                cout<<""<<endl;
                if(ch == 1)
    {
      cout<<""<<endl;
    T2.showdate();
    T2.Storedata();
    cout<<" "<<endl;
    cout << "The total Numbers of seats available per Train are : " << n << endl;
    cout<<" "<<endl;
    cout<<"The classes available in trains..."<<endl;
     cout<<" "<<endl;
     cout<<"\t"<<"\t"<<" 1:- AC Standard Class :"<<endl;
    cout<<" "<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 2:- Business Class :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 3:- lower Business :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 4:- Economy Class :"<<endl;
     cout<<""<<endl;
    cout<<" "<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<" 5:- VIP Class :"<<endl;
    cout<<" "<<endl;
    cout<<""<<endl;
    cout <<"\t"<<"\t"<< "=============Inputs============" << endl;


        for (int i = 0; i < 5; i++)
        {
            cout<<"\t"<<"\t"<<"Enter 1 to Start Entries and 2 to Terminate :  ";
        cin>>q;
        cout<<" "<<endl;
        if(q == 1)
        {
        cout<<"Sr No."<<(i + 1)<<endl;
         T1[i].showtname();
        T1[i].input();
        T1[i].Storedata();
        }
         else if(q == 2)
        {
            cout<<"\t"<<"\t"<<"System Terminated Please check database for entered Entries..."<<endl;
        }
        else{
            cout<<"\t"<<"\t"<<"Wrong parameters Selected!!!"<<endl;
        }
        cout<<" "<<endl;
        cout<<"\t"<<"\t"<<"The seat have been filled properly ...."<<endl;
        }
        cout<<" "<<endl;
         cout<<" "<<endl;
        cout<<"1 - Record of Passengers"<<endl;
        cout<<"2 - According to Seat class Record"<<endl;
        cout<<"3 - Shut Down System"<<endl;
        cout<<"Enter Your Choice :";
        cin>>ch;
        cout<<""<<endl;
          if(ch == 1)
        {

            system("color 04");
            cout<<"\t"<<"\t"<<"-: Welcome To Pakistan Railways :-"<<endl;
    cout<<""<<endl;
            cout <<"\t"<<"\t"<< "=============Outputs of all day entries============" << endl;
            cout<<" "<<endl;
            for (int a = 0; a < 5; a++)
        {
            T1[a].output();
        }
        cout<<""<<endl;
        cout<<"1 - According to Seat class Record"<<endl;
        cout<<"2 - Shut Down System"<<endl;
        cout<<"Enter Your Choice :";
        cin>>ch;
        cout<<""<<endl;
        if( ch == 2)
        {
             cout<<""<<endl;
    cout<<"\t"<<"\t"<<"The Selected Data Entries of AC Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="AC"|| T1[a].getcls()=="ac" || T1[a].getcls()=="Ac"  ||  T1[a].getcls()=="aC")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Business Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Business"|| T1[a].getcls()=="BUsiness" || T1[a].getcls()=="Business"  ||  T1[a].getcls()=="business")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of LowerBusiness Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="LowerBusiness"|| T1[a].getcls()=="lowerBusiness" || T1[a].getcls()=="Lowerbusiness"  ||  T1[a].getcls()=="lowerbusiness")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Economy Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Economy"|| T1[a].getcls()=="eConomy" || T1[a].getcls()=="ECOnomy"  ||  T1[a].getcls()=="economy")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of VIP Class Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="VIP"|| T1[a].getcls()=="vip"|| T1[a].getcls()=="Vip"|| T1[a].getcls()=="vIP")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
        }
        else if(ch == 2)
        {
             cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
        }
        }
        else if(ch == 2 )
        {
             cout<<""<<endl;
    cout<<"\t"<<"\t"<<"The Selected Data Entries of AC Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="AC"|| T1[a].getcls()=="ac" || T1[a].getcls()=="Ac"  ||  T1[a].getcls()=="aC")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Business Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Business"|| T1[a].getcls()=="BUsiness" || T1[a].getcls()=="Business"  ||  T1[a].getcls()=="business")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of LowerBusiness Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="LowerBusiness"|| T1[a].getcls()=="lowerBusiness" || T1[a].getcls()=="Lowerbusiness"  ||  T1[a].getcls()=="lowerbusiness")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of Economy Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="Economy"|| T1[a].getcls()=="eConomy" || T1[a].getcls()=="ECOnomy"  ||  T1[a].getcls()=="economy")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
     cout<<"---------------------------"<<endl;
     cout<<"\t"<<"\t"<<"The Selected Data Entries of VIP Class Passengers are ....."<<endl;
    cout<<""<<endl;
    for(int a = 0 ; a < 5 ; a++)
    {
        if(T1[a].getcls()=="VIP"|| T1[a].getcls()=="vip"|| T1[a].getcls()=="Vip"|| T1[a].getcls()=="vIP")
        {
            cout<<" "<<endl;
            T1[a].output();
            cout<<" "<<endl;
        }
    }
        }
        else if(ch == 3)
        {
            cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
        }
    }
    }
    else if(ch == 2)
        {
            system("color 04");
            cout <<"\t"<<"\t"<< "=============Outputs of all day entries============" << endl;
            cout<<" "<<endl;
            for (int a = 0; a < 5; a++)
        {
            T1[a].output();
        }
        }
    else if(ch == 3)
    {
        cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
    }

    }
    else if(ch == 3)
    {
        cout<<"---------------------------"<<endl;
        cout<<"\t"<<"\t"<<"Thank you For Visiting Pakistan Railways ....";
    }





    return 0;
}
}

