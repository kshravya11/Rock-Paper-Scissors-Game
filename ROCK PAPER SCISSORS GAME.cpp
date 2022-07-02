#include <iostream>
#include<time.h>
using namespace std;

void func(int i){
  if(i==1) cout<<"rock🪨";
  else if(i==2) cout<<"paper📰";
  else cout<<"scissors✂️";
    }

int generaterandomnumber(int n){
        srand(time(0));
        return rand()%n;
    }
int result(int player, int computer){
        if(player==computer){
            return -1;
        }
        else if(computer==1 && player==3){
            return 0;
        }
        else if(computer==3 && player==1){
            return 1;
        }
        else if(computer==2 && player==1){
            return 0;
        }
        else if(computer==1 && player==2){
            return 1;
        }
        else if(computer==3 && player==2){
            return 0;
        } 
        else if(computer==2 && player==3){
            return 1;
        }
        
  }
int main(){
        int input,cinput;
        int playerscore=0, compscore=0;
       
    cout<<"*Welcome to ROCK🪨-PAPER📰-SCISSORS✂️ Game**\n\n\n";
    cout<<"Choose \n1-ROCK\n2-PAPER\n3-SCISSORS\n\n\n";
    for(int i=0;i<3;i++){
    cout<<"-----------------MATCH_"<<i+1<<"----------------------------\n";
    cout<<"Player's Turn:";
    cin>>input;
   
    cout<<"YOU:";
    func(input);
    cinput=generaterandomnumber(3);
      cout<<"\t\t";
    cout<<"COMPUTER:";
      func(cinput+1);
      cout<<"\n\n";
    if(result(input,cinput+1)==1){
        playerscore+=10;
    }
    else if(result(input,cinput+1)==0){
        compscore+=10;
    }

   
    
    }
    cout<<"------------------------------------------------\n";
    cout<<"Player's score:"<<playerscore<<endl;
    cout<<"Computer's score:"<<compscore<<endl;
    cout<<"------------------------------------------------\n\n";
    if(compscore>playerscore){
  cout<<"    ===========YOU Lost==========\n              PLAY AGAIN🎮";
    }
    else if(playerscore>compscore){
        cout<<"    ==========YOU WON==========\n              PLAY AGAIN🎮";
    }
    else{
        cout<<"    ==========IT'S DRAW===========\n              Play again🎮";
    }
    return 0;
}
