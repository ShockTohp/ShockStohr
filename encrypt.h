#include <vector> 
#include <iostream>
#include <fstream>
#include <iterator>
#include <cstring>
using namespace std;

void xor_encrypt(const string &key, vector<char> &data);
vector<char> importData(string filename, string key);
vector<char> exportData(string filename, string key, vector<char> data);
