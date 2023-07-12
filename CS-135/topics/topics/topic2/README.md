Let's critique a program. The following program takes purchase amounts and outputs, formatted of course, to another file the purchase amount and a discount. The discount is zero if the purchase is less than 10.00, otherwise it is 8% of the purchase amount.

For instance the purchase amounts of: 9.0 and 20.2 would send to the output file:

9.00 0.00

20.20 1.62

It also would print, to the screen (not the output file), a summary like so:

Total = 29.20 total discount = 1.62

There are 4 basic problems. The first is a style issue and does not directly affect the program. Two of the problems are bugs that "left out" code that could cause problems. The final problem is a big one and short circuits the usefulness of the program.

First Issue - style issue
Declared constants outside of Main function
Declared helper function outside of Main function
Use same naming style for constants (all Caps)

Second Issue - Bug 1
Added error handling for file opening

Third Issue - Bug 2
Close the output file after writing to the file

Fourth Issue - Major Bug
While Loop has empty body due to extraneous semicolon
