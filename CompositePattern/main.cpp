#include "Directory.h"
#include "File.h"
#include <iostream>

int main()
{
	Directory* testDirectory_1 = new Directory("Test1Directory");
	Directory* testDirectory_2 = new Directory("Test2Directory");
	Directory* testDirectory_3 = new Directory("Test3Directory");

	File* testFile_1 = new File("testFile_1", ".txt");
	File* testFile_2 = new File("testFile_2", ".mp3");
	File* testFile_3 = new File("testFile_3", ".avi");
	File* testFile_4 = new File("testFile_4", ".exe");
	File* testFile_5 = new File("testFile_5", ".pdf");
	File* testFile_6 = new File("testFile_6", ".jpg");


	testDirectory_1->Add(testFile_1);
	testDirectory_1->Add(testFile_2);
	testDirectory_1->Add(testFile_3);

	testFile_1->Operation();

	std::cout << "--------------" << std::endl;

	testDirectory_1->Operation();

	std::cout << "--------------" << std::endl;

	testDirectory_2->Add(testFile_4);
	testDirectory_2->Add(testFile_5);
	testDirectory_2->Add(testFile_6);

	testDirectory_2->Add(testDirectory_1);

	testDirectory_2->Operation();

	std::cout << "--------------" << std::endl;

	testDirectory_3->Add(testDirectory_2);

	testDirectory_3->Operation();

	delete testDirectory_1;
	delete testDirectory_2;

	delete testFile_1;
	delete testFile_2;
	delete testFile_3;
	delete testFile_4;
	delete testFile_5;
	delete testFile_6;

	return 0;
}