#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include "author.h"
#include "chapter.h"

using namespace std;

class Book{
    private:
    string title;
    Author author;
    int publicationYear;
    vector<Chapter> chapters;
    public:
    Book();
    Book(string bookTitle,Author bookAuthor,int year,const vector<Chapter> &bookChapters);
    void addChapter(const Chapter &chapter);
    void displayInfo();
    string getTitle();
    Author getAuthor();
    int getPublicationYear();
    vector<Chapter> &getChapters();
};
#endif