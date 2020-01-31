//Alayne Anderson
//Karla Fant CS163 Fall term
//This is my header file for Program 1

#include <iostream>
#include<cctype>
#include<fstream>
#include<cstring>

/*header files should include the following information
1. #includes
2. structures
3. Prototypes
4. class interfaces
5. Constants*/

struct food_truck
{
	char * name;
	char * location;
	char * food_type;
	char * review;
	char * fave_food;

};
struct node
{
	food_truck a_food_truck;
	node * previous;
	node * next; 
};

//classes
class CS_food_critic
{
	public:
		CS_food_critic();
		~CS_food_critic();
		int add(char a_name[100]);
		int add_location(char a_location[100]);
		int add_food(char a_food_type[100]);
		int add_review(char a_review[500]);
		int add_fave_food(char a_fave_food[100]);
		int remove_fave_food(char remove_food[50]);
		int add_fave_food(char truck[50], char add_food[50]);
		int remove(char to_remove[50]);
		int display_all();
		int display_food_types(char food_match[50]);

	private:
		node * head;
		node * tail;

};
