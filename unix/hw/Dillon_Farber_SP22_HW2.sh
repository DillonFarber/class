# Name: Dillon Farber
# CS 4350-Unix Systems Programming
# Section Number: 251
# Assignment #: 2
# Due Date: 2/16/2022 no later than 5:15 pm.

printf "\n%s" "Enter 4 Integer Values ----->"
read num1 num2 num3 num4

if [ -z $num1 ] || [ -z $num2 ] || [ -z $num3 ] || [ -z $num4 ];then
    printf "\nError - Must input 4 integer Values"
    printf "\n%s\n" "End of script"
    printf "%s\n" "Dillon Farber - 2 - 16 - 2022"
    exit 1
fi

# 1)
printf "\n%s %d %d %d %d\n" "1) You Entered " $num1 $num2 $num3 $num4

# 2)
if [ $num1 -lt $num2 ] && [ $num1 -lt $num3 ] && [ $num1 -lt $num4 ];then
    smallest=$num1
elif [ $num2 -lt $num1 ] && [ $num2 -lt $num3 ] && [ $num2 -lt $num4 ];then
    smallest=$num2
elif [ $num3 -lt $num4 ];then
    smallest=$num3
else
    smallest=$num4
fi
printf "%s %d\n" "2) The Smallest Integer is " $smallest

# 3)
if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ] && [ $num1 -gt $num4 ];then
    largest=$num1
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ] && [ $num2 -gt $num4 ]; then
    largest=$num2
elif [ $num3 -gt $num4 ];then
    largest=$num3
else
    largest=$num4
fi
printf "%s %d\n" "3) The Largest Integer is " $largest

# 4)
sum=$(($num1 + $num2 + $num3 + $num4))
printf "%s %d\n" "4) $num1 + $num2 + $num3 + $num4 is" $sum

# 5)
product=$(($num1 * $num2 * $num3 * $num4))
printf "%s %d\n" "5) $num1 * $num2 * $num3 * $num4 is" $product

# 6)
median=$((($num1 + $num2 + $num3 + $num4) / 4))
printf "%s %d\n" "6) ($num1 + $num2 + $num3 + $num4)/4 is" $median

# 7)
sq1=$(($num1 * $num1))
sq2=$(($num2 * $num2))
sq3=$(($num3 * $num3))
sq4=$(($num4 * $num4))
printf "%s %d %s %d %s %d %s %d\n" "7) $num1 * $num1 = " $sq1 ", $num2 * $num2 = " $sq2 ", $num3 * $num3 = " $sq3 ", $num4 * $num4 = " $sq4

# 8)
if [ $num1 -gt 0 ];then
    printf "%s" "8) $num1 is positive, "
else
    printf "%s" "8) $num1 is negative, "
fi
if [ $num2 -gt 0 ];then
    printf "%s" "$num2 is positive, "
else
    printf "%s" "$num2 is negative, "
fi
if [ $num3 -gt 0 ];then
    printf "%s" "$num3 is positive, "
else
    printf "%s" "$num3 is negative, "
fi
if [ $num4 -gt 0 ];then
    printf "%s" "$num4 is positive, "
else
    printf "%s\n" "$num4 is negative, "
fi

# 9)
posodd1=$(($num1 % 2))
posodd2=$(($num2 % 2))
posodd3=$(($num3 % 2))
posodd4=$(($num4 % 2))
if [ $posodd1 -eq 0 ];then
    printf "\n%s" "9) $num1 is even, "
else
    printf "\n%s" "9) $num1 is odd, "
fi
if [ $posodd2 -eq 0 ];then
    printf "%s" "$num2 is even, "
else
    printf "%s" "$num2 is odd, "
fi
if [ $posodd3 -eq 0 ];then
    printf "%s" "$num3 is even, "
else
    printf "%s" "$num3 is odd, "
fi
if [ $posodd4 -eq 0 ];then
    printf "%s\n" "$num4 is even "
else
    printf "%s\n" "$num4 is odd "
fi

# 10)
printf "%s " "10) All even numbers between 1 and $num3 :"
count=2
while [ $count -lt $num3 ];do
    printf "%d " $count
    count=$(($count + 2))
done

# 11)
printf "\n%s " "11) All odd numbers between 1 and $num3 :"
count=3
while [ $count -lt $num3 ];do
    printf "%d " $count
    count=$(($count + 2))
done

# 12)
number=1
fact=1
while [ $number -ne $num4 ];do
    number=$(($number + 1))
    fact=$((fact * number))
done
printf "\n%s %d\n" "12) Factorial of $num4 is: " $fact

# 13)
isPrime=1
if [ $num2 -le 0 ];then
    printf "%s\n" "13) Error $num2 is equal to less than 0 "
elif [ $(($num2 % 2)) -eq 0 ];then
    isPrime=0
fi
count=3
while [  $count -lt $(($num2 / 2)) ];do
    if [ $(($num2 % 2)) -eq 0 ];then
        isPrime=0 
        break;
    fi
    count=$(($count + 1))
done
if [ $isPrime -ne 0 ];then
    printf "%s\n" "13) $num2 is prime"
else
    printf "%s\n" "13) $num2 is not prime"
fi

printf "\n%s\n" "End of script"
printf "%s\n" "Dillon Farber - 2 - 16 - 2022"


exit 0