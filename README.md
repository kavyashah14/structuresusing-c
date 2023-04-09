# structuresusing-c
# Introduction
In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name. Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure. Unlike an array, a structure can contain many different data types (int, float, char, etc.).
# How to create a structure?
To create a structure in C, the struct keyword is used followed by the tag name of the structure. Then the body of the structure is defined, in which the required data members (primitive or user-defined data types) are added.

EXAMPLE

  struct data 
  {
      
  };
  
 # How to Declare Structure Variables?
 
 EXAMPLE

  struct data
  {
  
      char name[50];
      
      char address[50];int age;
      
  };
  
  ![image](https://user-images.githubusercontent.com/70435939/230757592-6ddf3b5b-0775-4c72-8164-19b0530c6189.png)
  
# Accessing Structure elements:
We can directly access the structure member using the dot(.) operator. The dot operator is used between the structure variable name and the structure member name we want to access. Let’s see the syntax to understand it in a better way.

 structure_variable.structure_member;
