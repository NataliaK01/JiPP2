#ifndef JIPP_NOTES_H
#define JIPP_NOTES_H
#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Note{
protected:
    string title;
public:
    Note();
    Note(const string &title);
    string getTitle();
    void setTitle(const string &title);
    virtual string getContent() = 0;
    virtual void setContent(const string &content) = 0;
};

class ListNote: public Note {
protected:
    string content;
public:
    ListNote();

    ListNote(const string &title);

    string getContent() override;

    void setContent(const string &content) override;
}
#endif //JIPP_NOTES_H
