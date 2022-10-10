# CCV
Practicing C >:|


------------------------------------------------------
|Description | Number of Digits |   Starts With      |
------------------------------------------------------
|  Visa	     |    13            |         4          |
------------------------------------------------------
| American Ex|    15            |      34, 37        |
------------------------------------------------------
| Mastercard |    16            | 51,52,53,54 or 55  |
------------------------------------------------------

1.Prompt user for input
2.Identify if the card is valid ==> Need to use "Luhn's Algorithm".

==> Luhn's Algorithm:
	Note: Marked odd numbers with "y" besides the number, None marked numbers are pairs.
	Note: n.o means: Not odd.
		  o means: odd.


  n.o   n.o	     n.o  ===> and it Continues, we choose what number is odd and what is not by the index of number.
    | o	 |  o     |
	| |  |  |     |
	0 1  2  3     4 5  6 7       8 9  10 11      12  13 14  15
	5 5y 6  0y    5 9y 3 0y      9 8y 1  7y       5  3y  3  9y

	ODD =>  5 + 0 + 9 + 0 + 8 + 7 + 3 + 9 = 41

	to add pairs you have to multiple them by 2.

	if the number when you mutiple it by 2 if it is equal or bigger then 10 subtract from it 9
	if it is less than 10 leave it as it is.

	Pairs => (5 * 2) + (6 * 2) + (5 * 2) + (3 * 2) + (9 * 2) + (1 * 2) + (5 *2) + (3 * 2) 

		    |        |         |         |          |        |         |        |   
      	     	    1	+    3      +  1      +  6      +   9     +  2   +     1   +    6  = 29


	The algorithm says we should sum the results 41 + 29 = 70			
	and divide the sum by 10 if the remainder of the sum equals 0 its a valid card number else its not valid.

