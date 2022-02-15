#! /bin/bash
# Name: Dillon Farber
# CS 4350-Unix Systems Programming
# Section Number: 251
# Assignment #: 2
# Due Date: 2/16/2022 no later than 5:15 pm.

printf "%s" "Enter 4 Integer Values ----->"
read num1 num2 num3 num4

# 1)
printf "\n%s %d %d %d %d\n" "1) You Entered " $num1 $num2 $num3 $num4

# 2)
if [ $num1 -lt $num2 \& $num1 -lt $num3 \& $num1 -lt $num4 ]; then
smallest = $num1
elif [ $num2 -lt $num1 \& $num2 -lt $num3 \& $num2 -lt $num4 ]; then
smallest = $num2
elif [ $num3 -lt $num1 \& $num3 -lt $num2 \& $num3 -lt $num4 ]; then
smallest = $num3
else
then
smallest = $num4
fi
printf "%s %d\n" "2) The Smallest Integer is " $smallest

# 3)
if [ $num1 -gt $num2 \& $num1 -gt $num3 \& $num1 -gt $num4 ]; then
largest = $num1
elif [ $num2 -gt $num1 \& $num2 -gt $num3 \& $num2 -gt $num4 ]; then
largest = $num2
elif [ $num3 -gt $num1 \& $num3 -gt $num2 \& $num3 -gt $num4 ]; then
largest = $num3
else
then
largest = $num4
fi
printf "%s %d\n" "3) The Largest Integer is " $largest

# 4)
sum = $(($num1 + $num2 + $num3 + $num4))
printf "%s %d\n" "$num1 + $num2 + $num3 + $num4 is" $sum

# 5)
product = $(($num1 * $num2 * $num3 * $num4))
printf "%s %d\n" "$num1 * $num2 * $num3 * $num4 is" $product

# 6)
median = $((($num1 + $num2 + $num3 + $num4) / 4))
printf "%s %d\n" "($num1 + $num2 + $num3 + $num4)/4 is" $median

# 7)
sq1 = $(($num1 * $num1))
sq2 = $(($num2 * $num2))
sq3 = $(($num3 * $num3))
sq4 = $(($num4 * $num4))
printf "%s %d %s %d %s %d %s %d\n" "$num1 * $num1 = " $sq1 ", $num2 * $num2 = " $sq2 ", $num3 * $num3 = " $sq3 ", $num4 * $num4 = " $sq4

# 8)
