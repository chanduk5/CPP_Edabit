#include <fstream>
using namespace std;

void fileIO(void)
{
	string str;
	static int value = 0;

	// open an ifstream
	ifstream inputFile;
	inputFile.open("C:\\Chandu\\CPP_Preparation\\CPP_Edabit\\CPP_CodeSignal\\InputFile.txt");

	// open an ofstream
	ofstream outputFile;
	// open ofstream in append mode
	outputFile.open("C:\\Chandu\\CPP_Preparation\\CPP_Edabit\\CPP_CodeSignal\\OutputFile.txt", ios::out | ios::app);

	inputFile >> str;
	outputFile << "I love C++ programming" << value++ << endl;

	inputFile.close();
	outputFile.close();
}
