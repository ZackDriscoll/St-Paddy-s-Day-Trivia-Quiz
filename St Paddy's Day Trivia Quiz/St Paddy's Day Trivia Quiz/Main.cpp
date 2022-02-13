#include <iostream>
#include <string>


//Prototype Functions here
void Intro();
void History();
void Trivia();
void Ending();

//Create variable to keep track of the user's score
int score = 0;

//Create variable to hold the user's input
std::string userInput;

int main()
{
    //Run the Intro function
    Intro();

    return 0;
}

//Intro function
void Intro()
{
    //Display title and intro explanation
    std::cout << "\n\n\t **** Welcome to the St. Patrick's Day Trivia Quiz! ****\n\n";
    std::cout << "Before we get to the quiz, here is a brief synopsis of the origins of St. Patrick's Day.\n";

    //Run the History Function
    History();
}

//History function
void History()
{
    std::cout << "\nSt. Patrick's Day is a day to celebrate the patron saint of Ireland, who is credited for bringing Christianity to Ireland.\n";
    std::cout << "\nInitially enslaved in Ireland, Patrick eventually escaped his captors but in the year 432 A.D. he returned to Ireland to spread the word of God.\n";
    std::cout << "\nFrom then until his death on March 17th, 461, Patrick had established many churches, monasteries, and schools.\n";
    std::cout << "\nThere are also many legends that formed around St. Patrick. Some of which included one where he drove the snakes out of Ireland and used the shamrock to explain the Holy Trinity.\n\n";

    //Have the program pause before starting the quiz
    system("pause");

    //Run the Trivia Quiz function
    Trivia();

}

//Trivia Quiz function
void Trivia()
{
    //Begin questions with exceptions
    try
    {
        //Question #1
        std::cout << "\n\nQuestion #1: Where was St. Patrick born?\n";
        std::cout << "1.) Ireland\n";
        std::cout << "2.) America\n";
        std::cout << "3.) Norway\n";
        std::cout << "4.) England\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "4")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. St. Patrick was born in England.\n";

        system("pause");
    }

    try
    {
        //Question #2
        std::cout << "\nQuestion #2: Green hasn't always been associated with Saint Patrick's Day. That actually didn't happen until when?\n";
        std::cout << "1.) 461\n";
        std::cout << "2.) 582\n";
        std::cout << "3.) 1798\n";
        std::cout << "4.) 1972\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "3")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Green became associated with St. Patrick's Day in 1798.\n";

        system("pause");
    }

    try
    {
        //Question #3
        std::cout << "\nQuestion #3: What is the correct spelling of the nickname for St. Patrick's Day?\n";
        std::cout << "1.) St. Patty's Day\n";
        std::cout << "2.) St. Paddy's Day\n";
        std::cout << "3.) St. Patdy's Day\n";
        std::cout << "4.) St. Pattie's Day\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "2")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. The correct spelling of St. Patrick's Day's nickname is St. Paddy's Day.\n";

        system("pause");
    }

    try
    {
        //Question #4
        std::cout << "\nQuestion #4: What mythological being is a part of St. Patrick's Day lore and Irish culture?\n";
        std::cout << "1.) Banshees\n";
        std::cout << "2.) Kelpie\n";
        std::cout << "3.) Fear Gorta\n";
        std::cout << "4.) Leprechauns\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "4")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. The mythological creature most associated with Ireland and St. Patrick's Day is the Leprechaun.";

        system("pause");
    }

    try
    {
        //Question #5
        std::cout << "\nQuestion #5: Even though it's a big drinking day now, St. Paddy's Day used to be a dry holiday up until what decade?\n";
        std::cout << "1.) 1960s\n";
        std::cout << "2.) 1970s\n";
        std::cout << "3.) 1980s\n";
        std::cout << "4.) 1990s\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == "2")
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }

        system("pause");
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. St. Paddy's Day was a dry holiday until the 1970s.\n";

        system("pause");
    }

    //Run Ending function
    Ending();
}


//End Game function
void Ending()
{
    std::cout << "\nYou've answered all the questions! You're final score is " << score << " / 5!\n\n";
    std::cout << "\n\t\t*** Thanks for Playing! *** \n\n";
}