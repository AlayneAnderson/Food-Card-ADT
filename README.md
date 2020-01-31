# CS163
This is a program to store information about food carts around the Portland area using a linear linked list with an abstract data type. I am using a class to hold the functions for my abstract data type and I am naming it CS_food_critic. To hold my data I am going to create a struct in the class so that I can hold the data in the linear linked list struct node. The reason why I am naming the abstract data type class CS_food_critic is because it is an easily identifiable name for the class so someone who doesn’t know how to code can guess what kind of data should be inputted if they were to read my code. I will be using integer functions so that it will return zero if false and one (or another integer number) if true. Integer functions are easily used and work well with adding and moving information around. I am going to try to do all of my functions recursively but I will be specifically working on the remove function recursively if I do not have time to write every function recursively. I am okay with recursion but I still feel like I need to work more on it so I want to make sure that I have at least one function that is recursive so that I can get full credits for my program. Each function will shield the client program from the details of the data structure because the node structure will be placed in the private section of the class, also the recursive function will also be placed in the private section. We don’t want the client to be freaked out by what a node is! Also since I am returning true or false with an integer, I am not going to be displaying “error” or “correct” with every run of the program because the client would not know that they were doing something wrong necessarily. My head pointer to a node will also be in the private section of the class (as it should be). The general test cases for basic adding of information and removal of information will be to check if head is NULL. Actually, all of the functions when I implement them will have a base case to check if head is NULL. For adding you will be able to add data if head is NULL or it will traverse to the end and add data after the recursive call. For removal it will return false because head is NULL and there is no data to be removed. A problem that I could easily run into is the disorganization of the Linear Linked List, to do this without having as many problems I am going to make sure that it is a sorted linear linked list. I am also going to try to not traverse as much as I can, unless I create a recursive call for traversal. Another design problem could be making sure that my directions to the client are clear. I am going to create a basic void function just to explain what the client needs to do, so that it will be more intuitive for them to be able to use the program well. This void function will include a basic menu for the user so that they do not have to go through every single step every time they run the program. Some consideration for my program for this project is to increase my client base. I am going to have my father, friend, and someone who is completely clueless about programming test my program to make sure that it is as user friendly as I can make it. I would like it to be intuitive but not too intuitive that it is annoying for the user. 