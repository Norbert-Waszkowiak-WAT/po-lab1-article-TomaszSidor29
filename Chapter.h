#include <iostream>
#include "Author.h"
using namespace std;

class Chapter {
private:
	string title;
	Author author;
	int chapterNumber;
public:
	Chapter();
	Chapter(string chapterTitle, Author chapterAuthor, int number);
	Chapter(Chapter& other);
	void displayInfo();
	string getTitle();
	Author getAuthor();
	int getChapterNumber();
};

//0420