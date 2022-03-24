#include<iostream>
#include<string>
using namespace std;

void menu();
void menu2();
void current_bill(string order[], int count, int total);
void remove(string order[], int price[], int& count, int& total);
void view_bill(string order[], int count, int total);


int main()
{
	int total = 0;
	int count = 1;
	string order[30];
	order[0] = "                                 Your Items\n-----------------------------------------------------------------------------";
	int price[30];
	price[0] = 0;
	menu();
	int choice2, choice3, choice5;
	char choice, choice4;
	cin >> choice;
	do
	{
		system("cls");
		switch (choice)
		{
		case 'a':
			cout << "\n                                Pizza  Only\n";

			cout << "-----------------------------------------------------------------------------\n";
			cout << "|                         Please Select Your Pizza                          |\n";
			cout << "| S.No.   Name                              Small   Medium   Large   X Large|\n";
			cout << "| 1)      Chicken Fajita                    399     899      1199    1499   |\n";
			cout << "| 2)      Chicken BBQ                       399     899      1199    1499   |\n";
			cout << "| 3)      Hawaiian                          399     899      1199    1499   |\n";
			cout << "| 4)      Hot and Spicy                     399     899      1199    1499   |\n";
			cout << "| 5)      Mexican Chilli                    399     899      1199    1499   |\n";
			cout << "-----------------------------------------------------------------------------\n";
			cout << "Enter your choice ";
			cin >> choice3;
			if (choice3 == 1)
			{
				cout << "You have selected Chicken Fajita\nPress S for small, M for medium, L for large, X for extra large\n";
				cout << "Please select size : ";
				cin >> choice4;
				switch (choice4)
				{
				case 's':
				case 'S':
					cout << "You have selected Small\n";
					total += 399;
					order[count] = "Small Chicken Fajita Pizza....399";
					price[count] = 399;
					cout << "                    Small chicken fajita added to Cart\n";
					count++;
					break;
				case'm':
				case'M':
					cout << "You have selected Medium\n";
					total += 899;
					order[count] = "Medium Chicken Fajita Pizza....899";
					price[count] = 899;
					cout << "                    Medium chicken fajita added to Cart\n";
					count++;
					break;
				case 'l':
				case 'L':
					cout << "You have selected Large\n";
					total += 1199;
					order[count] = "Large Chicken Fajita Pizza....1199";
					price[count] = 1199;
					cout << "                    Large chicken fajita added to Cart\n";
					count++;
					break;
				case 'x':
				case 'X':
					cout << "You have selected Extra Large\n";
					total += 1499;
					order[count] = "Extra Large Chicken Fajita Pizza....1499";
					price[count] = 1499;
					cout << "                  Extra large chicken fajita added to Cart\n";
					count++;
					break;
				default:
					cout << "                            Invalid selection\n";
				}
			}
			else if (choice3 == 2)
			{
				cout << "You have selected Chicken BBQ\nPress S for small, M for medium, L for large, X for extra large\n";
				cout << "Please select size : ";
				cin >> choice4;
				switch (choice4)
				{
				case 's':
				case 'S':
					cout << "You have selected Small\n";
					total += 399;
					order[count] = "Small Chicken BBQ Pizza....399";
					price[count] = 399;
					cout << "                       Small chicken bbq added to Cart\n";
					count++;
					break;
				case'm':
				case'M':
					cout << "You have selected Medium\n";
					total += 899;
					order[count] = "Medium Chicken BBQ Pizza....899";
					price[count] = 899;
					cout << "                       Medium chicken bbq added to Cart\n";
					count++;
					break;
				case 'l':
				case'L':
					cout << "You have selected Large\n";
					total += 1199;
					order[count] = "Large Chicken BBQ Pizza....1199";
					price[count] = 1199;
					cout << "                      Large chicken bbq added to Cart\n";
					count++;
					break;
				case 'x':
				case 'X':
					cout << "You have selected Extra Large\n";
					total += 1499;
					order[count] = "Extra Large Chicken BBQ Pizza....1499";
					price[count] = 1499;
					cout << "                    Extra large chicken bbq added to Cart\n";
					count++;
					break;
				default:
					cout << "                            Invalid selection\n";
				}
			}
			if (choice3 == 3)
			{
				cout << "You have selected Hawaiian\nPress S for small, M for medium, L for large, X for extra large\n";
				cout << "Please select size : ";
				cin >> choice4;
				switch (choice4)
				{
				case 's':
				case 'S':
					cout << "You have selected Small\n";
					total += 399;
					order[count] = "Small Hawaiian Pizza....399";
					price[count] = 399;
					cout << "                         Small hawaiian added to Cart\n";
					count++;
					break;
				case'm':
				case'M':
					cout << "You have selected Medium\n";
					total += 899;
					order[count] = "Medium Hawaiian Pizza....899";
					price[count] = 899;
					cout << "                        Medium hawaiian added to Cart\n";
					count++;
					break;
				case 'l':
				case'L':
					cout << "You have selected Large\n";
					total += 1199;
					order[count] = "Large Hawaiian Pizza....1199";
					price[count] = 1199;
					cout << "                      Large hawaiian added to Cart\n";
					count++;
					break;
				case 'x':
				case 'X':
					cout << "You have selected Extra Large\n";
					total += 1499;
					order[count] = "Extra Large Hawaiian Pizza....1499";
					price[count] = 1499;
					cout << "                   Extra large hawaiian added to Cart\n";
					count++;
					break;
				default:
					cout << "                            Invalid selection\n";
				}
			}
			if (choice3 == 4)
			{
				cout << "You have selected Hot and Spicy\nPress S for small, M for medium, L for large, X for extra large\n";
				cout << "Please select size : ";
				cin >> choice4;
				switch (choice4)
				{
				case 's':
				case 'S':
					cout << "You have selected Small\n";
					total += 399;
					order[count] = "Small Hot and Spicy Pizza....399";
					price[count] = 399;
					cout << "                       Small hot n spicy added to Cart\n";
					count++;
					break;
				case'm':
				case'M':
					cout << "You have selected Medium\n";
					total += 899;
					order[count] = "Medium Hot and Spicy Pizza....899";
					price[count] = 899;
					cout << "                      Medium hot n spicy added to Cart\n";
					count++;
					break;
				case 'l':
				case'L':
					cout << "You have selected Large\n";
					total += 1199;
					order[count] = "Large Hot and Spicy Pizza....1199";
					price[count] = 1199;
					cout << "                      Large hot n spicy added to Cart\n";

					count++;
					break;
				case 'x':
				case 'X':
					cout << "You have selected Extra Large\n";
					total += 1499;
					order[count] = "Extra Large Hot and Spicy Pizza....1499";
					price[count] = 1499;
					cout << "                    Extra Large hot n spicy added to Cart\n";
					count++;
					break;
				default:
					cout << "                            Invalid selection\n";
				}
			}
			if (choice3 == 5)
			{
				cout << "You have selected Mexican Chilli\nPress S for small, M for medium, L for large, X for extra large\n";
				cout << "Please select size : ";
				cin >> choice4;
				switch (choice4)
				{
				case 's':
				case 'S':
					cout << "You have selected Small\n";
					total += 399;
					order[count] = "Small Mexican Chilli Pizza....399";
					price[count] = 399;
					cout << "                     Small mexican chilli added to Cart\n";
					count++;
					break;
				case'm':
				case'M':
					cout << "You have selected Medium\n";
					total += 899;
					order[count] = "Medium Mexican Chilli Pizza....899";
					price[count] = 899;
					cout << "                    Medium mexican chilli added to Cart\n";
					count++;
					break;
				case 'l':
				case'L':
					cout << "You have selected Large\n";
					total += 1199;
					order[count] = "Large Mexican Chilli Pizza....1199";
					price[count] = 1199;
					cout << "                    Large mexican chilli added to Cart\n";
					count++;
					break;
				case 'x':
				case 'X':
					cout << "You have selected Extra Large\n";
					total += 1499;
					order[count] = "Extra Large Mexican Chilli Pizza....1499";
					price[count] = 1499;
					cout << "                 Extra large mexican chilli added to Cart\n";
					count++;
					break;
				default:
					cout << "                            Invalid selection\n";
					break;
				}
			}
			else if (choice3 > 5)
			{
				cout << "                            Invalid selection\n";
				break;
			}
			break;

		case 'b':
			cout << "\n                           Sandwitches Only\n";
			cout << "Note : We offer different type of Sandwitches  \n";
			cout << "-----------------------------------------------------------------------------\n";
			cout << "|               Please select which type of Sandwitch you want!             |\n";
			cout << "| S.No.   Name                                                 Orignal Price|\n";
			cout << "| 1)      Peri Peri Chicken                                         1199    |\n";
			cout << "| 2)      Tuna                                                      1199    |\n";
			cout << "| 3)      Turkey Beast                                              1199    |\n";
			cout << "| 4)      Chicken Teriyaki                                          1199    |\n";
			cout << "| 5)      Steak & Cheese                                            1199    |\n";
			cout << "-----------------------------------------------------------------------------\n";
			cout << "Enter your choice ";
			cin >> choice3;
			if (choice3 == 1)
			{
				total += 1199;
				cout << "You have selected Peri Peri chichken\n\n";
				order[count] = "peri peri chicken.....Rs 1199 with";
				price[count] = 1199;
				count++;
			}
			else if (choice3 == 2)
			{
				total += 1199;
				cout << "You have selected Tuna\n\n";
				order[count] = "Tuna.....Rs 1199 with";
				price[count] = 1199;
				count++;
			}
			else if (choice3 == 3)
			{
				total += 1199;
				cout << "You have selected Turkey Beast\n\n";
				order[count] = "Turkey Beast.....Rs 1199 with";
				price[count] = 1199;
				count++;
			}
			else if (choice3 == 4)
			{
				total += 1199;
				cout << "You have selected Chicken Teriyaki\n\n";
				order[count] = "Chicken Teriyaki.....Rs 1199 with";
				price[count] = 1199;
				count++;
			}
			else if (choice3 == 5)
			{
				total += 1199;
				cout << "You have selected Steak & Cheese\n\n";
				order[count] = "Steak & Cheese.....Rs 1199 with";
				price[count] = 1199;
				count++;
			}
			else
			{
				cout << "                            Invalid selection\n";
				break;
			}
			cout << "Please select your crust type\n";
			cout << "\n1) Normal Crust................Rs 75";
			cout << "\n2) Filled With Cheese..........Rs 150\n";
			cout << "Enter your choice ";
			cin >> choice5;
			if (choice5 == 1)
			{
				total += 75;
				order[count] = "Normal Crust.....Rs 75 and";
				price[count] = 75;
				cout << "Normal crust added\n\n";
				count++;
			}
			else if (choice5 == 2)
			{
				total += 150;
				order[count] = "Cheese Filled Crust.....Rs 150 and";
				price[count] = 50;
				cout << "Cheese filled crust added\n\n";
				count++;
			}
			else
			{
				cout << "                            Invalid selection\n";
			}
			cout << "Please select your sauce type\n";
			cout << "\n1) White Sauce.................Rs 50";
			cout << "\n1) Tomato Sauce................Rs 80\n";
			cout << "Please enter your choice ";
			cin >> choice5;
			if (choice5 == 1)
			{
				cout << "White sauce added\n\n";
				total += 50;
				order[count] = "White Sauce.....Rs 50 and";
				price[count] = 50;
				count++;
			}
			else if (choice5 == 2)
			{
				cout << "Tomato sauce added\n\n";
				total += 80;
				order[count] = "Tomato Sauce.....Rs 80 and";
				price[count] = 80;
				count++;
			}
			else
			{
				cout << "                            Invalid selection\n";
			}
			cout << "Please select your cheese type\n";
			cout << "\n1) Cheddar Cheese..............Rs 100";
			cout << "\n1) Mozerella Cheese............Rs 150\n";
			cout << "Please enter your choice ";
			cin >> choice5;
			if (choice5 == 1)
			{
				cout << "Cheddar cheese added\n\n";
				total += 100;
				order[count] = "Cheddar Cheese.....Rs 100";
				price[count] = 100;
				count++;
			}
			else if (choice5 == 2)
			{
				cout << "Mozerella cheese added\n\n";
				total += 150;
				order[count] = "Mozerella Cheese.....Rs 150";
				price[count] = 150;
				count++;
			}
			else
			{
				cout << "                            Invalid selection\n";
			}
			cout << "                     Sanwitch added to Cart\n";
			break;
		case 'c':
			cout << "\n                                 Sidelines\n";
			cout << "-----------------------------------------------------------------------------\n";
			cout << "|                       Please Select Your Sideline                         |\n";
			cout << "| 1) Mineral Water.....................................................Rs 80|\n";
			cout << "| 2) Soft Drink........................................................Rs 90|\n";
			cout << "| 3) Tea...............................................................Rs 30|\n";
			cout << "| 4) Coffee............................................................Rs 60|\n";
			cout << "-----------------------------------------------------------------------------\n";
			cout << "Please enter your choice : ";
			cin >> choice3;
			if (choice3 == 1)
			{
				total += 80;
				cout << "                        Mineral water added to Cart\n";
				order[count] = "Mineral Water.....Rs 80";
				price[count] = 80;
				count++;
			}
			else if (choice3 == 2)
			{
				total += 90;
				cout << "                          Soft drink added to Cart\n";
				order[count] = "Soft Drink.....Rs 90";
				price[count] = 90;
				count++;
			}
			else if (choice3 == 3)
			{
				total += 30;
				cout << "                             Tea added to Cart\n";
				order[count] = "Tea.....Rs 30";
				price[count] = 30;
				count++;
			}
			else if (choice3 == 4)
			{
				total += 60;
				cout << "                            Coffee added to Cart\n";
				order[count] = "Coffee.....Rs 60";
				price[count] = 60;
				count++;
			}
			else
			{
				cout << "                            Invalid selection\n";
			}
			break;
		case 'd':
			cout << "\n                              Discounted Deals                               \n-----------------------------------------------------------------------------\n";
			cout << "|                           Please Select Your Deal                         |\n";
			cout << "|Deal 1 1Regular Pizza, 1Zinger Burger, 1Can Soft Drink..............Rs 650 |\n";
			cout << "|Deal 2 1Regular Pizza, 1Regular Fries, 5Hot Wings, 1Can Soft Drink..Rs 650 |\n";
			cout << "|Deal 3 1Medium Pizza, 1(1.5 ltr) Soft Drink.........................Rs 999 |\n";
			cout << "|Deal 4 1Large Pizza, 1(1.5 ltr) Soft Drink..........................Rs 1199|\n";
			cout << "|Deal 5 1Extra Large Pizza, 1(1.5 ltr) Soft Drink....................Rs 1499|\n";
			cout << "|Deal 6 3Small Pizas, 1(1.5 ltr) Soft drink..........................Rs 1399|\n";
			cout << "-----------------------------------------------------------------------------\n";
			cout << "Please Enter Your Choice ";
			cin >> choice2;
			if (choice2 == 1)
			{
				cout << "You have selected Deal 1 : 1Regular Pizza, 1Zinger Burger, 1Can Soft Drink\n";
				total += 650;
				order[count] = "Deal 1....Rs 650";
				price[count] = 650;
				count++;
				cout << "\n                         Deal 1 is added to Cart\n";
			}
			else if (choice2 == 2)
			{
				cout << "You have selected Deal 2 : 1Regular Pizza, 1Regular Fries, 5Hot Wings, 1Can Soft Drink\n";
				total += 650;
				order[count] = "Deal 2....Rs 650";
				price[count] = 650;
				count++;
				cout << "\n                         Deal 2 is added to Cart\n";
			}
			else if (choice2 == 3)
			{
				cout << "You have selected Deal 3 : 1Medium Pizza, 1(1.5 ltr) Soft Drink\n";
				total += 999;
				order[count] = "Deal 3....Rs 999";
				price[count] = 999;
				count++;
				cout << "\n                         Deal 3 is added to Cart\n";
			}
			else if (choice2 == 4)
			{
				cout << "You have selected Deal 4 : 1Large Pizza, 1(1.5 ltr) Soft Drink\n";
				total += 1199;
				order[count] = "Deal 4....Rs 1199";
				price[count] = 1199;
				count++;
				cout << "\n                         Deal 4 is added to Cart\n";
			}
			else if (choice2 == 5)
			{
				cout << "You have selected Deal 5 : 1Extra Large Pizza, 1(1.5 ltr) Soft Drink\n";
				total += 1499;
				order[count] = "Deal 5....Rs 1499";
				price[count] = 1499;
				count++;
				cout << "\n                         Deal 5 is added to Cart\n";
			}
			else if (choice2 == 6)
			{
				cout << "You have selected Deal 6 : 3Small Pizzas, 1(1.5 ltr) Soft Drink\n";
				total += 1399;
				order[count] = "Deal 6....Rs 1399";
				price[count] = 1399;
				count++;
				cout << "\n                         Deal 6 is added to Cart\n";
			}
			else
			{
				cout << "\n                             Wrong Selection\n";
			}
			break;
		case 'e':
			current_bill(order, count, total);
			break;
		case 'f':
			remove(order, price, count, total);
			break;
		default:
			cout << "\n                       Invalid Selection. Try Again!\n";
		}
		system("pause");
		menu2();
		cin >> choice;
	} while (choice != 'g');
	view_bill(order, count, total);
	cout << "                     Thankyou for choosing us. Good Bye!\n";
	system("pause");
}
void menu2()
{
	system("cls");
	cout << "\n****************************** Anything Else ********************************\n\n\n";
	cout << "    *********************************************************************\n";
	cout << "*****************************     LA MONTANA     ********************************\n";
	cout << "    *********************************************************************\n\n";
	cout << "                   What would you like to choose today?";
	cout << "\n                        Enter only Small Alphabets \n" << "\n---------------------------------------------------------------------------- - \n";

	cout << "|\t\t\t   a) Pizza Only                                    |\n";
	cout << "|\t\t\t   b) Sandwitch Only                                |\n";
	cout << "|\t\t\t   c) Sidelines                                     |\n";
	cout << "|\t\t\t   d) Discounted Deals                              |\n";
	cout << "|\t\t\t   e) View Current Bill                             |\n";
	cout << "|\t\t\t   f) Remove Items From The Bill                    |\n";
	cout << "|\t\t\t   g) Get Total Bill                                |\n";
	cout << "-----------------------------------------------------------------------------\n";
	cout << "Please Enter Your Choice : ";
}
void menu()
{
	system("cls");
	cout << "    *********************************************************************\n";
	cout << "*****************************     LA MONTANA     ********************************\n";
	cout << "    *********************************************************************\n\n";
	cout << "                   What would you like to choose today?";
	cout << "\n                       Enter only Small Alphabets \n" << "\n-----------------------------------------------------------------------------\n";

	cout << "|\t\t\t   a) Pizza Only                                    |\n";
	cout << "|\t\t\t   b) Sandwitch Only                                |\n";
	cout << "|\t\t\t   c) Sidelines                                     |\n";
	cout << "|\t\t\t   d) Discounted Deals                              |\n";
	cout << "|\t\t\t   e) View Current Bill                             |\n";
	cout << "|\t\t\t   f) Remove Items From The Bill                    |\n";
	cout << "|\t\t\t   g) Get Total Bill                                |\n";
	cout << "-----------------------------------------------------------------------------\n";
	cout << "Please Enter Your Choice : ";
}
void view_bill(string order[], int count, int total)
{
	system("cls");
	cout << "    *********************************************************************\n";
	cout << "*****************************     LA MONTANA     ********************************\n";
	cout << "    *********************************************************************\n\n";
	cout << order[0] << endl;
	for (int i = 1; i <= count; i++)
	{
		cout << "\t\t" << order[i] << endl;
	}
	cout << "-----------------------------------------------------------------------------\n";
	cout << "\t\t\t     TOTAL BILL: " << total << endl << endl;
}
void remove(string order[], int price[], int& count, int& total)
{
	int choice2;
	cout << "\n                             Removing Items\n";
	cout << "-----------------------------------------------------------------------------\n";
	if (count == 1)
	{
		cout << "                          No Items Selected Yet\n";
	}
	else
	{
		cout << "                        Please Select Your Items\n";
		for (int i = 1; i < count; i++)
		{
			cout << i << ") " << order[i] << endl;
		}
		cout << count << ") Go Back\n";
		cout << "-----------------------------------------------------------------------------\n";
		cout << "Please enter your choice : ";
		cin >> choice2;
		if (choice2 > count)
		{
			cout << "                            Invalid Selection\n";
		}
		else if (choice2 < count)
		{
			cout << "\n\t" << order[choice2] << " is removed\n";
			total = total - price[choice2];
			for (int i = choice2; i < count; i++)
			{
				order[i] = order[i + 1];
				price[i] = price[i + 1];
			}
			count--;
		}
		else
		{
			cout << "                             Nothing Removed\n";
		}
	}
}
void current_bill(string order[], int count, int total)
{
	if (count == 1)
	{
		cout << "                          No Items Selected Yet\n";
	}
	else
	{
		cout << "                             Your Current Bill\n";
		cout << "-----------------------------------------------------------------------------\n";
		for (int i = 1; i <= count; i++)
		{
			cout << "\t\t" << order[i] << endl;
		}
		cout << "-----------------------------------------------------------------------------\n";
		cout << "\t\tCurrent Bill: " << total << endl;
	}
}