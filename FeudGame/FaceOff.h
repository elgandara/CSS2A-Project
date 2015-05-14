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
class FaceOff
{
protected:
    int chances = 0;
    int playerScore = 0;
    string answers[8];

public:
    //Default Constructor
    FaceOff();

    int getPoints();
    void runRound();
    void display();

    //Creating the object for question.
    //Question question = new Question();

    //Using the members of class
    //question->createNewQuestion();


};
#endif // FACEOFF_H_INCLUDED
