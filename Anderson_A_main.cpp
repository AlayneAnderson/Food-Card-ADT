//Alayne Anderson
//CS163 Karla Fant Fall 2019
//main file

#include "Anderson_A.h"
using namespace std;


int main()
{
	char a_name[100]; 
	char a_location[100];
	char a_food_type[100];
	char a_review[500]; 
	char a_fave_food[100];
	char remove_food[50];
	char add_food[50];
	char truck[50];
	char to_remove[50];
	char food_match[50];
	int choice;
	char answer;

	CS_food_critic object;

	//The "menu" to follow when using the program
	cout<<" "<<endl<<endl;
	cout<<"What would you like to do?"<<endl;
	cout<<"1= add a new food truck"<<endl;
	cout<<"2=delete a favorite food from an existing food cart"<<endl;
	cout<<"3=add a new most favorite food for an existing food cart"<<endl;
	cout<<"4= delete a food cart"<<endl;
	cout<<"5= display all carts"<<endl;
	cout<<"6=display food carts with a particular type of food"<<endl<<endl;
	cout<<"Please enter in the action you would like to do:"<<endl;
	cin>>choice;

	//adding function from the menu
	if(choice ==1)
	{
		cout<<"Please enter in a food truck name"<<'\n';
		cin.getline(a_name,100,'\n');
		cin.ignore(100,'\n');
		cout<<"Please enter in the location of the food truck"<<endl;
		cin.get(a_location,100,'\n');
		cin.ignore(100,'\n');
		cout<<"Please enter in the food type of the food truck"<<endl;
		cin.get(a_food_type,100,'\n');
		cin.ignore(100,'\n');
		cout<<"Please enter in a review of the food truck"<<endl;
		cin.get(a_review,500,'\n');
		cin.ignore(500,'\n');
		cout<<"Please enter in your favorite food from a food truck"<<endl;
		cin.get(a_fave_food,100,'\n');
		cin.ignore(100,'\n');

		object.add(a_name);
		object.add_location(a_location);
		object.add_review(a_review);
		object.add_fave_food(a_fave_food);
		cout<<"Would you like to do another action?(y/n)"<<endl;
		cin>>answer;
		cin.ignore(100,'\n');
	}
	
	//if statement to run now to run the menu
	if(answer == 'Y' or answer == 'y')
	{
	cout<<" "<<endl<<endl;
	cout<<"What would you like to do?"<<endl;
	cout<<"1= add a new food truck"<<endl;
	cout<<"2= delete a favorite food from an existing food cart"<<endl;
	cout<<"3= add a new most favorite food for an existing food cart"<<endl;
	cout<<"4= delete a food cart"<<endl;
	cout<<"5=display all carts"<<endl;
	cout<<"6= display food carts with a particular type of food"<<endl<<endl;
	cout<<"Please enter in the action you would like to do:"<<endl;
	cin>>choice;
	cin.ignore(100,'\n');
	}
	
	//to delete a favorite food
	if(choice ==2)
	{
	cout<<"Please enter in the favorite food you would like to delete"<<endl;
	cin.get(remove_food,50,'\n');
	cin.ignore(100,'\n');
	object.remove_fave_food(remove_food);
	cout<<"Would you like to do another action?(y/n)?"<<endl;
	cin>>answer;
	cin.ignore(100,'\n');
	}

	//adding a new favorite food to a entered food truck
	if(choice ==3)
	{
	cout<<"Please enter in the food truck you would like to add a"<<endl;
	cout<<"new favorite food too."<<endl;
	cin.get(truck,50,'\n');
	cin.ignore(100,'\n');
	cout<<"Please enter in a new favorite food"<<endl;
	cin.get(add_food,50,'\n');
	cin.ignore(100,'\n');
	object.add_fave_food(truck,add_food);
	cout<<"Would you like to do another action?(y/n)"<<endl;
	cin>>answer;
	cin.ignore(100,'\n');	
	}	
	
	//deleting a whole food truck
	if(choice ==4)
	{
	cout<<"Please enter in the food cart you would like to delete"<<endl;
	cin.get(to_remove,50,'\n');
	cin.ignore(100,'\n');
	object.remove(to_remove);
	cout<<"Would you like to do another action?(y/n)"<<endl;
	cin>>answer;
	cin.ignore(100,'\n');
	}

	//displaying 
	if(choice ==5)
	{
		object.display_all();
	cout<<"Would you like to do another action?(y/n)"<<endl;
	cin>>answer;
	cin.ignore(100,'\n');
	}
	
	//displaying good types
	if(choice ==6)
	{
	cout<<"Please enter in a type of food"<<endl;
	cin.get(a_food_type,50,'\n');
	cin.ignore(100,'\n');
	object.display_food_types(a_food_type);
	cout<<"Would you like to do another action?(y/n)"<<endl;
	cin>>answer;
	cin.ignore(100,'\n');
	}

return 0;
}


