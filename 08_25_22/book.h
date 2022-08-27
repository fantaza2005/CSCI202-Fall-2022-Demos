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
    book(string author, string title, string subject, string publisher, string isbn, genreType genres[], int numGenres);
    ~book();

private:   
    std::string author;
    std::string title;
    std::string subject;
    std::string publisher;
    std::string isbn;
    genreType * genres;

};
//The syntax used to invok the getter and setter.They donot look like even a function .Getter and setter are crucial as they hide internal implmentation details.

//constructor(author)
{
    this->author=author;
}
//This is the getter method
get Writter()
{
    return this->author;
}
//This is setter method
set Writter(updatedAuthor)
{
    this ->author=updatedAuthor;
}
}
const novel=new Book('anonymous');
console.log(novel.writter);
novel.writer='newAuthor';
console.log(novel.writter);



#endif
