//***************************************************************
// SpeedRound.cpp
// Author: Laura Chavez
// Last Modified: 11 May 2015
// Description: Implements the constructors and member functions
//  in SpeedRound class
//***************************************************************
//

#include "SpeedRound.h"
#include "Question.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;


// TODO: use the 3x6 array to calculate points, and store answers and questions.
SpeedRound::SpeedRound()
{
    //question.createNewQuestion();
    pointTotal = 0;
}
void SpeedRound::newRound()
{
    question.createNewQuestion();
    pointTotal = 0;
}
void SpeedRound::runRound()
{
    string ans;
    for(int i = 0; i < QUESTION_NUM; i++)
    {
        cout << question.getQuestion() << endl;
        getline(cin , ans);
        qap[i][0] = question.getQuestion();
        qap[i][1] = ans;
        getAnswerPoints(i);
        display();
        question.createNewQuestion();
    }
    display();
}
void SpeedRound::getAnswerPoints(int location)
{
    int point;
    point = question.getScore(qap[location][1]);
    pointTotal += point;
    stringstream ss;
    ss << point;

    ss >> qap[location][2];
    //qap[location][2] = to_string(point);
}
void SpeedRound::display()
{
    cout << "\n======================================================\n";
    for(int i = 0; i < QUESTION_NUM; i++)
    {
        int j = i;
        cout << qap[i][0] << endl;
        cout << ++j << " " << setw(10) << left << qap[i][1] << " | " << setw(5) << qap[i][2] << endl;
    }
    cout << "Total Points: " << getPointTotal() << endl;
    cout << "\n======================================================\n";
}