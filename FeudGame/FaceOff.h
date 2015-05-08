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
    int tries = 0;
    int player1Score = 0;
    int player2Score = 0;

public:
    //Default Constructor
    FaceOff();

    //Creating the object for question.
    Question question = new Question();

    //Using the members of class
    question->createNewQuestion();


};
#endif // FACEOFF_H_INCLUDED
