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
        string question;
        string answers[10][4];
        int past_questions[8];

    public:
        // Constructors
        Question();

        // Accessor methods
        string getQuestion() const {return question;}
        string getAnswers() const {return answers[][4];}

        // Class methods
        void createNewQuestion();
        int checkAnswers(string answer);
        int getScore(int row);




};

#endif // QUESTION_H_INCLUDED
