#!/bin/sh
len=$#
sum=0
for val in "$@"; do
    sum=$(($sum + $val))
done
echo "Кол-во аргументов $len"
avrg=$(($sum/$len))
echo "Cр.арифм. $avrg"