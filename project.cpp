#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void game_started()
{
	int guess;
	int random = rand() % 251;
	srand(time(NULL));

	  cout << "guess the number:";



 while(guess!=random)
 {
 	cin >> guess;
 	if( guess == random)
 	{
 		cout << "You have guessed the number\n";
 		break;
 		
 	}else if(guess<random){
 		cout<<"The number is higher\n";

 	}else if (guess>random){
 		cout<<"the number is lower\n";
 	}
 }
}

int main()
{
	

     int choice;



do
{
	cout << "0 - To quit the game\n"<<"1 - To start the game\n"<<endl;
    cin >> choice;

	switch(choice)
    {
	 case 1: 
	     game_started();
	     break;
	 case 0: 
	     cout << "You have quitted the game!"<<endl;
	     return 0;
	 default: 
	     cout << "invalid input!"<<endl;
	     break;
    }
}while(choice !=0);
	


	return 0;
} 