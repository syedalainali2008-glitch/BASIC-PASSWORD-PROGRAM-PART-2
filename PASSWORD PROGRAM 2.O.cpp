#include<iostream>
using namespace std;
int main()
{
    string password="ALAIN";
    string enter;
    cout<<"ENTER YOUR PASSWORD:";
    cin>>enter;
    if(enter==password){
        for(int s=1;s<=5;s++){
            cout<<"PROCESSSING....."<<endl;
        }
        cout<<"ACCESS CLEAR :\n YOU CAN ENTER IN OUR SYSTEM:"<<endl;
    }
    else{
        for( int s=1;s<=5;s++){
            cout<<"PROCESSSING....."<<endl;
        }
        cout<<"ACCESS DENAIL :\n YOU CAN'T ENTER IN OUR SYSTEM:"<<endl;
    }
    return 0;
}
