/*
    QUESTION:
        WRITE A PROGRAM TO CREATE A MENU DRIVEN PROGRAM OF A CAR RENRAL SYSTEM
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

double total_bill=0;
int n=0;
int z=1424;

string driver_name[5] = {"VIKAS KAMBLE" , "RAGHUVIR YADAV" , "RAJESH PRAJAPATI" , "MOHAMMAD ALI" , "SHAIKH SALEEMUDDIN"};
int driver_age[5] = {25 , 30 , 45 , 39 , 51};
long long driver_number[5] = {993245678 , 809732478 , 908765143 , 765908431 , 703685991};

int j=0;


// MULTI-LEVEL INHERITANCE HAS BEEN USED TO CONNECT ALL THE CLASSES

// Base class - takes personal information of the customer

class PersonalDetails
{
public:

    string name;
    int age;
    long long phone_number;

    void Input()
    {
        cout<<"PLEASE ENTER YOUR PERSONAL DETAILS: "<<endl;
        cout<<"Enter your name: ";
        fflush(stdin);
        getline(cin, name);
        cout<<"Enter age: ";
        cin>>age;
        cout<<"Enter Phone Number: ";
        cin>>phone_number;

        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO PROCEED TO THE NEXT STEP";

        getch();
    }
};

// Derived Class 1 - asks for the type of car needed by customer

class Type : public PersonalDetails
{
    public:

    string type;

    void input()
    {
        Input();

        system("cls");    //This is equivalent to clrscr();

        cout<<"PLEASE ENTER THE CAR REQUIREMENTS: (PLEASE ENTER IN ALL CAPITALS)"<<endl;
        cout<<endl;
        cout<<"Enter the Type of Car needed:"<<endl;
        cout<<"SUV"<<endl;
        cout<<"SEDAN"<<endl;
        cout<<"HATCH BACK"<<endl;
        cout<<"LUXURY"<<endl;
        fflush(stdin);
        getline(cin, type);
    }
};

// Derived Class 2 - gives the customer options to choose from according to the type selected in the previous class

class choice_Type : public Type
{
public:

    int car_name;

    void options()
    {
    start:
        input();
    a:
        if(type == "SUV")
        {
            cout<<endl;
            cout<<"ENTER THE SUV YOU WANT TO RENT: (PLEASE GIVE THE NUMBER)"<<endl;
            cout<<endl;
            cout<<"1. TOYOTA INNOVA - Rs. 1500/hr"<<endl;
            cout<<"2. TOYOTA FORTUNER - Rs. 1750/hr"<<endl;
            cout<<"3. TOYOTA CRYSTA - Rs. 1750/hr"<<endl;
            cout<<"4. HYUNDAI CRETA - Rs. 1500/hr"<<endl;
            cout<<"5. MARUTI SUZUKI VITARA BREZZA - Rs. 1500/hr"<<endl;
            cout<<"6. MAHINDRA XUV500 - Rs. 1500/hr"<<endl;
            cout<<"7. TATA HARRIER - Rs. 1400/hr"<<endl;
            cout<<"8. TATA NEXON - Rs. 1350/hr"<<endl;
            cout<<"9. JEEP COMPASS - Rs. 1500/hr"<<endl;
            cout<<"10. HYUNDAI VENUE - Rs. 1500/hr"<<endl;
            cin>>car_name;


            switch(car_name)
            {
            case 1:
            case 4:
            case 5:
            case 6:
            case 9:
            case 10:
                total_bill=1500;
                break;

            case 2:
            case 3:
                total_bill=1750;
                break;

            case 7:
                total_bill=1400;
                break;

            case 8:
                total_bill=1350;
                break;

            default:
                cout<<"WRONG INPUT, PLEASE SELECT AGAIN"<<endl;
                goto a;
            }
        }


        else if(type == "SEDAN")
        {
            cout<<endl;
            cout<<"ENTER THE SEDAN YOU WANT: (PLEASE ENTER THE NUMBER)"<<endl;
            cout<<endl;
            cout<<"1. HONDA AMAZE - Rs. 500/hr"<<endl;
            cout<<"2. HYUNDAI VERNA - Rs. 500/hr"<<endl;
            cout<<"3. HONDA CITY - Rs. 500/hr"<<endl;
            cout<<"4. MARUTI CIAZ - Rs. 450/hr"<<endl;
            cout<<"5. VOLKSWAGEN VENTO - Rs. 500/hr"<<endl;
            cout<<"6. TOYOTA YARIS - Rs. 500/hr"<<endl;
            cout<<"7. HONDA CIVIC - Rs. 500/hr"<<endl;
            cout<<"8. TOYOTA CAMRY - Rs. 400/hr"<<endl;
            cout<<"9. MARUTI DZIRE - Rs. 350/hr"<<endl;
            cout<<"10. HYUNDAI AURA - Rs. 350/hr"<<endl;
            cin>>car_name;

            switch(car_name)
            {
            case 1:
            case 2:
            case 3:
            case 5:
            case 6:
            case 7:
                total_bill=500;
                break;

            case 4:
                total_bill=450;
                break;

            case 8:
                total_bill=400;
                break;

            case 9:
            case 10:
                total_bill=350;
                break;

            default:
                cout<<"WRONG INPUT, PLEASE SELECT AGAIN"<<endl;
                goto a;
            }
        }


        else if(type == "HATCH BACK")
        {
            cout<<endl;
            cout<<"ENTER THE HATCH BACK YOU WANT: (PLEASE ENTER THE NUMBER)"<<endl;
            cout<<endl;
            cout<<"1. MARUTI SUZUKI SWIFT - Rs. 200/hr"<<endl;
            cout<<"2. MARUTI SUZUKI ALTO - Rs. 200/hr"<<endl;
            cout<<"3. MARUTI SUZUKI BALENO - Rs. 350/hr"<<endl;
            cout<<"4. RENAULT KWID - Rs. 300/hr"<<endl;
            cout<<"5. RENAULT TRIBER - Rs. 350/hr"<<endl;
            cout<<"6. MARUTI SUZUKI WAGON R - Rs. 200/hr"<<endl;
            cout<<"7. TATA ALTROZ - Rs. 200/hr"<<endl;
            cout<<"8. HYUNDAI ELITE I20 - 300/hr"<<endl;
            cout<<"9. TATA TIAGO - Rs. 250/hr"<<endl;
            cout<<"10. HYUNDAI GRAND I10 NIOS - Rs. 300/hr"<<endl;
            cin>>car_name;

            switch(car_name)
            {
            case 1:
            case 2:
            case 6:
            case 7:
                total_bill=200;
                break;

            case 3:
            case 5:
                total_bill=350;
                break;

            case 4:
            case 8:
            case 10:
                total_bill=300;
                break;

            case 9:
                total_bill=250;
                break;

            default:
                cout<<"WRONG INPUT, PLEASE SELECT AGAIN"<<endl;
                goto a;
            }
        }

        else if(type == "LUXURY")
        {
            cout<<endl;
            cout<<"ENTER THE LUXURY CAR YOU WANT: (PLEASE ENTER THE NUMBER)"<<endl;
            cout<<endl;
            cout<<"1. LAND ROVER - Rs. 2500/hr"<<endl;
            cout<<"2. LAND ROVER VELAR - Rs. 2000/hr"<<endl;
            cout<<"3. BMW X5 - Rs. 3000/hr"<<endl;
            cout<<"4. VOLVO XC40 - Rs. 2000/hr"<<endl;
            cout<<"5. VOLVO XC90 - Rs. 2500/hr"<<endl;
            cout<<"6. AUDI A6 - Rs. 3000/hr"<<endl;
            cout<<"7. AUDI Q8 - Rs. 3000/hr"<<endl;
            cout<<"8. BMW 320d - Rs. 3000/hr"<<endl;
            cout<<"9. LAND ROVER DISCOVERY - Rs. 2500/hr"<<endl;
            cout<<"10. BMW 6GT - Rs. 3000/hr"<<endl;
            cin>>car_name;

            switch(car_name)
            {
            case 1:
            case 5:
            case 9:
                total_bill=2500;
                break;

            case 3:
            case 6:
            case 7:
            case 8:
            case 10:
                total_bill=3000;
                break;

            case 2:
            case 4:
                total_bill=2000;
                break;

            default:
                cout<<"WRONG INPUT, PLEASE SELECT AGAIN"<<endl;
                goto a;
            }
        }

        else
        {
            cout<<"WRONG INPUT, PLEASE SELECT AGAIN"<<endl;
            cout<<endl;
            cout<<"PLEASE ENTER THE CAR REQUIREMENTS: (PLEASE ENTER IN ALL CAPITALS)"<<endl;
            cout<<endl;
            cout<<"Enter the Type of Car needed:"<<endl;
            cout<<"SUV"<<endl;
            cout<<"SEDAN"<<endl;
            cout<<"HATCH BACK"<<endl;
            cout<<"LUXURY"<<endl;
            fflush(stdin);
            getline(cin, type);

            goto a;
        }

        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO PROCEED TO THE NEXT STEP";

        getch();
    }
};

// Derived Class 3 - asks the user whether he requires a driver or no

class Driver : public choice_Type
{
public:

    int driver;

    void choice_driver()
    {
        options();

    b:
        system("cls");    //This is equivalent to clrscr();

        cout<<"Do you need a driver?"<<endl;
        cout<<"1. Yes"<<endl;
        cout<<"2. No"<<endl;
        cout<<"Charges for driver is Rs.1000"<<endl;
        cin>>driver;

        if( (age<18) && (driver == 2) )
        {
            cout<<"SORRY, YOU ARE UNDER AGE TO DRIVE A CAR, WE WILL ASSIGN A DRIVER AUTOMATICALLY"<<endl;
            driver = 1;
        }

        switch(driver)
        {
        case 1:
            total_bill+=1000;
            break;

        case 2:
            total_bill+=0;
            break;

        default:
            cout<<"PLEASE ENTER A NUMBER BETWEEN 1 AND 2 ONLY"<<endl;
            cout<<"\n\n";
            goto b;
        }

        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO PROCEED TO THE NEXT STEP";

        getch();
    }
};

// Derived Class 4 - asks the user for the type of trip

class Trip_type : public Driver
{
public:

    int type_trip;

    void choice_trip()
    {
        choice_driver();

    c:
        system("cls");    //This is equivalent to clrscr();

        cout<<"PLEASE ENTER THE DETAILS OF THE TRIP: "<<endl;
        cout<<"Is this a single-way trip or double-way trip?"<<endl;
        cout<<"1. Single-Way"<<endl;
        cout<<"2. Double-Way"<<endl;
        cin>>type_trip;

        if(type_trip != 1 && type_trip != 2)
        {
            cout<<"PLEASE ENTER A NUMBER BETWEEN 1 AND 2 ONLY"<<endl;
            cout<<"\n\n";
            goto c;
        }

        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO PROCEED TO THE NEXT STEP";

        getch();
    }
};

// Derived Class 5 - According to the information given in the above classes
// this class asks for drop and pickup points

class Points : public Trip_type
{
public:

    string pickup;
    string drop;
    string destination[100];
    int c=1, ch;

    void Drop_Pick()
    {
        choice_trip();

    d:
        system("cls");    //This is equivalent to clrscr();

        cout<<"PLEASE ENTER THE PICKUP, DESTINATIONS AND DROP POINTS: "<<endl;

        if(driver == 1)
        {
            cout<<"Enter Pickup Point:";
            fflush(stdin);
            getline(cin, pickup);
        }
        else
        {
            cout<<"Enter Car Leave Point:";
            fflush(stdin);
            getline(cin, pickup);
        }

        while(1)
        {
            cout<<"Enter Destination:";
            fflush(stdin);
            getline(cin, destination[n++]);

            cout<<"ARE THERE MORE DESTINATIONS?"<<endl;
            cout<<"1. YES"<<endl;
            cout<<"2. NO"<<endl;
            cin>>c;

            if(c == 2)
                goto z;

            else if(c != 1 && c !=2)
                cout<<"PLEASE ENTER A NUMBER BETWEEN 1 AND 2 ONLY"<<endl;
        }
    z:
        if(type_trip == 1)
        {
            cout<<"IS YOUR LAST DESTINATION YOUR FINAL DESTINATION?"<<endl;
            cout<<"1. YES"<<endl;
            cout<<"2. NO"<<endl;
            cin>>ch;

            if(ch == 1)
                drop = destination[n-1];

            else if(ch == 2)
            {
                cout<<"Enter Drop Point:";
                fflush(stdin);
                getline(cin, drop);
            }
            else
            {
                cout<<"PLEASE ENTER A NUMBER BETWEEN 1 AND 2 ONLY"<<endl;
                cout<<"\n\n";
                goto d;
            }
        }

        else
        {
            cout<<"Enter Drop Point:";
            fflush(stdin);
            getline(cin, drop);
        }

        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO PROCEED TO THE NEXT STEP";

        getch();
    }
};

// Derived Class 6 - asks the user for the duration of the trip and calculates the bill

class Duration : public Points
{
public:

    int duration;
    int choice;

    void durations()
    {
        Drop_Pick();

    e:
        system("cls");    //This is equivalent to clrscr();

        cout<<"PLEASE SPECIFY THE DURATION OF THE TRIP: "<<endl;
        cout<<"Is this a Single day trip or Multiple days trip?"<<endl;
        cout<<"1. Single Day"<<endl;
        cout<<"2. Multiple Days"<<endl;
        cout<<"NOTE: MULTIPLE DAY TRIPS INCLUDE NIGHT CHARGES"<<endl;
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
        case 1:
            cout<<"What is the duration of the trip (in hours):"<<endl;
            cin>>duration;
            total_bill*=duration;
            break;

        case 2:
            cout<<"For how many days do you want the car? : "<<endl;
            cin>>duration;
            duration*=12;
            total_bill*=duration;
            break;

        default:
            cout<<"PLEASE ENTER A NUMBER BETWEEN 1 AND 2 ONLY"<<endl;
            goto e;

        }

        if(duration <= 0)
        {
            cout<<"PLEASE ENTER VALID DURATION"<<endl;
            cout<<"\n\n";
            goto e;
        }

        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO PROCEED TO THE NEXT STEP";

        getch();
    }
};

// Derived Class 7 - displays all the information provided by the user

class Display : public Duration
{
public:

    void display()
    {
        durations();

        system("cls");    //This is equivalent to clrscr();

        cout<<"PERSONAL INFORMATION OF CLIENT: "<<endl;
        cout<<"\t NAME OF CUSTOMER: "<<name<<endl;
        cout<<"\t AGE OF CUSTOMER: "<<age<<endl;
        cout<<"\t PHONE NUMBER OF THE CUSTOMER: "<<phone_number<<endl;
        cout<<endl;

        cout<<"DETAILS OF THE CAR RENTED: "<<endl;
        cout<<"\t TYPE OF CAR: "<<type<<endl;
        cout<<"\t CAR SELECTED: ";

        if(type == "SUV")
        {
            switch(car_name)
            {
            case 1:
                cout<<"TOYOTA INNOVA"<<endl;
                break;
            case 2:
                cout<<"TOYOTA FORTUNER"<<endl;
                break;
            case 3:
                cout<<"TOYOTA CRYSTA"<<endl;
                break;
            case 4:
                cout<<"TOYOTA CRETA"<<endl;
                break;
            case 5:
                cout<<"MARUTI SUZUKI VITARA BREZZA"<<endl;
                break;
            case 6:
                cout<<"MAHINDRA XUV500"<<endl;
                break;
            case 7:
                cout<<"TATA HARRIER"<<endl;
                break;
            case 8:
                cout<<"TATA NEXON"<<endl;
                break;
            case 9:
                cout<<"JEEP COMPASS"<<endl;
                break;
            case 10:
                cout<<"HYUNDAI VENUE"<<endl;
                break;
            }
        }

        else if(type == "SEDAN")
        {
            switch(car_name)
            {
            case 1:
                cout<<"HONDA AMAZE"<<endl;
                break;
            case 2:
                cout<<"HYUNDAI VERNA"<<endl;
                break;
            case 3:
                cout<<"HONDA CITY"<<endl;
                break;
            case 4:
                cout<<"MARUTI CIAZ"<<endl;
                break;
            case 5:
                cout<<"VOLKSWAGEN VENTO"<<endl;
                break;
            case 6:
                cout<<"TOYOTA YARIS"<<endl;
                break;
            case 7:
                cout<<"HONDA CIVIC"<<endl;
                break;
            case 8:
                cout<<"TOYOTA CAMRY"<<endl;
                break;
            case 9:
                cout<<"MARUTI DZIRE"<<endl;
                break;
            case 10:
                cout<<"HYUNDAI AURA"<<endl;
                break;
            }
        }

        else if(type == "HATCH BACK")
        {
            switch(car_name)
            {
            case 1:
                cout<<"MARUTI SUZUKI SWIFT"<<endl;
                break;
            case 2:
                cout<<"MARUTI SUZUKI ALTO"<<endl;
                break;
            case 3:
                cout<<"MARUTI SUZUKI BALENO"<<endl;
                break;
            case 4:
                cout<<"RENAULT KWID"<<endl;
                break;
            case 5:
                cout<<"RENAULT TRIBER"<<endl;
                break;
            case 6:
                cout<<"MARUTI SUZUKI WAGON R"<<endl;
                break;
            case 7:
                cout<<"TATA ALTROZ"<<endl;
                break;
            case 8:
                cout<<"HYUNDAI ELITE I20"<<endl;
                break;
            case 9:
                cout<<"TATA TIAGO"<<endl;
                break;
            case 10:
                cout<<"HYUNDAI GRAND I10 NIOS"<<endl;
                break;
            }
        }

        else
        {
            switch(car_name)
            {
            case 1:
                cout<<"LAND ROVER"<<endl;
                break;
            case 2:
                cout<<"LAND ROVER VELAR"<<endl;
                break;
            case 3:
                cout<<"BMW X5"<<endl;
                break;
            case 4:
                cout<<"VOLVO XC40"<<endl;
                break;
            case 5:
                cout<<"VOLVO XC90"<<endl;
                break;
            case 6:
                cout<<"AUDI A6"<<endl;
                break;
            case 7:
                cout<<"AUDI Q8"<<endl;
                break;
            case 8:
                cout<<"BMW 320d"<<endl;
                break;
            case 9:
                cout<<"LAND ROVER DISCOVERY"<<endl;
                break;
            case 10:
                cout<<"BMW 6GT"<<endl;
                break;
            }
        }
        cout<<"\t NUMBER PLATE OF CAR: MH 03 BA "<<(z+=14)<<endl;
        cout<<endl;

        if(driver == 1)
        {
            cout<<"DETAILS OF THE DRIVER: "<<endl;
            cout<<"\t NAME OF DRIVER: "<<driver_name[j]<<endl;
            cout<<"\t PHONE NUMBER OF DRIVER: "<<driver_number[j]<<endl;
            cout<<"\t AGE OF DRIVER: "<<driver_age[j]<<endl;
            cout<<"\t LICENCE NUMBER OF DRIVER: 175421986546"<<(z+=14)<<endl;

            if(j!=5)
                j++;
            else
                j=0;
        }
        cout<<endl;

        cout<<"TRIP DETAILS: "<<endl;
        cout<<"\t TYPE OF TRIP: ";

        if(type_trip == 1)
            cout<<"SINGLE WAY TRIP"<<endl;
        else
            cout<<"DOUBLE WAY TRIP"<<endl;

        cout<<"\t PICKUP / CAR DROP POINT: "<<pickup<<endl;
        cout<<"\t DESTINATIONS: "<<endl;

        for(int k=0; k<n; k++)
            cout<<"\t "<<destination[k]<<endl;

        cout<<endl;
        cout<<"\t DROP POINT: "<<drop<<endl;
        cout<<"\t SINGLE / MULTIPLE DAY TRIP: ";

        if(choice == 1)
            cout<<"SINGLE DAY"<<endl;
        else
            cout<<"MULTIPLE DAY"<<endl;

        cout<<endl;

        cout<<"BILLING DETAILS: "<<endl;
        cout<<"\t DURATION OF TRIP: "<<duration<<" hours"<<endl;
        cout<<"\t APPROXIMATE TOTAL BILL: RS."<<total_bill<<endl;
        cout<<"\n\n";
        cout<<"THANK YOU FOR CHOOSING OUR CAR RENTAL SYSTEM!"<<endl;
        cout<<"WE HOPE YOU HAVE A SAFE TRIP!"<<endl;
        cout<<"\n\n";
        cout<<"PLEASE PRESS ANY KEY TO FINALISE";
    }
};

// Main function - this class will create the objects of the classes and perform the needful operations

int main()
{
    Display d[100];

    int i=0, choice;

    while(1)
    {
        cout<<"WELCOME TO GROUP NUMBER ONE's CAR RENTAL SYSTEM"<<endl;
        cout<<endl;

        d[i++].display();

        getch();

        system("cls");    //This is equivalent to clrscr();

        cout<<"IS THERE A NEW CUSTOMER?"<<endl;
        cout<<"1. YES"<<endl;
        cout<<"2. NO"<<endl;
        cin>>choice;

        if(choice == 2)
            break;
    }

    system("cls");    //This is equivalent to clrscr();

    cout<<endl;
    cout<<endl;

    cout<<"PROJECT TITLE: "<<endl;
    cout<<endl;

    cout<<"\t CAR RENTAL SYSTEM"<<endl;
    cout<<endl;

    cout<<"TYPED AND COMPILED BY: "<<endl;
    cout<<endl;

    cout<<"\t GROUP NUMBER 01"<<endl;
    cout<<endl;

    cout<<"ROLL NUMBER \t NAME OF STUDENT"<<endl;
    cout<<endl;

    cout<<"     1.     \t YASH KORLA"<<endl;
    cout<<endl;

    cout<<"     2.     \t RAJ MOTTA"<<endl;

    cout<<endl;

    cout<<"     3.     \t SAYED SIDDIQUI"<<endl;

    cout<<endl;

    cout<<"     4.     \t SANMIT GANGURDE"<<endl;

    getch();
    return 0;
}
