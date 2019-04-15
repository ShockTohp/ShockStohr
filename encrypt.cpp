#include </home/kevin/cppProjects/ShockStohr/encrypt.h>
using namespace std;


void xor_encrypt(const string &key, vector<char> &data)
{
	for(size_t i = 0; i != data.size(); i++) 
	{
		data[i] ^= key[i % key.size()];	
	} 
}


vector<char> importData(string filename, string key)
{ 
		ifstream datafile;
		datafile.open(filename, ios::binary);
		if(datafile.fail()){  cout << "File not found"; throw 0;}
		vector<char> data(
				(istreambuf_iterator<char>(datafile)),
				(istreambuf_iterator<char>())
				);
		xor_encrypt(key, data);
		return data;


}
vector<char> exportData(string filename, string key, vector<char> data)
{
	ofstream datafile;
	datafile.open(filename, ios::binary);
	if(datafile.fail()) {
		cout << "File not opened for read, creating default outfile\n";
		datafile.open("DefaultOut", ios::binary);
	}
	xor_encrypt(key, data);
	ostream_iterator<char> data_it(datafile);
	copy(data.begin(), data.end(), data_it);

	datafile.close();
	return data;
}
