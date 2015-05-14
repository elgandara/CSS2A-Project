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
     question.createNewQuestion();
     answer = "";
     chances = 0;
     playerScore  = 0;
     for(int i = 0; i < 8; i++)
     {
         ifCorrect[i] = false;
     }

    answers
    //question.getanswers as a parameter
    // to initialize all the answers

    //To initialize all the point values
    {
        for (int i = 0; i < 8;i++)
            int score[i]
    }
     //Will call the void getAnswers(answers) method and set the answers for the array
}
//*************************************************
//Summary:Function will initiate a FaceOff Round.
//PreCondition:
//PostCondition:
//
//*************************************************
void FaceOff::runRound()
{
    int storeAnswer = 0;
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
//***************************************************************
//Summary:Function will display the answers of the FaceOff Round.
//PreCondition:
//PostCondition:
//
//***************************************************************
void FaceOff::display()
{
    cout << "===================================================" << endl;
    for(int i = 0; i < 8; i++)
    {
        cout << answers[i] << endl;
    }

    cout << "====================================================" << endl;
}
