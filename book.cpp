#include <iostream>
#include "book.h"


    Book::Book()
    :title(""),author(Author("","")),publicationYear(0){}
    Book::Book(string bookTitle,Author bookAuthor,int year,const vector<Chapter> &bookChapters)
    :title(bookTitle),author(bookAuthor),publicationYear(year),chapters(bookChapters){}
    void Book::addChapter(const Chapter &chapter){
        chapters.push_back(chapter);
    }
    void Book::displayInfo(){

    }
    string Book::getTitle(){
        return title;
    }
    Author Book::getAuthor(){
        return author;
    }
    int Book::getPublicationYear(){
        return publicationYear;
    }
    vector<Chapter> &Book::getChapters(){
        return chapters;
    }