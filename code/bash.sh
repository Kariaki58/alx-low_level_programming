#!/bin/bash
my_array=(one, two, three, four)
for item in ${my_array[@]}; do
	if [ $item != ${my_array[2]} ]; then
		echo $item
	fi
done
