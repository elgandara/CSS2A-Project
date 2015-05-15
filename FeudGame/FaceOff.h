#ifndef FACEOFF_H_INCLUDED
#define FACEOFF_H_INCLUDED

//***********************************************************
//Class:FaceOff.h
//Description:This file will contain the variables and methods
// for the class FaceOff.
//
//***********************************************************
#include <iostream>
#include "Question.h"
#include <string>
#include <iomanip>
class FaceOff
{
protected:
    Question question;
    string answer;
    int storeAnswer;
    int chances;
    int playerScore;
    bool ifCorrect[8];
    string answers[8];
    int score[8];
    string q;

public:
    //Default Constructor
    FaceOff();

    //Accessor method to retrieve a question.
    string getQ() const {return q;}

    void getPoints();
    void getUserInput();
    void initializeScoreArray();
    void runRound();
    void addScore();
    void display();

};
#endif // FACEOFF_H_INCLUDED
