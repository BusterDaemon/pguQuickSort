#include "fileOp.h"
#include <fstream>
#include <iostream>
#include <vector>

int* readFile(char* filePath, int* outSize) {	
	std::ifstream file;
	file.open(filePath);
	if (!file.is_open()) {
		return nullptr;
	}	

	char line[UINT16_MAX];
	file.getline(line, UINT16_MAX);
	auto arr = std::string(line);
	size_t pos = 0;
	std::vector<int> vec;

	while ((pos = arr.find(",")) != std::string::npos) {
		auto tok = arr.substr(0, pos);
		vec.insert(vec.end(), std::atoi(tok.c_str()));
		arr.erase(0, pos + 1);
	}
	file.close();
	int* result = new int[vec.size()];
	*outSize = vec.size();
	std::copy(vec.begin(), vec.end(), result);
		
	return result;
}