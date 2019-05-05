#include </home/kevin/cppProjects/ShockStohr/DBmanager.h>

using namespace std;

int writeOut(std::string filename, std::map<std::string, std::string> data){
		ofstream datafile;
		datafile.open(filename);
		if(datafile.fail()){
			return -5;
		}
		for(auto const& x  : data){
			datafile << x.first << "\t" << x.second << "\n";
		}

		return 1;
}


std::map<std::string, std::string> loadIn(std::string filename){
	std::map<std::string, std::string> data;

return data;
}


