#include <iostream>
#include "Sorter.h"

using namespace std;

int main(int argc, char** argv)
{
	//argv[0] = ./assignment6.exe
	//argv[1] = file name

	cout << "ArgC: " << argc << endl;
	if (argc == 2)
	{
		string filename = argv[1]; //set filename
		cout << "filename: " << filename << endl;

		Sorter sorter(filename);
		sorter.printList();
	}
	else //wrong num of args
	{
		cout << "Run Assignment6 with the name of a list of doubles as its only argument!" << endl;
	}

	cout << "Program exited sucesfully." << endl;
	return 0;
}
