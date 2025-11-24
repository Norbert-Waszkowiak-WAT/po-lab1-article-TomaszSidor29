#include "chapter.h"
#include <iostream>
using namespace std;

Chapter::Chapter()
    : title(""), author(Author("", "")), chapterNumber(0) {}

Chapter::Chapter(string chapterTitle, Author chapterAuthor, int number)
    : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {}

Chapter::Chapter(Chapter& other)
    : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {}

void Chapter::displayInfo() {
    cout << "Chapter " << chapterNumber << ": " << title
         << " by " << author.toString() << endl;
}

string Chapter::getTitle() { return title; }
Author Chapter::getAuthor() { return author; }
int Chapter::getChapterNumber() { return chapterNumber; }
