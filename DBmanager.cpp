#include </home/kevin/cppProjects/ShockStohr/DBmanager.h>

using namespace std;

int writeOut(std::string filename, std::map<std::string, std::string> data){
		ofstream datafile;
		datafile.open(filename);
		if(datafile.fail()){
			return -5;

		}
		
		return 1;
}



