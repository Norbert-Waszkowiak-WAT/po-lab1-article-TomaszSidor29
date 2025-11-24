#include "article.h"
#include <iostream>
using namespace std;

Article::Article()
    : title(""), author(Author("", "")), publicationYear(0), journal("") {}

Article::Article(string articleTitle, Author articleAuthor, int year, string journalName)
    : title(articleTitle), author(articleAuthor),
      publicationYear(year), journal(journalName) {}

Article::Article(const Article& other)
    : title(other.title), author(other.author),
      publicationYear(other.publicationYear), journal(other.journal) {}

void Article::displayInfo() {
    cout << "Article: " << title << " by " << author.toString()
         << " (" << publicationYear << "), Journal: " << journal << endl;
}

string Article::getTitle() { return title; }
Author Article::getAuthor() { return author; }
int Article::getPublicationYear() { return publicationYear; }
string Article::getJournal() { return journal; }
