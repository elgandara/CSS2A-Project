#ifndef QUESTION_H_INCLUDED
#define QUESTION_H_INCLUDED

// *********************************************************
// Class: Question
// Description:
//
// *********************************************************

#include <string>
using namespace std;

class Question
{
    protected:
        int question_number;
        string question;
        string answers[8][4];
        int past_questions[8];
        string file_name;

    public:
        // Constructors
        Question();

        // Accessor methods
        string getQuestion() const {return question;}
        int getQuestionNumber() const {return question_number;}
        string getFileName() const {return file_name;}

        // Class methods
        void createNewQuestion();
        int checkAnswers(string answer);
        int getScore(string answer);
        int stringToInt(string str);
        void displayAnswers();
        string tolowercase(string word);
};

#endif // QUESTION_H_INCLUDED
