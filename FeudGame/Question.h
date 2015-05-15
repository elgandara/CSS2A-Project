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
    private:
        string tolowercase(string word);

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
        void getAnswers(string arr[]);

        // Class methods
        void createNewQuestion();
        int getScore(string answer);
        int stringToInt(string str);
        void displayAnswers();
        void displayQuestions();
        int checkAnswers(string answer);
};

#endif // QUESTION_H_INCLUDED
