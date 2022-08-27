#ifndef BOOK_H
#define BOOK_H
#include <string>

using std::string;

enum genreType {NONFICTION, FICTION, SCIFI, FANTASY, CHILD, BIO, AUTOBIO, HORROR, HISTORICAL};

const std::string genreStr[9] = {"Non-Fiction", "Fiction", 
"Science Fiction", "Fantasy", "Children's Picture Book", "Biography", "Autobiography", "Horror", 
"Historical"};
const genreType genreInt[] = {NONFICTION, FICTION, SCIFI, FANTASY, CHILD, BIO, AUTOBIO, HORROR, HISTORICAL};

class book
{
public:
    book(string, string, string, string, string, genreType[], int);
    ~book();

private:   
    std::string author;
    std::string title;
    std::string subject;
    std::string publisher;
    std::string isbn;
    genreType * genres;

};
//getters -method
string Book::getAuthor() 
{
    return this->author;
}
string Book::getTitle()
{
    return this->title;
}
string Book::getSubject()
{
   return this->subject;
}
string Book::getPublisher()
{
    return this->publisher;
}
string Book::getIsbn()
{
    return this->isbn;
}
genreType Book::getGenreType()
{
    return this->genreType;
}
const int *Book::getPrice()
{
    return this->price;
}


//setter - method
void Book::setAuthor(string Author)
{
    this->bookAuthor=author;
}
void Book::setTitle(string Title)
{
    this->bookTitle=title;
}
void Book::setSubject(string Sunject)
{
    this->bookSubject=subject;
}
void Book::setPublisher(string Publisher)
{
    this->bookPublisher=publisher;
}
void Book::setIsbn(string Isbn)
{
    this->bookIsbn=isbn;
}
void Book::setGenres(string Genres)
{
    this->bookGenres=genres;
}
// Set the price individually in a loop
void Book::setPrices(const int price[])
{
    for (int i=0;i < priceArraySize;i++)
    this->prices[i]=price[i];
}
// Do not create a new array for this
void Book::setGenreType(GenreType genreType)
{
    this->genreType-genreType;
}

    
    
    
    
    
    
    
    
    67

#endif
