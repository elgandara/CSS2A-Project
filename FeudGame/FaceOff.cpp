//*********************************************************
//Title:Faceoff.cpp
//Description:File will contain the implementation for the
//class called FaceOff
//Date: 5/5/15
//Version: 1
//Compiler: CB 13.12
//*********************************************************
#include "FaceOff.h"
#include "Question.h"
#include <iostream>
//******************************************************
//Summary:Default constructor of the class
//PreCondition: An object of the class must be created.
//PostCondition:The values of the variables will be set.
//
//*******************************************************
FaceOff::FaceOff()
{
     //question.createNewQuestion();
     q = question.getQuestion();
     answer = "";
     chances = 0;
     playerScore  = 0;
     //For loop to set all the elements of the array to False
     for(int i = 0; i < 8; i++)
     {
         ifCorrect[i] = false;
     }

    //To initialize all the answers into the array
    question.getAnswers(answers);

    //Method will set all the values of the score array to 0.
    initializeScoreArray();

    //Method will initialize the actual points to the score array.
    getPoints();
}
//******************************************************
//Summary:Function will initiate a FaceOff Round.
//PreCondition: An object of the class must be created.
//PostCondition: The round will be run.
//
//******************************************************
void FaceOff::runRound()
{

    do
    {
       display();
       getUserInput();
       allTrue();

    }while(!allTrue() && chances < 3);
    displayAll();
    display();

}
//*******************************************************************************
//Summary:Function will display the answers of the FaceOff Round.
//PreCondition: An object of the class must be created.
//The answers array must have valid values.
//The boolean's array must be initialized.
//The score array must have the correct values.
//PostCondition: All of the classes variables will be displayed to the screen.
//
//*******************************************************************************
void FaceOff::display()
{
    cout << "=====================================================================" << endl;
    cout << q;
    cout << endl << endl;
    for(int i = 0; i < 8; i++)
    {   int length = answers[i].length();
        if(answers[i] != "")
        {
            cout << i+1 << ". ";
            if(ifCorrect[i])
            {
                cout << answers[i] << setw(30 - length) << score[i];
            }
            cout << endl;
        }

    }
    cout << endl;
    cout << "Score:" << playerScore << endl;
    cout << "Strikes " << chances << endl;
    cout << "=====================================================================" << endl;
}
//************************************************************************
//Summary:Function will set the values of the score array.
//PreCondition:An object of the class must be created.
//The answers array must be initialized.
//PostCondition: The scores array will have the appropriate score points.
//
//************************************************************************
void FaceOff::getPoints()
{

        //To initialize all the point values
        for (int i = 0; i < 8 && answers[i] != "";i++)
        {
           score[i] = question.getScore(answers[i]);
        }

}
//*************************************************************************
//Summary:Function will set the values of the score array to 0.
//PreCondition: An object of the class must be created.
//PostCondition: All of the elements in the array will be set to 0.
//
//*************************************************************************
void FaceOff::initializeScoreArray()
{
    for (int i = 0; i < 8;i++)
        {
           score[i] = 0;
        }
}
//*************************************************************************
//Summary:Will calculate the score of the player.
//PreCondition: An object of the class must be created. All arrays must be
// initialized.
//PostCondition: The playerscore will be updated with the points
//
//*************************************************************************
void FaceOff::addScore()
{
    playerScore += question.getScore(answer);
}
//***********************************************************************************
//Summary:Function will get user input.
//PreCondition: Question must be displayed. An object of the class must be created.
//PostCondition: The user input will be used to check if it is a valid score. If the user
//input is correct then it will be added to the score.
//
//***********************************************************************************
void FaceOff::getUserInput()
{
    int row = 0;
    cout << "Enter answer: ";
    cin >> answer;
    row = question.checkAnswers(answer);
    if(row != -1)
    {
        ifCorrect[row] = true;
        addScore();
    }
    else
        chances++;
    cout << "Strikes:" << chances << endl;
}
//***********************************************************************************
//Summary:Function will check if all of the answers are true
//PreCondition: An object must be created of the class.
//There must be user input.
//PostCondition: A boolean value will be returned.
//
//***********************************************************************************
bool FaceOff::allTrue()
{
    for(int i = 0; i < 8; i++)
    {
        if( ifCorrect[i] == false)
            return false;
    }

    return true;

}
//*************************************************************************
//Summary: Will set the boolean values of the boolean array to true.
//PreCondition: The chances counter needs to hit 3.
//PostCondition: The values of the array will be true.
//
//*************************************************************************
void FaceOff::displayAll()
{
    for(int i = 0; i < 8; i++)
    {
        ifCorrect[i] = true;
    }
}
//*************************************************************************
//Summary: Will create a new round
//PreCondition:
//PostCondition:
//
//*************************************************************************
void FaceOff::createNewRound()
{
    question.createNewQuestion();
    chances = 0;
    playerScore = 0;
    answer = "";
    question.getAnswers(answers);
}
