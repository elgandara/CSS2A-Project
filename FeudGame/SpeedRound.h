#ifndef SPEEDROUND_H_INCLUDED
#define SPEEDROUND_H_INCLUDED

//**********************************************************************
// Class Name: SpeedRound
//
// Description: Creates a round that consists of 6 different questions
//
//
//**********************************************************************

#include "Question.h"
#include <string>
using namespace std;

class SpeedRound
{
    private:
        static const int QUESTION_NUM = 6;      // Const that holds value of number of questions that will be asked
        Question question;                      // Question object, that will get info of question.
        string qap[QUESTION_NUM][3];            // qap(question)(answer)(points) stores the question in 1st column,
                                                //  answer to question in 2nd column, and points according to answer in 3rd column
        int pointTotal;                         // Used to hold value of the total number of points earned in game.

    public:
    // Constructor
        //**********************************************************************
        SpeedRound();
        // Summary: Point total is initialized to zero.All values in 2D string
        //   array are initialized to empty strings.
        //
        //**********************************************************************

    // Accesor functions
        //**********************************************************************
        int getPointTotal()const {return pointTotal;}
        // Summary: Returns the value in pointTotal
        // Postcondition: pointTotal is returned.
        //
        //**********************************************************************

    // Member functions
        //**********************************************************************
        void runRound();
        // Summary: Will ask 6 different questions one directly after another,
        //  retrieve an answer, and retrieve the points for each answer.
        //
        //**********************************************************************

        //**********************************************************************
        void getPoints(int);
        // Summary: Will get the points, according to the answer that has been
        //  entered. The value passed in holds the location or question number
        //  so that the points can be added to the correct place in the array.
        //
        //**********************************************************************

        //**********************************************************************
        void display();
        // Summary: Displays the question, followed by question number,
        //  answer and the points of that answer. At the end the value in
        //  pointTotal is displayed.
        //
        //**********************************************************************

        //**********************************************************************
        void newRound();
        // Summary: Will reinitialize pointTotal to zero. As well as creates a
        //  new question for Question object, "question". All values in 2D string
        //  array are initialized to empty strings.
        //
        //**********************************************************************

};

#endif // SPEEDROUND_H_INCLUDED
