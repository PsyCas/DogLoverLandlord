#include <iostream>

using namespace std;

class Pet{
	
	public: 
	
	string pet;
	
	bool checkPet(){
		
		if (pet == "cat"){
			
			return false;
		}
		
		else if (pet == "dog"){
			
			return true;
		}
		
		else{
			
			return false;
		}
	}
};


int main(){
	
	cout << "What kind of pet do you have: ";
	string pet;
	cin >> pet;
	
	Pet newPet;
	newPet.pet = pet;
	
	bool decision = newPet.checkPet();
	
	if (decision == true){
		
		cout << " \nCongratulations! a " << pet << " is welcome in our property!";
	
		cout << "\n\nWhat color is your pet: ";
		string color;
		cin >> color;
	
		cout << "What is the age of your " << pet << ":";
		int age;
		cin >> age;
	
	}
	
	else{
		
		cout << "Sorry, a " << pet << " is ineligible to be housed in our property.";
	}
	
	return 0;
	
}
