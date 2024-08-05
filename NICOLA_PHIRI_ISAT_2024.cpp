#include <iostream>
#include <cmath>
using namespace std;
void ShowMenu()
{
    cout<<"****CONVERSION MENU****"<<endl;
    cout<<"1.Convert Decimal to Binary"<<endl;
    cout<<"2.Convert Binary to Decimal"<<endl;
    cout<<"3.Convert Hexadecimal to Decimal"<<endl;
    cout<<"4.Convert Decimal to Hexadecimal"<<endl;
    cout<<"5.Demo (Generate and convert random integers to binary)"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"ALL NUMBERS MUST BE WHOLE"<<endl;
}

/*Declaration for the decimal to binary*/
//Choice 1
void decimalToBinary(int decimal) { 

    if (decimal == 0) { 
        return; 

    } else { 

        decimalToBinary(decimal / 2); 
        cout << decimal % 2; 

    } 

}
int main()
{
    //Option 1 declaration continued
    int decimal; /*Declare the variables here to make them universal, since they are to be directly 
    converted, all the inputs will be declared as integars rather than float/double variables*/


    cout << "Enter a decimal number: "; 
    cin>> decimal; 
    cout << "The binary equivalent of " << decimal << " is "; 
    decimalToBinary(decimal); 
    cout << endl; 

      
    char choice;
    do{
        ShowMenu();
        cout<<"Please enter your choice(1-6)";
        cin>> choice;
        system("cls");
        switch(choice);
        {
        case 1: 
        cout<<"Please enter a decimal number to convert to binary"<<"\n";
        cin>>decimal;
        cout << "Your number in binary conversion of" << decimal << " is "; 
        decimalToBinary(decimal); 
        cout << endl; 
        break;

        case 2: 
        cout<<"Please enter a decimal number."<<"\n";
        cin>> binary;
        break;

        case 3: 
        cout<<"Please enter a hexadecimal number"<<"\n";
        cin>> binary;
        break;

        case 4: 
        cout<<"Please enter a decimal number to convert to hexadecimal"<<"\n";
        cin>> binary;
        break;

        case 5: 
        cout<<""<<"\n";
        break;

        case 6:
        cout<<"You have now exited the program.";
        }

    }while (choice!=6);
    
 return 0;
}