#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include "Chapter.h"
#include "Author.h"
using namespace std;

class Book {
private:
	string title;
	int publicationYear;
	Author author;
	vector<Chapter> chapters;
public:
	Book();
	Book(string articleTitle, Author articleAuthor, int year, vector<Chapter> bookChapters);
	void addChapter(Chapter newChapter);
	void displayInfo();
	string getTitle();
	Author getAuthor();
	int getChapterNumber();
	vector<Chapter> getChapters();
};

#endif