#include <iostream>

using namespace std;

int main()
{
   cout<<"##############"<<endl;
   char x = '*';
    for(int i=0;i<5;i++){
       for(int j=i;j<5;j++){
        cout <<x;
     }
     cout<<endl;
   }

   cout<<"##############"<<endl;
   //Start
   //rows = 5
   //length =9
   int startPoint=1;
   int endPoint=10;
   int spacesStart;
   int spacesLast;

   endPoint = endPoint- (endPoint%3);
   for(int i=startPoint;i<=endPoint ; i+=2){
    //spaces
    spacesStart = (i/2);
    spacesLast = (9/2) -spacesStart  ;
    for(int spa =0 ;spa < spacesLast;spa++){
        cout<<" ";
    }
    for(int j =0 ;j < i;j++){
        cout<<"*";
    }
    for(int spa =0 ;spa < spacesLast;spa++){
        cout<<" ";
    }
    cout<<endl;
   }
  cout<<"##############"<<endl;
   startPoint=1;
   endPoint=10;
   spacesStart;
   spacesLast;
   int counter=0;
   endPoint = endPoint- (endPoint%3);
    for(int i =startPoint;i<=endPoint * 2;i+=2){
    if(i>10){
        counter = - (i-endPoint *2);

      //spaces
          spacesStart= (counter/2);
         spacesLast = (9/2) -spacesStart  ;
        for(int spa =0 ;spa < spacesLast;spa++){
            cout<<" ";
        }
        for(int j =0 ;j < counter;j++){
            cout<<"*";
        }
        for(int spa =0 ;spa < spacesLast;spa++){
            cout<<" ";
        }
        cout<<endl;

    }else{
        //spaces
        spacesStart = (i/2);
        spacesLast = (9/2) -spacesStart  ;
        for(int spa =0 ;spa < spacesLast;spa++){
            cout<<" ";
        }
        for(int j =0 ;j < i;j++){
            cout<<"*";
        }
        for(int spa =0 ;spa < spacesLast;spa++){
            cout<<" ";
        }
        cout<<endl;
    }
    }
}

