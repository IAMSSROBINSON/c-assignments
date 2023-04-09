/*

Using functional programming principles (1 function does 1 thing) - Create a program that allows a user to select options from a menu to:

create a player
create 3 players
create a dynamic amount of players

then:

add a player
delete a player by id
search for a player by id

The program should print the result of the option selected at each stage for confirmation

*/

/*

1. SETUP
- create main.c file where main() function will reside where the program will run from ✅
- create players.h file and include preprocessor instruction for program to look here for function prototype declarations (separation of concerns and cleaner concise code) ✅
- create players.c file to define and execute functions declared in players.h file ✅

2. MAIN MENU
- call a function to launch the main menu for user to make selection from
	- declare function in players.h ✅
	- define function in players.c ✅
	- call function from main.c ✅
	- return int menuSelection to function call and store result in variable ✅

3. VALIDATE OPTION CHOSE
- validate selection and turn into int number of players to use later
  -  run a switch statement that converts the menu selection to the numberOfPlayers required to be created depending on the selection given: return numberOfPlayers to function call ✅
  - if invalid selection is made end the program ✅
  - if valid proceed ✅

4. ALLOCATE SPACE FOR ARRAY OF PLAYERS
- use numberOfPlayers variable to run a function to allocate space in memory for that number of players:
	- declare struct Players in players.h  ✅
	- declare function allocateMemory that will return an array of structs  ✅
	- define function in players.c  ✅
  	- create new struct array and set to NULL for validation later  ✅
  	- call calloc() to allocate memory and set values to 0 (include stdlib.h header file) ✅
  	- validate that the array does not return NULL and notify user of success of failed allocation of memory (quit program if failed)  ✅

5. POPULATE THE ARRAY WITH VALUES GIVEN BY USER
- run function and inside loop and ask the user to enter the values for details of the players in the array and assign values to appropriate player element in array
  - declare function in players.h ✅
  - define function in players.c ✅
  - call the function from main ✅
    - set id ✅
    - get player name ✅
    - get player age ✅
    - return the array ✅

6. PRINT ARRAY DETAILS
- once the array has been populated with details send the array to be printed confirming the id, name and age of each player
  - declare print function in player.h ✅
  - define print function in player.c ✅
  - call print function from main ✅
*/

7. LAUNCH SECOND MENU
- after printing the result of the first menu, a second menu will be presented to the user with options for adding a new player, deleting a player by id, searching a player by id and quitting the program.
  - declare menu2() function in players.h ✅
  - define function in players.c ✅
    - return menu2selection chosen ✅
  - call in main.c ✅
  - Run switch statement function validation2 with menu2selection chosen passed in to determine direction of the program
    - 1. add new players: What is involved?
      - ask user how many players and assign to variable ✅
        - call function to increase sizeof the current array ✅
          - need current array of players ✅
          - need the current amount of players ✅
          - need new amount to add to array ✅
        - need to realloc the size of the array by extra amount of players ✅
        - run new function: for each new player amount ask user to enter details ✅
        - send to print function for printing ✅

    - 2. delete a player by id
      - run function deleteById ask for the user id of the player wanting to be deleted and store in variable ✅
      - loop over array for number of players there are ✅
      - if id is not equal to searchId then copy to new array ✅
      - create new struct array and calloc space in memory to length of array - 1 ✅
      - assign values to this new array ✅
      - when complete call print array and pass array and new length ✅

    - 3. Search a player by id
      - copy delete by id but refactor for search ✅

8. NEXT: WRITE DETAILS OF PRINT OUT TO FILE