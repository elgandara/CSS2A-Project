//***************************************************************
// SpeedRound.cpp
// Author: Laura Chavez
// Last Modified: 15 May 2015
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
#include <cstdlib>
using namespace std;

// Constructor
SpeedRound::SpeedRound()
{
    pointTotal = 0;
    for(int i = 0; i < QUESTION_NUM; i++)
    {
        qap[i][0] = "";
        qap[i][1] = "";
        qap[i][2] = "";
    }
}

// Member functions
void SpeedRound::runRound()
{
    string ans;
    for(int i = 0; i < QUESTION_NUM; i++)
    {
        cout << question.getQuestion() << endl;
        getline(cin , ans);
        qap[i][0] = question.getQuestion();
        qap[i][1] = ans;
        getPoints(i);
        question.createNewQuestion();
    }
    display();
}
void SpeedRound::getPoints(int location)
{
    int point;
    point = question.getScore(qap[location][1]);
    pointTotal += point;
    stringstream ss;            // Will create a string stream to convert int to string
    ss << point;                // Add int to stream
    ss >> qap[location][2];     // Input string into the corresponding location in points column
}
void SpeedRound::display()
{
    system("cls");
    cout << "=====================================================================\n";
    for(int i = 0; i < QUESTION_NUM; i++)
    {
        int j = i;
        cout << qap[i][0] << endl;
        cout << ++j << " " << setw(17) << left << qap[i][1] << " | " << setw(5) << qap[i][2] << endl;
    }
    cout << "=====================================================================\n";
    cout << "Total Points: " << getPointTotal() << endl;
}
void SpeedRound::newRound()
{
    question.createNewQuestion();
    pointTotal = 0;
    for(int i = 0; i < QUESTION_NUM; i++)
    {
        qap[i][0] = "";
        qap[i][1] = "";
        qap[i][2] = "";
    }
}