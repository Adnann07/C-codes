
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int quantity;
    int choice;

    int Qrooms=0, Qpasta=0, Qburger=0, Qramen=0,Qmilk=0,Qmeat=0;

    int Srooms=0, Spasta=0, Sburger=0, Sramen=0, Smilk=0, Smeat=0;

    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_ramen=0, Total_milk=0, Total_meat=0;

    cout<<"\n\t\t Quantity of items we have";
    cout<<"\n\n Rooms available : ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;

    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of ramen: ";
    cin>>Qramen;
    cout<<"\n Quantity of milk: ";
    cin>>Qmilk;
    cout<<"\n Quantity of chicken: ";
    cin>>Qmeat;

m:
    cout<<"\n\t\t Please select from the given menu options : ";

    cout<<"\n\n1) Rooms";
    cout<<"\n\n2) pasta";
    cout<<"\n\n3) burger";
    cout<<"\n\n4) ramen";
    cout<<"\n\n5) milk";
    cout<<"\n\n6) meat";
    cout<<"\n\n7) Information regarding sales and collection ";
    cout<<"\n\n8) Exit";

    cout<<"\n\n please enter your choice ";
    cin>>choice;



    switch(choice)
    {
    case 1:
        cout<<"\n\n Enter the number of rooms you want: ";
        cin>>quantity;
        if(Qrooms-Srooms>=quantity)
        {
            Srooms=Srooms+quantity;
            Total_rooms=Total_rooms+(quantity*1200);
            cout<<"\n\n\t\t" <<quantity<<" room/rooms have been alloted to you: ";
        }
        else
        {
            cout<<"\n\tOnly"<<Qrooms-Srooms<<" rooms are available";
            break;
        }


    case 2:
        cout<<"\n\n Enter the Pasta Quantity: ";
        cin>>quantity;
        if(Qpasta-Spasta>=quantity)
        {
            Spasta=Spasta+quantity;
            Total_pasta=Total_pasta+(quantity*40);
            cout<<"\n\n\t\t" <<quantity<<" Pasta ordered! ";
        }
        else
        {
            cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta available";
            break;
        }




    case 3:
        cout<<"\n\n Enter the burger Quantity: ";
        cin>>quantity;
        if(Qburger-Sburger>=quantity)
        {
            Sburger=Sburger+quantity;
            Total_burger=Total_burger+(quantity*120);
            cout<<"\n\n\t\t" <<quantity<<" Burger ordered! ";
        }
        else
        {
            cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger available";
            break;
        }


    case 4:
        cout<<"\n\n Enter the ramen Quantity: ";
        cin>>quantity;
        if(Qramen-Sburger>=quantity)
        {
            Sburger=Sramen+quantity;
            Total_ramen=Total_ramen+(quantity*80);
            cout<<"\n\n\t\t" <<quantity<<" Ramen ordered! ";
        }
        else
        {
            cout<<"\n\tOnly"<<Qramen-Sramen<<" Ramen available";
            break;
        }


    case 5:
        cout<<"\n\n Enter the milk Quantity: ";
        cin>>quantity;
        if(Qmilk-Smilk>=quantity)
        {
            Smilk=Smilk+quantity;
            Total_milk=Total_milk+(quantity*30);
            cout<<"\n\n\t\t" <<quantity<<" milk ordered! ";
        }
        else
        {
            cout<<"\n\tOnly"<<Qmilk-Smilk<<" milk available";
            break;
        }



    case 6:
        cout<<"\n\n Enter the meat Quantity: ";
        cin>>quantity;
        if(Qmeat-Smeat>=quantity)
        {
            Smeat=Smeat+quantity;
            Total_meat=Total_meat+(quantity*350);
            cout<<"\n\n\t\t" <<quantity<<" meat ordered! ";
        }
        else
        {
            cout<<"\n\tOnly"<<Qmeat-Smeat<<" meat available";
            break;
        }



    case 7:
        cout<<"\n\t\tDetails of sales and collection: ";
        cout<<"\n\n Number of rooms we had: "<<Qrooms;
        cout<<"\n\n Number of  we gave for rent: "<<Srooms;
        cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms income for the day : "<<Total_rooms;



    case 8:
        exit(0);

    default:
        cout<<"\n Please select the numbers mentioned above!";
    }

    goto m;

}
