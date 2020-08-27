#include <iostream>
using namespace std;

/*
Grading Program

Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/

int studentscore;
string nextScoreResponse;

void printIntroduction() 
{
    cout << "Welcome to the Grading Program 9000" << endl;
    cout << "This program will translate a numerical score into a letter grade." << endl;
}

void ClearScreen()
{
cout << string( 100, '\n' );
}

void scoreInput() 
{
    cout << "Please input the student\"s score, followed by the enter key: " << endl;
    cin >> studentscore;
    ClearScreen();
}

void scoreTranslator()
{
    int challengeResponse;
    if (studentscore >= 0 and studentscore <= 59)
    {
        cout << "A score of " << studentscore << " yields a letter grade of F" << endl;
        cout << "The student might want to study and try again" << endl;
        cout << "Input another score? Y or N: " << endl;
        cin >> nextScoreResponse;
        if (nextScoreResponse == "Y")
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
            ClearScreen();
            cout << "Thank you for using the Grading Program 9000! Have a great day!" << endl;
        }
    }

    else if (studentscore >= 60 and studentscore <= 69)
    {
        cout << "A score of " << studentscore << " yields a letter grade of D." << endl;
        cout << "The student might want to study and try again" << endl;
        cout << "Input another score? Y or N: " << endl;
        cin >> nextScoreResponse;
        if (nextScoreResponse == "Y")
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
            ClearScreen();
            cout << "Thank you for using the Grading Program 9000! Have a great day!" << endl;
        }
    }

    else if (studentscore >= 70 and studentscore <= 79)
    {
        cout << "A score of " << studentscore << " yields a letter grade of C" << endl;
        cout << "The student passed, but could improve more." << endl;
        cout << "Input another score? Y or N: " << endl;
        cin >> nextScoreResponse;
        if (nextScoreResponse == "Y")
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
            ClearScreen();
            cout << "Thank you for using the Grading Program 9000! Have a great day!" << endl;
        }
    }

    else if (studentscore >= 80 and studentscore <= 89)
    {
        cout << "A score of " << studentscore << " yields a letter grade of B" << endl;
        cout << "This student passed, and has a little room for improvement" << endl;
        cout << "Input another score? Y or N: " << endl;
        cin >> nextScoreResponse;
        if (nextScoreResponse == "Y")
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
            ClearScreen();
            cout << "Thank you for using the Grading Program 9000! Have a great day!" << endl;
        }
    }

    else if (studentscore >= 90 and studentscore <= 99)
    {
        cout << "A score of " << studentscore << " yields a letter grade of A" << endl;
        cout << "This student passed with an excellent score!" << endl;
        cout << "Input another score? Y or N: " << endl;
        cin >> nextScoreResponse;
        if (nextScoreResponse == "Y")
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
            ClearScreen();
            cout << "Thank you for using the Grading Program 9000! Have a great day!" << endl;
        }
    }

    else if (studentscore == 100)
    {
        cout << "A score of " << studentscore << " yields a letter grade of A" << endl;
        cout << "This student got a perfect score! Fantastic!" << endl;
        cout << "Input another score? Y or N: " << endl;
        cin >> nextScoreResponse;
        if (nextScoreResponse == "Y")
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
            ClearScreen();
            cout << "Thank you for using the Grading Program 9000! Have a great day!" << endl;
        }
    }

    else
    {
        cout << "ERROR! INVALID INPUT" << endl;
        cout << "Press \"1\" to continue: " << endl;
        cin >> challengeResponse;
        if (challengeResponse == 1)
        {
            ClearScreen();
            scoreInput();
            scoreTranslator();
        }
        else
        {
           cout << "FATAL ERROR!" << endl;
        }   
    }   
}

int main()
{
    printIntroduction();
    scoreInput();
    scoreTranslator();
}