#include "Article.h"
#include "Chapter.h"
#include "Author.h"
#include "Book.h"

int main() {
    Author jan("Jan", "Kowalski");
    jan.print();
    Article article("Sample Article", jan, 2023, "Sample Journal");
    article.displayInfo();
    return 0;
}
