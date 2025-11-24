#include "book.h"
#include <iostream>
using namespace std;

Book::Book()
    : title(""), author(Author("", "")), publicationYear(0) {}

Book::Book(string bookTitle, Author bookAuthor, int year, vector<Chapter> bookChapters)
    : title(bookTitle), author(bookAuthor), publicationYear(year), chapters(bookChapters) {}

void Book::addChapter(Chapter newChapter) {
    chapters.push_back(newChapter);
}

void Book::displayInfo() {
    cout << "Book: " << title << " by " << author.toString()
         << " (" << publicationYear << ")" << endl;

    cout << "Chapters:" << endl;
    for (auto& ch : chapters)
        ch.displayInfo();
}

string Book::getTitle() { return title; }
Author Book::getAuthor() { return author; }
int Book::getPublicationYear() { return publicationYear; }
vector<Chapter> Book::getChapters() { return chapters; }
