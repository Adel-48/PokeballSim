# PokeballSim
I tried to create a Pokeball simulator in c++.


Pokemon game mechanics have always interested me and I  really wanted to recreate the Pokeball capture sequence. I felt that I wanted to use c++ for this small project as I wanted to practice some of the skills I have been learning. I had a look at the original developer's formula which looked something like this: 

Catch rate:
Calculate f: f = (HPmax * 255 * 4) / (HPcurrent * Ball), where all divisions are rounded down to the nearest integer. The minimum value of f is 1 and its maximum value is 255.

Shake Checks:
To perform a shake check, a random number between 0 and 65535 (inclusive) is generated and compared to b. If the number is greater than or equal to b, the check "fails".
Four shake checks are performed. The Pokémon is caught if all four shake checks succeed. Otherwise, the Poké Ball will shake as many times as there were successful shake checks before the Pokémon breaks free.
If a is 255 or greater, the capture will always succeed and no shake checks will be performed.

I got the information from Here. 

After going through all the information it was clear that this was waaaay out of my league, so I simplified the formulas and used If statements to call the shake checks. If the requirements are met you will capture the pokemon and get a little pokedex update message. 

I managed to make the programme interactive by using user input, however, for future reference I would prefer it if I could add an interactive menu. I also used a while loop that stops after the pokemon is caught, but I know that there were many more efficient ways I could have used, I'm still inexperienced. 


Notes for the future: 

-Try to experiment with more advanced techniques such as switch statements and for loops.

-Try to find a more efficient way of padding strings without empty print statements. 

-Interactive menu.

-Different types of Pokeballs with different capture rates. 
