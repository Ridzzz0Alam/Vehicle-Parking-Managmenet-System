#include<iostream>
using namespace std;

int main() {

	int user_input;
	int amount = 0;
	int count = 0;

	while (true) {
		
		cout << "\n";
		cout << "VEHICLE-----PARKING----MANAGEMENT----SYSTEM" << endl;

		cout << "\n";
		cout << "PRESS 1: For Motorcycles" << endl;
		cout << "PRESS 2: For Car" << endl;
		cout << "PRESS 3: For Bus" << endl;
		cout << "PRESS 4: To Show Record" << endl;
		cout << "PRESS 5: To Delete Record" << endl;
		cout << "Enter your choice: ";
		cin >> user_input;
		if (user_input == 1) {

			count += 1;
			amount += 100;
		}
		else if(user_input == 2){
			amount += 200;
			count += 1;
		}
		else if (user_input == 3){
			amount += 300;
			count += 1;
		}
		else if(user_input == 4){
			cout << "TOTAL AMOUNT IS: " << " " << amount << endl;
			cout << "TOTAL NUMBER OF VEHICLES PARKED: " << " " << count << endl;
		}
		
	}
}