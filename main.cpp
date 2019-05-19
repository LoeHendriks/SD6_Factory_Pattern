#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Product/IFactory.h"
#include "Product/Smurf.h"
#include "Product/Minion.h"
#include "Product/Smurf.h"
#include "Product/SmurfPie.h"
#include "Product/MinionHouse.h"
#include "Product/SmurfHouse.h"
#include "Product/MinionFactory.h"
#include "Product/SmurfFactory.h"
#include "Product/GenericGame.h"


bool running = true;
bool correctOption = false;

int main()
{
    while(running)
    {
        uint32_t var = 0;

        std::cout << "|-------------------------------------|" << std::endl;
        std::cout << "|Minion game                          |" << std::endl;
        std::cout << "|SD6 Loe Hendriks & Stefan Vogelaar   |" << std::endl;
        std::cout << "|Menu                                 |" << std::endl;
        std::cout << "|(1) Smurfs                           |" << std::endl;
        std::cout << "|(2) Minions                          |" << std::endl;
        std::cout << "|(3) End Program                      |" << std::endl;
        std::cout << "|-------------------------------------|" << std::endl;
        
        IFactory* factory;

        std::cin >> var;
    

        switch(var)
        {

            case 1:
            {
                factory = new SmurfFactory();
                correctOption = true;
                break;
            } 
            case 2:
            {
                factory = new MinionFactory();
                correctOption = true;
                break;
            }
            case 3:
            {
                std::cout << "Ending program" << std::endl;
                running = false;
                break;
            }
            default:
                std::cout << "Error: Unknown Option, pick an option from the list" << std::endl;
                break;
        };

        if(correctOption)
        {
            std::cout << "Starting " << factory->ReturnFactoryName() << " Game" << std::endl;
            std::cout << std::endl;
            GenericGame game = GenericGame();
            game.Run(factory);
            running = false;
        }
    }
}