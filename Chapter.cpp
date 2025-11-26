#include "Chapter.h"

Chapter::Chapter()
    : title(""), author(Author("", "")), chapterNumber(0) {
}
Chapter::Chapter(string chapterTitle, Author chapterAuthor, int number)
    : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {
}
Chapter::Chapter(Chapter& other)
    : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {
}
void Chapter::displayInfo() {
    cout << "Rozdzial " << chapterNumber << ": " << title << " autorstwa " << author.toString() << endl;
}
string Chapter::getTitle() {
    return title;
}
Author Chapter::getAuthor() {
    return author;
}
int Chapter::getChapterNumber() {
    return chapterNumber;
}