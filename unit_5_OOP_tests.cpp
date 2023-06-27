#include <iostream>
#include <string>
#include "unit_5_1.cpp"

void task_1(void){
	using namespace std;
	
	Parallelepiped obj1;
		cout << obj1.Volume() << endl;
		obj1.showAll();
		
		Parallelepiped obj2(2.0, 2.0);
		cout << obj2.Volume() << endl;
		obj2.showAll();
		
		Parallelepiped obj3(2.0, 2.0, 2.0);
		cout << obj3.Volume() << endl;
		obj3.showAll();
		
		ParallelepipedMath obja;
		cout << obja.Density() << endl;
		obja.showAll();
		
		ParallelepipedMath objb(2.0, 2.0);
		cout << objb.Density() << endl;
		objb.showAll();
		
		ParallelepipedMath objd(2.0, 2.0, 2.0, 2.0);
		cout << objd.Density() << endl;
		objd.showAll();	
		
		cout << "Before : " << endl;
		objb.showAll();
		obja.showAll();
		cout << "After '/', '*' : " << endl;
		objb = objb/2;
		obja = obja*2;
		objb.showAll();
		obja.showAll();
		cout << "After '-', '+' : " << endl;
		objb = objb-obja;
		obja = objb+obja;
		objb.showAll();
		obja.showAll();
	
}
	
void task_2(void){
	
}


int main(void){
	
	using namespace std;
	
	string user_choice;
	
	cout << "|? Enter your choice. >> ";
	cin >> user_choice;
	
	while(user_choice != "e"){
		
		if(user_choice == "1")
			task_1();
		else if(user_choice == "2")
			task_2();	
		
		
			
		cout << "|? Enter your choice. >> ";
		cin >> user_choice;
		
	}
	
	return 0;
}
