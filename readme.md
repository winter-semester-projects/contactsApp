# The Program

### Stores:

The data gets stored in a standard container object, a vector, which itself has an indefinite amount of standard array container objects.

### Prompts:

The data is ‘‘filtered,’’ using regular expressions, to make sure, the user always enters valid input, and they cannot leave any field empty.

### Deletes:

The data is deleted, whenever the user wishes… They would, however, have to enter data, that exists! A function is called, from a header file, to delete existing entries that the user points to, by name.

## Headers

### add.h

Takes care of getting input, filtering it, and then showing it to the user, on request/prompt.

### del.h

Deletes whatever entry the user made, granted that, they already made the entry.

## prompt.h

Filters prompts, and user input. The functions inside it, allow for more concise, and non-repetitve code.
