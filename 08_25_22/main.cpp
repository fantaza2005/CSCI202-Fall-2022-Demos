#include <iostream>
#include "book.h"

using namespace std;


int main()
{
    genreType g[1] = {CHILD};
    book mybook("Maurice Sendak", "Where the Wild things are", "Monsters", "Harper & Row", 
    "0-06-025492-0", g, 1);
   /* mybook.author = ;
    mybook.title = ;
    mybook.publisher = ;
    mybook.isbn = ;
    mybook.genres = new genreType[1];
    mybook.genres[0] = CHILD;*/
    
    {
        // print out the information
        cout<<"Author\t";
        cout<<"Title\t";
        cout<<"Subject\t";
        cout<<"Publisher\t";
        cout<<"Isbn\t";
        cout<<"Price1\t";
        cout<<"Price2\t";
        cout<<"Price3\t";
        cout<<"Type\t";
        cout<<endl;
    }
    return 0;
}
