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

     //Will call the void getAnswers(answers) method and set the answers for the array
}
//******************************************************
//Summary:Function will initiate a FaceOff Round.
//PreCondition: An object of the class must be created.
//PostCondition:
//
//******************************************************
void FaceOff::runRound()
{
    int storeAnswer;
    cout << question.getQuestionNumber() << ")";
    cout << question.getQuestion() << endl;
    do
    {
        cin >> answer;
        question.getScore(answer);
        if (storeAnswer == 0)
            chances++;
            cout << chances << endl;

    }while(chances < 3);

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
//PostCondition:
//
//***********************************************************************************
void FaceOff::getUserInput()
{
    cout << "Enter answer: ";
    cin >> answer;
    question.getScore(answer);
}
