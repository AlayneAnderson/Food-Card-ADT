//Alayne Anderson Program 1
//10-7-19
//Karla Fant CS163 Fall term
//This is my implementation file
using namespace std;
#include "Anderson_A.h"

//constructur which sets head to NULL
CS_food_critic::CS_food_critic()
{
	node * head=NULL;
}


/* Note for my add functions: 
I split them up to make it easier to debug when programming. 
I found this to be easier than making one HUGE function which I have done previously.
*/

//Adding a name to the food truck data structure
int CS_food_critic::add(char a_name[100])
{
	node * current=head;
	if(!head)
	{
		head= new node;
		head->a_food_truck.name= new char[strlen(a_name)+1];
		strcpy(head->a_food_truck.name,a_name);
		return 1;	
	}
	if(head)
	{
		current=current->next;
		current=new node;
		current->a_food_truck.name= new char[strlen(a_name)+1];
		strcpy(current->a_food_truck.name,a_name);

	}
	return 1;
}

//Adding the location to the food truck data structure
int CS_food_critic::add_location(char a_location[100])
{
	node * current = head;
	if(!head)
	{
		head= new node;
		head->a_food_truck.location= new char[strlen(a_location)+1];
		strcpy(head->a_food_truck.location, a_location);
		return 1;
	}
	if(head)
	{
		current =current->next;
		current= new node;
		current->a_food_truck.location= new char[strlen(a_location)+1];
		strcpy(current->a_food_truck.location, a_location);
	}
	return 1;
}

//Adding a food type fo the food struct data structure
int CS_food_critic::add_food(char a_food_type[100])
{
	node * current = head;
	if(!head)
	{
		head = new node;
		head->a_food_truck.food_type= new char[strlen(a_food_type)+1];
		strcpy(head->a_food_truck.food_type, a_food_type);
		return 1;
	}
	if(head)
	{
		current= current->next;
		current= new node;
		current->a_food_truck.food_type= new char[strlen(a_food_type)+1];
		strcpy(current->a_food_truck.food_type, a_food_type);
	}
	return 1;
}

//Adding a review to the food struct data structure
int CS_food_critic::add_review(char a_review[500])
{
	node * current = head;
	if(!head)
	{
		head = new node;
		head->a_food_truck.review= new char[strlen(a_review)+1];
		strcpy(head->a_food_truck.review, a_review);
		return 1;
	}
	if(head)
	{
		current=current->next;
		current= new node;
		current->a_food_truck.review= new char[strlen(a_review)+1];
		strcpy(current->a_food_truck.review, a_review);

	}
	return 1;
}

//Adding a favorite food to the food struct data structure 
int CS_food_critic::add_fave_food(char a_fave_food[100])
{
	node * current= head;
	if(!head)
	{
		head= new node;
		head->a_food_truck.fave_food= new char[strlen(a_fave_food)+1];
		strcpy(head->a_food_truck.fave_food, a_fave_food);
		return 1;
	}
	if(head)
	{
		current=current->next;
		current= new node;
		current->a_food_truck.fave_food= new char[strlen(a_fave_food)+1];
		strcpy(current->a_food_truck.fave_food, a_fave_food);

	}
	return 1;
}

//Removing a favorite food
int CS_food_critic::remove_fave_food(char remove_food[50])
{
	node * current = head;
	if(!head) return 0;
	while(current)
	{	
		if(current->a_food_truck.fave_food!=NULL)
		{
		int result=strcmp(current->a_food_truck.fave_food, remove_food);
		if(result==0)
		{
			delete [] current->a_food_truck.fave_food;	
			current->a_food_truck.fave_food= NULL;
		}
		}
		current=current->next;
	}
	return 1;
}

//adding a favorite food to a set food truck
int CS_food_critic::add_fave_food(char truck[50],char add_food[50])
{
	node * current= head;
	if(!head) return 0;
	while(current)
	{
		current=current->next;
		int res= strcmp(current->a_food_truck.name,truck);
		if(res==0)
		{
			current->a_food_truck.fave_food= new char[strlen(add_food)+1];
			strcpy(current->a_food_truck.fave_food, add_food);
		}
		
	}
	return 1;
}

//removing a food truck
int CS_food_critic::remove(char to_remove[50])
{
	node * current= head;
	if(!head) return 0;
	while(current)
	{
		current=current->next;
		int res= strcmp(current->a_food_truck.name,to_remove);
		if(res==0)
		{
			delete [] current->a_food_truck.name;
			current->a_food_truck.name=NULL;
		}
	}
	return 1;
}
//Displaying all 
int CS_food_critic::display_all()
{
	node * current=head;
	if(!head) return 0;
	while(current != NULL)
	{
		if(current->a_food_truck.name !=NULL)
			cout<<current->a_food_truck.name<<" "<<endl;
		if(current->a_food_truck.location !=NULL)
			cout<<current->a_food_truck.location<<"  "<<endl;
		if(current->a_food_truck.food_type !=NULL)
			cout<<current->a_food_truck.food_type<<"  "<<endl;
		if(current->a_food_truck.review !=NULL)
			cout<<current->a_food_truck.review<<"  "<<endl;
		if(current->a_food_truck.fave_food !=NULL)
		{	
			cout<<current->a_food_truck.fave_food<<"  "<<endl;
		}
		current=current->next;
	}
return 1;
	
}

//displaying food types that match
int CS_food_critic::display_food_types(char food_match[50])
{
	node * current=head;
	if(!head) return 0;
	while(current)
	{
		if(current->a_food_truck.food_type==food_match)
		{
		cout<<current->a_food_truck.food_type;
		}
	}	
	return 1;
}

//destructur.... which coincidentally gave me lots of problems
CS_food_critic::~CS_food_critic()
{
	node * temp = head;

	while(head)
	{
	temp = head->next;
	head->a_food_truck.name=NULL;
	head->a_food_truck.location= NULL;
	head->a_food_truck.food_type= NULL;
	head->a_food_truck.review=NULL;
	head->a_food_truck.fave_food=NULL;
	head= NULL;
	}

}
