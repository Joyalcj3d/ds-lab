#!/bin/bash

read -p "Enter a number: " num

if [[ $(($num % 2)) -eq 0 ]]; then
  echo "The numbewr $num is even."
else
  echo "The number $num is odd."
fi
