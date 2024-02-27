#!/bin/bash


read -p "Enter the number of elements: " num_elements


if [[ $num_elements -eq 0 ]]; then
  echo "Error: Please enter a non-zero number of elements."
  exit 1
fi

read -p "Enter the first number: " first_num
largest=$first_num

for (( i=1; i < num_elements; i++ )); do
  read -p "Enter number $(($i + 1)): " current_num
 
  if [[ $current_num -gt $largest ]]; then
    largest=$current_num
  fi
done

echo "The largest number is: $largest"
