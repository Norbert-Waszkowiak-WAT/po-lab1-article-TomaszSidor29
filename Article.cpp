#include "Article.h"

Article::Article()
    : title(""), author(Author("", "")), publicationYear(0), journal("") {
}
Article::Article(string articleTitle, Author articleAuthor, int year, string journalName)
    : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {
}
Article::Article(Article& other)
    : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {
}
void Article::displayInfo() {
    cout << "Tytuł: " << title << " autorstwa " << author.toString() << " (" << publicationYear << "), Artykuł: " << journal << endl;
}
string Article::getTitle() {
    return title;
}
Author Article::getAuthor() {
    return author;
}
int Article::getPublicationYear() {
    return publicationYear;
}
string Article::getJournal() {
    return journal;
}