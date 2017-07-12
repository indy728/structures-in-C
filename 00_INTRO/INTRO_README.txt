***************************************************************
***************************************************************
**                                                           **
**                                                           **
**                     INTRODUCTION TO                       **
**                        STRUCTURES                         **
**                           IN C                            **
**                                                           **
**                                                           **
***************************************************************
***************************************************************

In C, structures are generally what we use as a convenience to
refer to groups of related data. Stucts are a MORE COMPACT way
of accessing multiple variables, and help a program become 
more modular and organized.

A struct is defined as so:

struct	[variable name]{
	[member 0];
	[member 1];
	[...]
	[member n];
};

For example, you could create an identity struct for a
student at 42 that could be passed between functions to be
sorted, analyzed, printed, modified, etc., all while passing
only ONE variable: the struct pointer.

(Per 42's norm, all struct variable names must start with
"s_")

struct	s_studentID
{
	char	*name;
	int		level;
	char	*current_project;
};

Now that we have defined the number and types of variables
to be used in the struct, any time the struct is initialized,
our program will know how to access those variables. If we
need to allocate heap memory, our program autmatically
knows how much memory it needs to allocate based on the
variable types defined within our struct.

int		main()
{
	struct s_studentID	*studentA;

	/*
	** once initialized, we can assign values to
	** our struct's variables
	*/
	return (0);
}

Typically, it's more compact to type-define our structs
so they can more easily be declared and initialized.
"struct s_studentID" is quite a long variable type, so
let's abbreviate it with a typedef. The typedef is defined
almost the same as the struct:

(Per 42's norm, all typedef names must start with
"t_")

typdef struct	s_studentID
{
		char	*login;
		int		level;
		char	*current_project;
}				t_ID;

Now our variable is a little less cumbersome:

int		main()
{
	t_ID	*studentA;

	/*
	** this declaration works the same  as directly
	** initializing a struct.
	*/
	return (0);
}

Now, to assign values to the vaiables within our struct,
we must appropriately access that memory:

- If you've declared your struct variable as an OBJECT
(t_ID	student), use "." to set its value.
([struct].[var] = [value]).
These values are held in stack memory. Values cannot
be changed by other functions without passing by address.

- If you've declared your struct vaiable as a POINTER,
use "->" to set its value.
([struct]->[var] = [value])

REMEMBER: Only set pointers equal to valid addresses
in memory.

----------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef	struct	s_example
{
		char	*string;
		int		number;
}				t_example;

int		main()
{
	t_example	object;
	t_example	*pointer;

	object.string = "example";
	object.number = 21;
	printf("String: %s, Number: %d\n", object.string, object.number);

	pointer = (t_example *)malloc(sizeof(t_example));
	pointer->string = strdup("example2");
	pointer->number = 42;
	printf("String: %s, Number: %d\n", pointer->string, pointer->number);
	free(pointer->string);
	free(pointer);
	return (0);
}

