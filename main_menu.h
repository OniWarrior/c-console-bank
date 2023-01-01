/*
 * author: stephen aranda
 * date  : 12/31/2022
 * file  : main_menu.h
 * desc  : header for main menu function that prints main menu on screen
*/

#include "title.h"

#ifndef _MAIN_MENU_
#define _MAIN_MENU_


// Print the main menu on screen.
void printMainMenu(){
   printf_s("1. create account\n");
   printf_s("2. view account\n");
   printf_s("3. delete account\n");
   printf_s("4. exit bank app\n");
}

// handles the input for the main menu -- i.e user presses either 1,2,3, or 4 then handle
// what happens next.
void handleMainMenuInput(){
    short int input = 0;

}


#endif