# Hangman C++ Game

Programming Fundamentals Final Project

Profesor: Antonio Mejorado

Tecnologico de Monterrey

Eduardo Aguilar Leal

A01193626

Nov 9 2016

---
This is a simple terminal program in which the user plays a basic Hangman game. This consists in the program choosing a random word from the selected word bank (`.txt` files with corresponding names) and prompting the user on guessing it. The user has 6 oportunies to guess the word, every letter guessed further shows the whole word.


```
Welcome ot Hangman 1.0 !!!
===============================
|                |
|                |
|                |
|             ___≤___
|            /       \
|           |  0   0  |
|           |    o    |
|            \_______/
|                |
|               /|\
|              / | \
|             /  |  \
|            /   |   \
|           /    |    \
|                |
|                |
|               / \
|              /   \
|             /     \
|            /       \
|           /         \
|
|
|

Please choose a file for your guessing word

----------MENU----------

     1.  Programming Fundamentals class students
     2.  Pokemons
     3.  Dictators & Conquerers
     4.  Proteins (WARNING: longest word in english language may freeze your computer)

Enter a # for an option : 
```

---
```
You guessed a letter in the word!
===============================
|                |
|                |
|                |
|             ___≤___
|            /       \
|           |  0   0  |
|           |    o    |
|            \_______/
|                |
|               /|
|              / |
|             /  |
|            /   |
|           /    |
|                |
|                |
|               /
|              /
|             /
|            /
|           /
|
|
|

drago_i_e

Words used: 
 p  a  e  i  o  u  s  l  c  d  r  g 
Please enter a letter you think is inside the word or the complete word
```

---
```
Please enter a letter you think is inside the word or the complete word
k
...

===============================
|                |
|                |
|                |
|             ___≤___
|            /       \
|           |  X   X  |
|           |    o    |
|            \_______/
|                |
|               /|\
|              / | \
|             /  |  \
|            /   |   \
|           /    |    \
|                |
|                |
|               / \
|              /   \
|             /     \
|            /       \
|           /         \
|
|
|

drago_ite

Words used: 
 p  a  e  i  o  u  s  l  c  d  r  g  t  k 

You lost

Your word was dragonite
Would you like to play again? (Y)?
```
