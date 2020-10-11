/** 
* @file onlineShoppingCart_operations.h
*Online shopping cart application which allow the user to add items to the cart
*
*/


#include<stdio.h>
#include<string.h>

/**
*  long function which allows the user to browse through various categories
*  shows the cost of each items
*  shows the specifications of each items
*  allows the user to add items to the cart
*  allows the user to delete items from the cart
*/
void onlineShopping();

/**
* take laptop choice as a parameter
* return the cost of selected laptop
*/
int cost_of_laptop(int choice);

/**
*  take book choice as a parameter
*  return the cost of selected book
*/
int cost_of_book(int choice);


/**
* take mobile choice as a parameter
* return the cost of selected mobile
*/
int cost_of_mobile(int choice);

/**
* take camera choice as a parameter
* return the cost of selected camera
*/
int cost_of_camera(int choice);
  /* #define __ONLINESHOPPINGCART_OPERATIONS_H__ */
