#include <iostream>
#include<bits/stdc++.h>
//aya tarek
//20170069
//xor cipher

int main()

{


using namespace std;

 cout<<"Ahlen ya user ya yhabibi";
cout<<" you want cipher massege ?";
cout<<endl;
while(true){





    int choice;
    char key;
    long int result;
    char decipher;

    {
        cout<<"\n1-Cipher a message"<<endl;
        cout<<"2-Decipher a message"<<endl;
        cout<<"3-End"<<endl;
        cin >>choice;
        string text,decipherText;

        if (choice==1)
        {

            cout << "\nEnter text ";
            cin>>text;
            cout << "Enter key " <<endl;
            cin >> key ;
            //process
            for (int i=0; i< text.length(); i++)
            {
                result=text[i]^key;
                cout <<hex<<result; //<<hex<<result;
            }
        }
        if (choice==2)
        {
            cout<<"Enter message";
            cin>>decipherText;
            cout << "Enter key" ;
            cin >> key ;
            for(int i=0; i<=decipherText.length(); i++)
            {
                decipher=decipherText[i]^key;
                cout <<decipher;
            }
        }
    }
        while(choice!=3);
        break;}}






