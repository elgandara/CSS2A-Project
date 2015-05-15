#ifndef COHORTFEUD_H_INCLUDED
#define COHORTFEUD_H_INCLUDED

//**********************************************************************
// Class Name: CohortFeud
//
// Description: Creates a game just like the Family Feud Game show.
//  The game consists of face off rounds, and a speed round. A point total
//  is kept for the user to see at the end.
//
//**********************************************************************

#include "FaceOff.h"
#include "SpeedRound.h"
#include <string>
using namespace std;

class CohortFeud
{
    private:
        FaceOff faceoff;
        SpeedRound speedround;
        string username;            // Will hold value for the user's name
        int overallScore;           // Holds the value of points obtained during the game

    public:
    // Constructor
        //**********************************************************************
        CohortFeud();
        // Summary: Initializes username to an empty string, and overallScore to
        //  zero.
        //
        //**********************************************************************

    // Member functions
        //**********************************************************************
        void runGame();
        // Summary: Asks for the user's name, then begins game. Will run a
        //  faceoff round 3 times, and a speed round once. The points obtained
        //  through out the game is outputted.
        //
        //**********************************************************************

        //**********************************************************************
        void newGame();
        // Summary: Will re-initialize the game, username set to an empty string,
        //  and overall score is set to zero.
        //
        //**********************************************************************

};

#endif // COHORTFEUD_H_INCLUDED
