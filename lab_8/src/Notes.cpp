#include "../include/Notes.h"
using namespace std;
Note::Note() {};

Note::Note(const string &title) : title(title){};

string Note::getTitle(){
    return title;
}

void Note::setTitle(const string &new_title){
    title = new_title;
}
ListNote::ListNote() {};

ListNote::ListNote(const string &title) : Note (title) {};

string ListNote::getContent() {
    return content;
}

void ListNote::setContent(const string &content) {
    this->content = content;
}


