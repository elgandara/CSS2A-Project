// *********************************************************
// Filename: QuestionTest.cpp
// Description:
//
// Author: Eliasar Gandara
// Created On:
// Last Modified:
// *********************************************************

#include "Question.h"
#include <iostream>
using namespace std;

int main()
{
    Question question;

    cout << question.getQuestionNumber() << ". ";
    cout << question.getQuestion() << endl;

    cout << endl;
    question.displayAnswers();
    cout << endl;

    cout << "C++: " << question.getScore("C++") << endl;
    cout << "output stream: " << question.getScore("output stream") << endl;

    return 0;
}

