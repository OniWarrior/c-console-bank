/*
 * author: stephen aranda
 * date  : 12/31/2022
 * file  : main_menu.h
 * desc  : header for main menu function that prints main menu on screen
*/

#include "stdio.h"
#include "create_account.h"
#include "view_account.h"
#include "delete_account.h"
#include "say_goodbye.h"

#ifndef _MAIN_MENU_
#define _MAIN_MENU_

// Print title
void printTitle(){
    printf_s("*****************Welcome to Console Bank App******************\n\n");
}

// Print the main menu on screen.
void printMainMenu(){
   printf_s("1. create account\n");
   printf_s("2. view account\n");
   printf_s("3. delete account\n");
   printf_s("4. exit bank app\n\n");
}

// handles the input for the main menu -- i.e user presses either 1,2,3, or 4 then handle
// what happens next.
void handleMainMenuInput(){
    short int input = 0;

    printf_s("Input: ");
    scanf_s("%d",&input);
    
    handleMainMenuSwitch(input);
}

// helper function for handleMainMenuInput
void handleMainMenuSwitch(int input){
    // send user to create,view,delete,exit after evaluation
    switch(input){
        case 1: createAccount(); break;
        case 2: viewAccount();   break;
        case 3: deleteAccount(); break;
        case 4: sayGoodbye();    break;
        default: printf_s("/nPlease make a valid selection!");
                 printMainMenu();        
    }
}


#endif