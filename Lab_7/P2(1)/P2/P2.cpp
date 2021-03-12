#include "Person.h"
#include <iostream>
using namespace std;

int main(){
	//used for testing your code. Create 2 people, print their take home pays, 
	//determine if they are enemys or friends using the enemy_or_buddy function
	//then call their print_status() functions.

	Person P1(1000,.1,"Alice");
	Person P2(2000, .25, "Bob");

	cout <<"P1 Pay: " << P1.calc_takehome_pay() << endl;
	cout <<"P2 Pay: " << P2.calc_takehome_pay() << endl;

	P1.enemy_or_buddy(&P2);

	cout<< "Alice After Enemy or Buddy" << endl;
	P1.print_status();

	cout<< "Bob Before Enemy or Buddy" << endl;
	P2.print_status();


	P2.enemy_or_buddy(&P1);

	cout<< "Bob After Enemy or Buddy" << endl;
	P2.print_status();
}