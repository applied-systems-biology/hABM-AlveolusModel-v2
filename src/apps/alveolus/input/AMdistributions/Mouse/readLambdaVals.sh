#!/bin/bash
for i in 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
do
   val=`cat AM${i}/lambdaValue2.txt`
   echo $val
#   val2=4.375
#   result=$(expr $val*$val2 | bc)
#   touch AM${i}/lambdaValue2.txt
#   echo "0$result" > AM${i}/lambdaValue2.txt
done
