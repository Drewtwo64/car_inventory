//This program takes two customers names and takes orders from the customers as long as they input a quantity lower than the inventory for the car they want.
//It calculates the transactions using simple multiplication, subtraction, and addition.
//It gives the customers receipts telling them what they ordered, how much of what they ordered, and how much everything is.
//CS 102-03: Car Inventory and Checkout System
//Author: Drew Cameron Wates
//Last updated: 11/27/2018
#include <stdio.h>
#include <string.h>
int main(void)
{
int currentPrice = 0; //Variables for the program
char quit; //Variable used for when the customer is ready to end the transaction.
char name[20]; //String variables
char name1[20];
int carTotal[5];
int carTotal2[5];
int choice; //Integer used for the switch statements
int carQuantity[5];
int carQuantity2[5];
int price = 0;
int price2 = 0;
//Now we have the arrays of the program. There are two sets. One for each customer. These are for the first one.
int carPrices[5] = { 24000, 28000, 25000, 20000, 120000 }; //The prices for the cars
int carInventory[5] = { 5, 2, 3, 8, 2 }; //Arrays representing the amounts of each car available.
carTotal[0] = 0; //Arrays representing the total amount of money after multiplying the inputted quantity and price of the car the customer wants.
carTotal[1] = 0;
carTotal[2] = 0;
carTotal[3] = 0;
carTotal[4] = 0;
carQuantity[0] = 0; //Arrays representing the quantity the customer can input.
carQuantity[1] = 0;
carQuantity[2] = 0;
carQuantity[3] = 0;
carQuantity[4] = 0;
int carInventory2[5] = { 5, 2, 3, 8, 2 }; //Arrays for the 2nd customer.
carTotal2[0] = 0;
carTotal2[1] = 0;
carTotal2[2] = 0;
carTotal2[3] = 0;
carTotal2[4] = 0;
carQuantity2[0] = 0;
carQuantity2[1] = 0;
carQuantity2[2] = 0;
carQuantity2[3] = 0;
carQuantity2[4] = 0;
char str1[20]; //The customer puts in their name, and the program stores it.
printf("Can we get a name for your order?\n");
fgets(str1, 20, stdin);
printf("Hello, %s\n", str1); //The program greets the customer after this is done.
while (1)
{
//This is the car selection that appears for the customer when they input their name.
printf("Here is our current selection, as well as the prices of cars we have available.\n");
printf("1. Toyota Camry - $%d Cars Remaining - %d\n",
carPrices[0], carInventory[0]);
printf("2. Honda CRV - $%d Cars Remaining - %d\n",
carPrices[1], carInventory[1]);
printf("3. Honda Accord - $%d Cars Remaining - %d\n",
carPrices[2], carInventory[2]);
printf("4. Hyundai Elantra - $%d Cars Remaining - %d\n",
carPrices[3], carInventory[3]);
printf("5. Audi r8 - $%d Cars Remaining - %d\n",
carPrices[4], carInventory[4]);
printf("Enter any key number 1-5 that corresponds with the car you want. Example: Inputting 2 gives you the Honda CRV.\n");
printf("Choose a car now.\n");
scanf("%d", &choice);
switch (choice) //Switch statements depending on what the customer wants.
{
case 1: printf("How many Toyota Camrys would you like to buy?\n"); //Statement for when the customer wants a Toyota Camry.
scanf("%d", &carQuantity[0]);
if (carQuantity[0] <= carInventory[0])
//Amount of cars the customer wants must be less than the inventory number in order for the customer to have it.
{
carTotal[0] = carQuantity[0] *
carPrices[0]; //Once the customer puts in a smaller number than the inventory number, the program uses these formulas.
carInventory[0] = (carInventory[0] -
carQuantity[0]); //This updates the inventory.
price = (carQuantity[0] * carPrices[0]
+ price); //Formula used to give the total cost of the amount of cars the customer wants
printf("Wonderful! That's $%d.\n",
price); //The program tells the customer how much they owe the program so far.
}
else //This is what happens when the car quantity is larger than the inventory number.
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 2: printf("How many Honda CRVs would you like to buy?\n"); //Statement for when the customer wants a Honda CRV.
scanf("%d", &carQuantity[1]);
if (carQuantity[1] <= carInventory[1])
{
carTotal[1] = carQuantity[1] *
carPrices[1];
carInventory[1] = (carInventory[1] -
carQuantity[1]);
price = (carQuantity[1] * carPrices[1]
+ price);
printf("Wonderful! That's $%d.\n",
price);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 3: printf("How many Honda Accords would you like to buy?\n"); //Statement for when the customer wants a Honda Accord.
scanf("%d", &carQuantity[2]);
if (carQuantity[2] <= carInventory[2])
{
carTotal[2] = carQuantity[2] *
carPrices[2];
carInventory[2] = (carInventory[2] -
carQuantity[2]);
price = (carQuantity[2] * carPrices[2]
+ price);
printf("Wonderful! That's $%d.\n",
price);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 4: printf("How many Hyundai Elantras would you like to buy?\n"); //Statement for when the customer wants a Hyundai Elantra.
scanf("%d", &carQuantity[3]);
if (carInventory[3] >= carQuantity[3])
{
carTotal[3] = carQuantity[3] *
carPrices[3];
carInventory[3] = (carInventory[3] -
carQuantity[3]);
price = (carQuantity[3] * carPrices[3]
+ price);
printf("Wonderful! That's $%d.\n",
price);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 5: printf("How many Audi r8s would you like to buy?\n"); //Statement for when the customer wants a Audi R8.
scanf("%d", &carQuantity[4]);
if (carQuantity[4] <= carInventory[4])
{
carTotal[4] = carQuantity[4] *
carPrices[4];
carInventory[4] = (carInventory[4] -
carQuantity[4]);
price = (carQuantity[4] * carPrices[4]
+ price);
printf("Wonderful! That's $%d.\n",
price);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
}
printf("Do you want to quit? \n Press 0 to quit.\n Press enter to continue your transaction.\n"); //After each transaction is completed or the program tells the customer they are out of a certain item, the customer is asked if they want to buy something else.
getchar();
scanf("%c", &quit);
if (quit == '0') //If the customer inputs enter, the while loop continues. If the customer is done shopping, they input 0.
{
//If the customer inputs 0, they are given their receipt.
printf("Thank you!\n");
printf("Here is your bill.\n");
printf("Name: %s\n", str1); //Their name.
//This is their receipt. Even if a car was never purchased, it will still be on the receipt. It will just show a quantity of 0.
//Even numbers larger than inventory are inputted, but the price is not calculated at that point.
printf("Toyota Camry: %d Quantity: %d\n", carTotal[0], carQuantity[0]);
printf("Honda CRV: %d Quantity: %d\n", carTotal[1], carQuantity[1]);
printf("Honda Accord: %d Quantity: %d\n", carTotal[2], carQuantity[2]);
printf("Hyundai Elantra: %d Quantity: %d\n", carTotal[3], carQuantity[3]);
printf("Audi r8: %d Quantity: %d\n\n", carTotal[4], carQuantity[4]);
printf("The total price is: %d.\n", price);
printf("Thank you for shopping with us!\n\n");
break;
}
}
char str2[20]; //After the first customer is done, the second customer can input their name. The code below is near identical to the code above.
printf("Can we get a name for your order?\n");
scanf("%c", &name1);
fgets(str2, 20, stdin);
printf("Hello, %s\n", str2);
while (2)
{
//The inventory is back to the way that it was shown when the first customer inputted their name.
//It was honestly kinda tempting to raise the pricesfor the second customer just to be mean.
//Obviously, I did not do that. Everything from here on out is identical to the code above, but with different array names for the second customer.
printf("Here is our current selection, as well as the prices of cars we have available.\n");
printf("1. Toyota Camry - $%d Cars Remaining - %d\n",
carPrices[0], carInventory2[0]);
printf("2. Honda CRV - $%d Cars Remaining - %d\n",
carPrices[1], carInventory2[1]);
printf("3. Honda Accord - $%d Cars Remaining - %d\n",
carPrices[2], carInventory2[2]);
printf("4. Hyundai Elantra - $%d Cars Remaining - %d\n",
carPrices[3], carInventory2[3]);
printf("5. Audi r8 - $%d Cars Remaining - %d\n",
carPrices[4], carInventory2[4]);
printf("Enter any key number 1-5 that corresponds with the car you want. Example: Inputting 2 gives you the Honda CRV.\n");
printf("Choose a car now.\n");
scanf("%d", &choice);
switch (choice)
{
case 1: printf("How many Toyota Camrys would you like to buy?\n");
scanf("%d", &carQuantity2[0]);
if (carQuantity2[0] <= carInventory2[0])
{
carTotal2[0] = carQuantity2[0] *
carPrices[0];
carInventory2[0] = (carInventory2[0] -
carQuantity2[0]);
price2 = (carQuantity2[0] *
carPrices[0] + price2);
printf("Wonderful! That's $%d.\n",
price2);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 2: printf("How many Honda CRVs would you like to buy?\n");
scanf("%d", &carQuantity2[1]);
if (carQuantity2[1] <= carInventory2[1])
{
carTotal2[1] = carQuantity2[1] *
carPrices[1];
carInventory2[1] = (carInventory2[1] -
carQuantity2[1]);
price2 = (carQuantity2[1] *
carPrices[1] + price2);
printf("Wonderful! That's $%d.\n",
price2);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 3: printf("How many Honda Accords would you like to buy?\n");
scanf("%d", &carQuantity2[2]);
if (carQuantity2[2] <= carInventory2[2])
{
carTotal2[2] = carQuantity2[2] *
carPrices[2];
carInventory2[2] = (carInventory2[2] -
carQuantity2[2]);
price2 = (carQuantity2[2] *
carPrices[2] + price2);
printf("Wonderful! That's $%d.\n",
price2);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 4: printf("How many Hyundai Elantras would you like to buy?\n");
scanf("%d", &carQuantity2[3]);
if (carInventory2[3] >= carQuantity2[3])
{
carTotal2[3] = carQuantity2[3] *
carPrices[3];
carInventory2[3] = (carInventory2[3] -
carQuantity2[3]);
price2 = (carQuantity2[3] *
carPrices[3] + price2);
printf("Wonderful! That's $%d.\n",
price2);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
case 5: printf("How many Audi r8s would you like to buy?\n");
scanf("%d", &carQuantity2[4]);
if (carQuantity2[4] <= carInventory2[4])
{
carTotal2[4] = carQuantity2[4] *
carPrices[4];
carInventory2[4] = (carInventory2[4] -
carQuantity2[4]);
price2 = (carQuantity2[4] *
carPrices[4] + price2);
printf("Wonderful! That's $%d.\n", price2);
}
else
{
printf("We're terribly sorry. We don't have that many of that car.\n");
}
break;
}
printf("Do you want to quit? \n Press 0 to quit.\n Press enter to continue your transaction.\n");
getchar();
scanf("%c", &quit);
if (quit == '0')
{
printf("Thank you!\n");
printf("Here is your bill.\n");
printf("Name: %s\n", str2);
printf("Toyota Camry: %d Quantity: %d\n",
carTotal2[0], carQuantity2[0]);
printf("Honda CRV: %d Quantity: %d\n", carTotal2[1], carQuantity2[1]);
printf("Honda Accord: %d Quantity: %d\n", carTotal2[2], carQuantity2[2]);
printf("Hyundai Elantra: %d Quantity: %d\n", carTotal2[3], carQuantity2[3]);
printf("Audi r8: %d Quantity: %d\n\n", carTotal2[4], carQuantity2[4]);
printf("The total price is: %d.\n", price2);
printf("Thank you for shopping with us!\n\n");
break;
}
}
}