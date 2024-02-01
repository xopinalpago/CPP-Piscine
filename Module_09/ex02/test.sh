#!/bin/bash

for (( c=1; c<=5000; c++ ))
do
	./PmergeMe `shuf -i 1-5000 -n $c | tr "\n" " "`
done