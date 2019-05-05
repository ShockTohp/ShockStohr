#ifndef BDMANAGER_H
#define DBMANAGER_H


#include <vector>
#include <iostream>
#include <fstream>
#include <iterator>
#include <cstring>
#include <map>

int writeOut(std::string filename, std::map<std::string, std::string> data );
std::map<std::string, std::string> loadIn(std::string filename);
int addNewEntry(std::map<std::string, std::string>, std::string id, std::string password);
std::string retrieveEntry(std::string id, std::map<std::string, std::string> data);


#endif
