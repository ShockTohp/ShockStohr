#include </home/kevin/cppProjects/ShockStohr/encrypt.h>
using namespace std;


int main(int argc, char *argv[]) 
{
	if (argc < 3)
	{
		cout << "Two Few Arguments! Exiting" << endl;
		return 1;
	}	
	if (argc > 3)
	{
		cout << "Two Many Arguments! Exiting" << endl;
		return 1;
	}
	string pass = argv[0];
	string filename = argv[1];
	//vector<char> data = importData(filename, pass);
	cout << endl;
	int choice = 0;
	bool lock = false;
	while(choice < 1 || choice > 2){ 
		cout << "\nWhat would you like to do:\n1: Lock\n2: Unlock\n";
		cin >> choice;
		if (choice == 1){
			lock = true;
		} else if (choice == 2){

		}

	}
	if(lock) {
		vector<char> data = importData(filename, pass);
		exportData(filename, pass, data);
	}


	if(!lock){
		vector<char> data = importData("locked.txt", pass);
		exportData("unlocked.txt", pass, data);
	}



return 0;
}

