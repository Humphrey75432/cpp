//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//
//const int SIZE = 60;
//
//int main()
//{
//	using namespace std;
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "Enter name of data file: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//
//	// Output result to a file
//	ofstream outFile;
//	outFile.open("result.txt");
//
//	if (!inFile.is_open())
//	{
//		outFile << "Could not open the file " << filename;
//		outFile << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	// standard file-reading loop design
//	inFile >> value; // get first value
//	while (inFile.good())
//	{
//		++count;
//		sum += value;
//		inFile >> value; // get next value
//	}
//
//	if (inFile.eof())
//	{
//		outFile << "End of file reached.\n";
//		
//	}
//	else if (inFile.fail())
//	{
//		outFile << "Input terminated by data mismatch.\n";
//	}
//	else
//	{
//		outFile << "Input terminated for unknown reason.\n";
//	}
//	if (count == 0)
//	{
//		outFile << "No data processed.\n";
//	}
//	else
//	{
//		outFile << "Items read: " << count << endl;
//		outFile << "Sum:" << sum << endl;
//		outFile << "Average: " << sum / count << endl;
//	}
//	inFile.close();
//	outFile.close();
//	return 0;
//}