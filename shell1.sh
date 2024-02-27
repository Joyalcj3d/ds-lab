#!/bin/bash


read -p "Enter a non-negative number: " number


if [[ $number -lt 0 ]]; then
  echo "Error: Please enter a non-negative number."
  exit 1
fi


factorial=1

for (( i=1; i <= number; i++ )); do
  factorial=$(( factorial * i ))
done

echo "The factorial of $number is: $factorial"
