## Dragon Slayer RPG
 
 Authors: [Ellen Yim](https://github.com/ellenyim8) , [Chen Yuan](https://github.com/chenchen6394) , [Damian Ramos](https://github.com/dramos2001) , [Jason Guan](https://github.com/jasonguan067) 

## Project Description
 * For our final project, we will be developing a text-based RPG game revolving around a dragonslayer storyline. Some of us are fans of RPG games and dragonslayer stories so we felt this would be a challenging, yet worthwhile project to work on. This project will be developed using C++ and the C++ standard template library (other libraries/technologies may be implemented to develop the game in the future).
 * In our game, there will be a main character who is given health, level, and experience at the start. This character will perform specific tasks/actions such as attack, cast spells, heal, defend, etc. The user will input what they want their player to do based on the circumstances set in the game. The inputs will be recorded and executed and the game will output what happens as a result of their inputs. For example, lets say the user is fighting a mob. They want to attack the mob, so they input "attack" or something similar. The player will then attack the mob and the damage done on them will be outputted back to the user. The user will also be able to input decisions that relate to the story. For examle, the player reaches a fork in the road. The game will ask (output to) the user if they want to go right or left. The user inputs "left" and they go left and are met with a mob. This goes on throughout the majority of the game. The decisions and outcomes will be displayed to the user and will progress the plot further. The character has certain attributes, such as health and mana, that are modified by the gameplay and inputs from the player. For instance, the character's health will be deducted when attacked and their level will be increased when completing a certain task.
 
## Class Diagram
![image](https://user-images.githubusercontent.com/56313109/140868150-e9fd2c09-3333-4f7e-8ed1-d888b4fc9d8e.png)
 Description of the UML Diagram:
 * Player class that contains attributes, actions, etc. of the player
   * 3 different player types that inherit from the Player class, they are: paladin, warrior, and wizard
   * Player types have specific attributes and moves they can do
 * Bag class acts as a container class to store the items the player has such as weapons
   * This class has a composition relationship with Player class
   * Bag contains data of type Item class; composition relationship between Bag and Item
   * 3 item types that inherit from Item: Spell, Potion, and Weapon, each with their own attributes
 * Mob class contains attributes, actions, etc. of mobs in the game
   * Main mob type will be dragon
 * Shop class contains items to buy
 * Quest class has different levels that player (start from level 1 and once completes a level, gets points and can exchange to buy items at Shop

 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
