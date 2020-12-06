#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <ctime>
#include <cstdlib>


using namespace std;


int caughtPokemon = 0;

void Catcher3(){

  srand((unsigned) time(0));
  int randomNumber3 = (rand()%3253+1);

if (randomNumber3 > 1222){
    
    cout << "You Caught the Pokemon!!!" << endl;
    caughtPokemon ++;
    }else{
        cout<<"The Pokemon got away."<<endl;
        cout<< " " <<endl;
        cout<<"Press enter to throw another Pokeball."<<endl;
        cin.get();
  }
}

void Catcher2(){

  srand((unsigned) time(0));
  int randomNumber2 = (rand()%3251+1);

if (randomNumber2 > 555){
    
    cout << "Shake Shake" << endl;
    Catcher3();
      
  }else{
    cout<<"The Pokemon got away."<<endl;
        cout<< " " <<endl;
        cout<<"Press enter to throw another Pokeball."<<endl;
        cin.get();
  }
} 

void Catcher1(){

  srand((unsigned) time(0));
  int randomNumber1 = (rand()%3249+1);

  if (randomNumber1 > 222){
      cout << "Shake Shake" << endl;
      Catcher2();
    }else{
        cout<<"The Pokemon got away."<<endl;
        cout<< " " <<endl;
        cout<<"Press enter to throw another Pokeball."<<endl;
        cin.get();
  } 
}

void Catcher(){

cout<<"You threw a Pokeball!"<<endl;
  srand((unsigned) time(0));
  int randomNumber = (rand()%127+1);

  if (randomNumber > 47){
      cout<<"Shake Shake" << endl;
      Catcher1();
    }else{
        cout<<"The Pokemon got away."<<endl;
        cout<< " " <<endl;
        cout<<"Press enter to throw another Pokeball."<<endl;
        cin.get();
    }
}


int main(){

  cout<< "##########################" <<endl;
cout<< "#        Welcome         #" <<endl;
cout<< "#           To           #" <<endl;
cout<< "#    PokeBall Simulator  #" <<endl;
cout<< "#    © Copyright 2020    #" <<endl;
cout<< "##########################" <<endl;
cout<< " " <<endl;
    cout<<"Press enter to throw a Pokeball."<<endl;
    cin.get();
    cout<<"You threw a Pokeball!"<<endl;
    Catcher1();

    while(caughtPokemon == 0){

    Catcher();

    }
    cout<< " " <<endl;
    cout<<"Updating Pokedex Please wait..."<<endl;
    cout<< " " <<endl;
    cout<<"Updating Pokedex Please wait..."<<endl;
    cout<< " " <<endl;
    cout<<"Updating Pokedex Please wait..."<<endl;
    cout<< " " <<endl;
    cout<< "Pokedex Updated!" <<endl;



    
    return 0;
}