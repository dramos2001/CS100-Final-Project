## Dragon Slayer RPG
 
 Authors: [Ellen Yim](https://github.com/ellenyim8) , [Chen Yuan](https://github.com/chenchen6394) , [Damian Ramos](https://github.com/dramos2001) , [Jason Guan](https://github.com/jasonguan067) 

## Project Description
 * For our final project, we will be developing a text-based RPG game revolving around a dragonslayer storyline. Some of us are fans of RPG games and dragonslayer stories so we felt this would be a challenging, yet worthwhile project to work on. This project will be developed using C++ and the C++ standard template library (other libraries/technologies may be implemented to develop the game in the future).
 * In our game, there will be a main character who is given health, level, and experience at the start. This character will perform specific tasks/actions such as attack, cast spells, heal, defend, etc. The user will input what they want their player to do based on the circumstances set in the game. The inputs will be recorded and executed and the game will output what happens as a result of their inputs. For example, lets say the user is fighting a mob. They want to attack the mob, so they input "attack" or something similar. The player will then attack the mob and the damage done on them will be outputted back to the user. The user will also be able to input decisions that relate to the story. For examle, the player reaches a fork in the road. The game will ask (output to) the user if they want to go right or left. The user inputs "left" and they go left and are met with a mob. This goes on throughout the majority of the game. The decisions and outcomes will be displayed to the user and will progress the plot further. The character has certain attributes, such as health and mana, that are modified by the gameplay and inputs from the player. For instance, the character's health will be deducted when attacked and their level will be increased when completing a certain task.
 
## Class Diagram
![image](https://user-images.githubusercontent.com/56313109/144044210-98c122b3-46b7-42b9-8392-f9bebf827e30.png)
 Description of the UML Diagram:
 * Player class that contains attributes, actions, etc. of the player
   * 3 different player types that inherit from the Player class, they are: paladin, warrior, and wizard
   * Player types have specific attributes and moves they can do
 * Bag class acts as a container class to store the items the player has such as weapons
   * This class has a composition relationship with Player class
   * Bag contains data of type Item class; composition relationship between Bag and Item (
   * 3 item types that inherit from Item: Spell, Potion, and Weapon, each with their own attributes
 * Mob class contains attributes, actions, etc. of mobs in the game
   * Main mob type will be dragon (there are other mobs like witch) 
 * accessShop method in Player class contains potions to buy, with points earned. 
 * Game class starts the program, creates a Player/role, and has an end method (if player has won/lost). 

 ## Phase III
 * What design patterns did you use? For each design pattern you must explain in 4-5 sentences: 
    * The design patterns we chose were strategy and composite. 
 * Why did you pick this pattern? And what feature did you implement with it? 
    * For Strategy, we decided to use it to create the different items as (concrete strategies) and then have a Bag class that configures a concrete strategy object and defines an interface to access its data. So for item class we inherit getItemName and getDescription, and then for (Spell, Weapon, Potion) class, it inherits a method designed for its own usage like Spell has castSpell(), Weapon has useWeapon(). 
    * For Composite, we chose this since it made user interaction easier and it made it easy to define behavior of children classes (Wizard, Warrior, Paladin). Doing the strategy was a bit difficult when making a strategy object in the code, but for composite it was easier with adding any additional components. 
 * How did the design pattern help you write better code?
    * For Strategy, we had strategy methods with Item (mainly Potion). Our classes all flow with each other as it was a family of algorithms. 
    * For Composite, we made use of inheritance and use of recursively run a behavior over all components of an object. We also made an interface that allowed us to createPlayer and start and end the program using Player as an object. 
 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 
 * Main program with major input/output of the game
 
 ![main-game1](https://user-images.githubusercontent.com/56313109/144098065-15d18ebf-21fa-4bad-9727-75805e3898b9.png)
 
 ![main-game2](https://user-images.githubusercontent.com/56313109/144098118-6317edff-66a5-4f7d-b62d-9a0c9fe93f09.png)
 
 ![main-game3](https://user-images.githubusercontent.com/56313109/144098171-ec4cd86e-6a71-40b1-961d-f7385839d36e.png)
 
 ![main-game4](https://user-images.githubusercontent.com/56313109/144098211-e0dcb363-d51c-4e24-9391-14cc2a99993e.png)
 
 ![main-game5](https://user-images.githubusercontent.com/56313109/144098226-95e71f02-1aed-4f76-ab1c-be708e5e11c6.png)
 
 ![main-gamefinal](https://user-images.githubusercontent.com/56313109/144098255-15061c40-d38e-4b84-8165-48050ad13cf7.png)


 * Valgrind after executing main program
 
 ![valgrind](https://user-images.githubusercontent.com/56313109/144098501-b277ba54-81de-4404-bb6a-22340b4ccc2b.png)


 * Execution after running unit tests (tests that fail fail on purpose)
 
 ![unit-tests1](https://user-images.githubusercontent.com/56313109/144098582-c2569c82-cb90-4a16-9934-1b5b75e7a466.png)
 
 ![unit-tests2](https://user-images.githubusercontent.com/56313109/144098612-5df4a9d0-7f30-42bb-a91d-7cf35911c500.png)
 
 ![unit-tests3](https://user-images.githubusercontent.com/56313109/144098641-08a4eeb6-70bd-4b18-80df-b73f880cf6c9.png)
 

 ## Installation/Usage
  Usage of our project is simple and straightforward. Clone the repository onto your machine, making sure to do so recursively since it contains the googletest submodule. Then     you just need to run the main executable file and you are right into the game. If you want to run the unit tests of our project, you can run the test executable.
 ## Testing
  Testing of our project was done using googletest and creating unit tests for each class. Our tests would test each classes' member functions for different test cases/scenarios   that may occur during execution of the program. 
 
