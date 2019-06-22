String Rotation
Problem Description
Rotate a given String in specified direction by specified magnitude.

After each rotation make a note of first character of the rotated String, After all rotation are performed the accumulated first character as noted previously will form another string, say FIRSTCHARSTRING.

Check If FIRSTCHARSTRING is an Anagram of any substring of the Original string.

If yes print "YES" otherwise "NO".

Constraints
1 <= Length of original string <= 30

1<= q <= 10

Input Format
The first line contains the original string s. The second line contains a single integer q. The ith of the next q lines contains character d[i] denoting direction and integer r[i] denoting the magnitude.

Output
YES or NO

Test Case

Explanation
Example 1

Input

carrace 3 L 2 R 2 L 3

Output

NO

Explanation After applying all the rotations the FIRSTCHARSTRING string will be "rcr" which is not anagram of any sub string of original string "carrace".









----------------------------------------------------------********************************************************----------------------------------------









Number Sort Spell
Problem Description
Let's play the following game with two natural numbers (positive integers): Say, the two numbers are 5 and 6 and display them sorted as below in column A. We then spell the numbers and display them in column B. The spellings are then sorted and displayed in column C while column D displays the numerals corresponding to the sorted spellings:

Column A: Sorted numerals

Column B: Spelt numerals

Column C: Sorted Spelt numerals

Column D: Numerals corresponding to sorted spellings

Table 1:

A

B

C

D

5

Five

Five

5

6

Six

Six

6

Note that "Five" appears before "Six" in sorting order. Hence the numbers 5 and 6 are in the same order even when they are spelt!

Let's now generate two new numbers by adding up the corresponding numbers (in columns A and D) in the two rows in the table above: Table 2:

A

B

C

D

10

Ten

Ten

10

12

Twelve

Twelve

12

Again the spelt numbers appear in the sorted order corresponding to the numbers themselves. Proceeding in this fashion, we get the following tables: Table 3:

A

B

C

D

20

Twenty

Twenty

20

24

Twenty Four

Twenty Four

24

Table 4:

A

B

C

D

40

Forty

Forty

40

48

Forty Eight

Forty Eight

48

Table 5:

A

B

C

D

80

Eighty

Eighty

80

96

Ninety Six

Ninety Six

96

Table 6:

A

B

C

D

160

One Hundred Sixty

One Hundred Ninety Two

192

192

One Hundred Ninety Two

One Hundred Sixty

160

Table 7:

A

B

C

D

352

Three Hundred Fifty Two

Three Hundred Fifty Two

352

352

Three Hundred Fifty Two

Three Hundred Fifty Two

352

We observe that the two numbers 5 and 6 have "converged" to 352.

Here's another example with the two numbers being 100 and 50:

Table 1:

A

B

C

D

50

Fifty

Fifty

50

100

One Hundred

One Hundred

100

Table 2:

A

B

C

D

100

One Hundred

One Hundred

100

200

Two Hundred

Two Hundred

200

Table 3:

A

B

C

D

200

Two Hundred

Four Hundred

400

400

Four Hundred

Two Hundred

200

Table 4:

A

B

C

D

600

Six Hundred

Six Hundred

600

600

Six Hundred

Six Hundred

600

Thus 50 and 100 "converge" to 600. Note that the numbers converge when the spelled order breaks from the numeric order. Write a program to accept two natural numbers n1 and n2, perform the above calculations and output the "converged" number. The following are some example spellings of numbers - spell numbers in a similar fashion:

100: One Hundred

1729: One Thousand Seven Hundred Twenty Nine

99,999: Ninety Nine Thousand Nine Hundred Ninety Nine

output "Out of bounds" if any number exceeds 99,999 during calculations.

(Note: If the input numbers are the same, we would take the output to be that number itself.)

Constraints
N,M<=90000

Input Format
First Line contains two integers delimited by space <N M>

Output
Single line containing Converge number

"Out of bounds" if any number exceeds 99,999 during calculations.

Test Case

Explanation
Example 1: Input: 5 6 Output: 352

Example 2: Input: 1 1 Output: 1













----------------------------------------------------------********************************************************----------------------------------------









Jurrasic Park
Problem Description
Smilodon is a ferocious animal which used to live during the Pleistocene epoch (2.5 mya–10,000 years ago). Scientists successfully created few smilodons in an experimental DNA research. A park is established and those smilodons are kept in a cage for visitors.

This park consists of Grasslands(G), Mountains(M) and Waterbodies(W) and it has three gates (situated in grasslands only).Below is a sample layout.

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@1497cba8:image1.png

Before opening the park, club authority decides to calculate Safety index of the park. The procedure of the calculation is described below. Please help them to calculate.

Safety Index calculation

Assume a person stands on grassland(x) and a Smilodon escapes from the cage situated on grassland(y). If the person can escape from any of those three gates before the Smilodon able to catch him, then the grassland(x) is called safe else it is unsafe. A person and a Smilodon both takes 1 second to move from one area to another adjacent area(top, bottom, left or right) but a person can move only over grasslands though Smilodon can move over grasslands and mountains.

If any grassland is unreachable for Smilodon(maybe it is unreachable for any person also), to increase safe index value Club Authority use to mark those grasslands as safe land. Explained below

com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@1497cba8:image2.png

For the above layout, there is only one gate at (4,6)

Y is the position of Smilodon’s cage

X is not safe area

Z is a safe area as is it not possible for smilodon to reach z

Safety index=(total grassland areas which are safe*100)/total grassland area

Constraints
3<= R,C <= 10^3

Gates are situated on grasslands only and at the edge of the park

The cage is also situated in grassland only

The position of the cage and the position of three gates are different

Input Format
The first line of the input contains two space-separated integers R and C, denoting the size of the park (R*C)

The second line contains eight space-separated integers where

First two integers represent the position of the first gate

3rd and 4th integers represent the position of second gate

5th and 6th integers represent the position of third gate respectively

The last two integers represent the position of the cage

Next R lines, each contains space separated C number of characters. These R lines represent the park layout.

Output
Safety Index accurate up to two decimal places using Half-up Rounding method

Test Case

Explanation
Example 1

Input

4 4

1 1 2 1 3 1 1 3

G G G G

G W W M

G G W W

M G M M

Output

75.00

Explanation

G

G

G

G

G

W

W

M

G

G

W

W

M

G

M

M



Mountains

4



Gates- Safe Areas

3



Other Safe Areas

3



Waters

4



Cage Pos.-unsafe

1



Other unsafe areas

1

Safety Index= (6*100)/8

Example 2

Input

4 6

1 6 3 6 4 6 3 4

W M G G G G

M G W G M M

G W G G G G

W G W M W G

Output

69.23










----------------------------------------------------------********************************************************----------------------------------------

















----------------------------------------------------------********************************************************----------------------------------------

















----------------------------------------------------------********************************************************----------------------------------------

















----------------------------------------------------------********************************************************----------------------------------------
