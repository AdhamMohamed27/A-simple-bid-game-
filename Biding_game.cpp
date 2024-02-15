//  Assignment1 CS problem 5
//
//  Created by Adham Mohamed  on 11/06/2023.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int Play();
void gameplay(int play,int & budget, int actualplay);

int main(){
    int Rnum,UsersPlay;
    int budget=30;
    int keepgoing=0;
    int playagain=0;
    while (playagain==0){
        budget=30;
        keepgoing=0;
        while (budget>0 and budget<=50 and keepgoing==0) {
            Rnum=Play();
            cout<<"Please, Enter your bid"<<endl;
            cin>>UsersPlay;
            gameplay(UsersPlay, budget, Rnum);
            cout<<"Would you liek to place another bid?"<<endl;
            cout<<"If yes then press 0, other wise press 1"<<endl;
            cin>>keepgoing;
            
        }
            
            if (budget==0){
                cout<<"Looks like you lost :)"<<endl;
                cout<<"GAME OVER"<<endl;
            }
            else if(budget>=40){
                cout<<"CONGRATS, you win with a budget of: "<<budget<<endl;
                cout<<"GAME OVER"<<endl;
            }
            else{
                cout<<"Current budget is: "<<budget<<endl;
                cout<<"GAME OVER"<<endl;
            }
            cout<<"Would you like to try another game?, if yes, then press 0, else, press 1"<<endl;
            cin>>playagain;
            
        }
    if (playagain==1);
    cout<<"GoodByee"<<endl;
    return 0;
}

int Play(){
    int Rnum1,Rnum2,TotalRnum;
    srand(time(nullptr));
    Rnum1= rand()%6+1;
    Rnum2= rand()%6+1;
    TotalRnum=Rnum1+Rnum2;
    return TotalRnum;
}

void gameplay(int play,int & budget, int actualplay){
    if (actualplay==7 or actualplay==11){
        cout<<"Congrats, you win!"<<endl;
        budget=play+budget;
        cout<<"The current budget is: "<<budget<<endl;
    }
    else if( actualplay==2 or actualplay==3 or actualplay==12){
        cout<<"OPS, you lose :("<<endl;
        budget=budget-play;
        cout<<"The current budget is: "<<budget<<endl;
    }
    else{
        cout<<"NO one wins nor loeses"<<endl;
        cout<<"The current budget is: "<<endl;
    }
}
