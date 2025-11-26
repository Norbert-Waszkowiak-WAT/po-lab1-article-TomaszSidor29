#include "Book.h"
using namespace std;

Book::Book()
    : title(""), author(Author("", "")), publicationYear(0) {
}
Book::Book(string articleTitle, Author articleAuthor, int year, vector<Chapter> bookChapters)
    : title(articleTitle), author(articleAuthor), publicationYear(year), chapters(bookChapters) {
}
void Book::addChapter(Chapter newChapter) {
    chapters.push_back(newChapter);
}
void Book::displayInfo() {
    cout << "Książka: " << title << " autorstwa: " << author.toString() << " (" << publicationYear << ")" << endl;
    cout << "Chapters:" << endl;
    for (auto& ch : chapters) {
        ch.displayInfo();
    }
}
string Book::getTitle() {
    return title;
}
Author Book::getAuthor() {
    return author;
}
int Book::getChapterNumber() {
    return chapters.size();
}
vector<Chapter> Book::getChapters() {
    return chapters;
}