#include <iostream>		 // std::cout and std::cin
#include <string>		// std::string
#include <locale>	   // std::locale and std::tolower

using namespace std;

class Pet{
	
	public: 
	
	string petVar;
	string colorVar;
	int ageVar;
	
	bool checkPet(){
		
		if (petVar == "cat"){
			
			return false;
		}
		
		else if (petVar == "dog"){
			
			return true;
		}
		
		else{
			
			return false;
		}
	}
	
	
	void colorDecision(){
		
		if (colorVar == "black"){
			
			cout << "\nOH! a stealthy little doggo. I love it!";
		}
		
		else if (colorVar == "white"){
			
			cout << "\nFluffy and adorable little white pupper!";
		}
		
		else{
			
			cout << "\nPaint it black or white bruv.";
		}
	}
	
	bool ageDecision(){
		
		if (ageVar < 10){
			
			return true;
		} 
		
		else if (ageVar > 10){
			
			return false;
		}
		
		else{
			
			return false;
		}
	}
};

	

int main(){
	
	locale loc;
	
	cout << "What kind of pet do you have: ";
	string pet;
	cin >> pet;
	
	string petNew;  // setting a new variable to store our lower case string 
	
	for (int i = 0; i < pet.length(); i++){
		
		petNew += tolower(pet[i],loc);
	}
	
	
	Pet newPet;   // Creating an object for class Pet. Object name = newPet
	newPet.petVar = petNew;   // initializing the public instance variable petVar from the Pet class
	
	bool decision = newPet.checkPet();   // Calling the checkPet method from the Pet class using the newPet object and storing the return value in variable "decision"
	
	if (decision == true){
		
		cout << " \nCongratulations! a " << pet << " is welcome in our property!";
	
		cout << "\n\nWhat color is your pet: ";
		string color;
		cin >> color;
		
		string newColor;
		
		for (int i = 0; i < color.length(); i++){
			
			newColor += tolower(color[i], loc);
		}
		
		color = newColor;
		
	
		cout << "What is the age of your " << pet << ":";
		int age;
		cin >> age;
		
		newPet.colorVar = color;  // public instance variable initiaization
		newPet.colorDecision();   // Using class colorDecision
		
		cout << endl;
		
		newPet.ageVar = age;
		bool ageFinal = newPet.ageDecision();
		
		if (ageFinal == true){
			
			cout << "But the pupper has a lot to learn!";
		}
		
		else{
			
			cout << "And the doggo has seen a lot!";
		}
		
		cout << endl;
		
	
	}
	
	else{
		
		cout << "\nSorry, a " << pet << " is ineligible to be housed in our property.";
	}
	
	return 0;
	
}
