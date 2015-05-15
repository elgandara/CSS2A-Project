//***************************************************************
// CohortFeud.cpp
// Author: Laura Chavez
// Last Modified: 15 May 2015
// Description: Implements CohortFeud constructor , and the
//  member functions runGame() and newGame()
//***************************************************************
//

#include "CohortFeud.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

CohortFeud::CohortFeud()
{
    username = "";
    overallScore = 0;
}
void CohortFeud::runGame()
{
    int rounds = 0;
    cout << "Welcome to Cohort Feud!\n";
    Sleep(2000);
    cout << "Who wants to play?\n Enter your name: \n";
    getline(cin, username);
    while(rounds < 3)
    {
        faceoff.runRound();
        overallScore += faceoff.getPlayerScore();
        faceoff.newRound();
    }
    speedround.runRound();
    overallScore += speedround.getPointTotal();
    cout << "Your overall score was " << overallScore << endl;
}
void CohortFeud::newGame()
{
    username = "";
    overallScore = 0;
}