//ISAT Subtask 2
//Nicola Phiri
//5 August 2024
//172300940
#include <iostream>
#include <cmath>
#include <iostream>
#include <cstdlib> // include for the rand() function in the random conversion 
#include <ctime> // include this for the time() function i the random conversion
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
int convert (long long);//Choice 2 - binary to decimal
//Fnction for Choice 2
int convert(long long binarynumber) {
  int dec = 0, i = 0, rem;

  while (binarynumber!=0) {
    rem = binarynumber % 10;
    binarynumber /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  int DecToHex(int decimalnumber) //Choice 3- decimal to hexadecimal
{
    char *l_pCharRes = new (char);
    sprintf(l_pCharRes, "%X", decimalnumber);
    int l_intResult = stoi(l_pCharRes);
    cout << l_intResult<< "\n";
    return l_intResult;
}

}
int main()
{
    //Option 1 declaration continued
    int decimalnumber; /*Declare the variables here to make them universal, since they are to be directly 
    converted, all the inputs will be declared as integars rather than float/double variables*/
   
    //Option 2 declaration
    int binarynumber;

    //Option 4 declaration

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
        cin>>decimalnumber;
        //Call the conversion to the case choice from the main
        cout << "Your number in binary conversion of" << decimalnumber << " is "; 
        decimalToBinary(decimalnumber); 
        cout << endl; 
        break;

        case 2: 
        cout<<"Please enter a binary number."<<"\n";
        cin>> binarynumber;
        //Call conversion to choice 2
        long long binarynumber;
        cout << binarynumber << " in binary = " << convert(binarynumber) << " in decimal";
        cout<< endl;
        break;

        case 3: 
        cout<<"Please enter a decimal number"<<"\n";
        cin>> decimalnumber;
        //Call function to Choice 3 in main
        int x = decimalnumber;
        DecToHex(decimalnumber);
        break;

        case 4: 
        cout<<"Please enter a hexadecimal number"<<"\n";
        cin>> hexnumber;
        char hexnumber[20];
        int i, r, len, hex = 0;
        len = strlen(hexnumber);
        for (i = 0; hexnumber[i] != '\0'; i++)
            {
                len--;
                if(hexnumber[i] >= '0' && hexnumber[i] <= '9')
                r = hexnumber[i] - 48;
                else if(hexnumber[i] >= 'a' && hexnumber[i] <= 'f')
                r = hexnumber[i] - 87;
                else if(hexnumber[i] >= 'A' && hexnumber[i] <= 'F')
                r = hexnumber[i] - 55;
                hex += r * pow(16,len);
        cout<<endl;
            }
        cout << "\nDecimal equivalent of " << hexnumber << " is : " << hex;
        break;

        case 5: 
        cout<<"A random integar number that will be convertedto binary will now be generated."<<"\n";
        srand(time(0));

        // generate a random number between 0 and 99
        int randombinary = rand() % 100; // rand() % 6 generates a number between 0 and 5
        cout << "the random number between 0 and 99 is" << randombinary << endl;
        convert (long long);//Choice 2 - binary to decimal
        //Fnction for Choice 2
        int convert(long long randomNum) {
        int dec = 0, i = 0, rem;

        while (randomNum!=0) {
        rem = randomNum % 10;
        randombinary /= 10;
        dec += rem * pow(2, i);
        ++i;
        cout<<"This number in binary will be"
        break;

        case 6:
        cout<<"You have now exited the program.";
        }

    }while (choice!=6);
        }
    
    }
    return 0;
}
