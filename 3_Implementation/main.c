/**
* @file main.c
* @author Prince Prijwal
* @brief Phonebook Registry
* @date 06-09-2021
* @copyright Copyright (c) 2020
* 
*/

#include<stdio.h>
#include<windows.h>
#include"phone_book.h"
void main()
{
    system("cls");
    printf("\t*****PHONE BOOK*****\n");
    printf("\t 1. Add Contact\n");
    printf("\t 2. Search Contact\n");
    printf("\t 3. Delete Contact\n");
    printf("\t 4. View All Contact\n");
    printf("\t 5. Exit\n");
    printf("Enter Your Choice:-");
    int option;
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        add_contact();
        break;
    case 2:
        search_contact();
        break;
    case 3:
        delete_contact();
        break;
    case 4:
        view_all_contact();
        break;
    case 5:
        exit(0);
    default:
        main();
    }
  
}