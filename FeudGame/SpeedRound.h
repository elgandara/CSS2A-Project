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
using namespace std;


class SpeedRound
{
    private:
        static const int QUESTION_NUM = 6;
        Question question;
        //Question questions[QUESTION_NUM];
        //string answers[QUESTION_NUM];
        //int points[QUESTION_NUM];
        string qap[6][3];
        int pointTotal;

    public:
        SpeedRound();
        int getPointTotal()const {return pointTotal;}
        void newRound();
        void runRound();
        void getAnswerPoints(int);
        void display();
};

#endif // SPEEDROUND_H_INCLUDED
