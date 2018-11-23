#!/bin/bash
./0.out > inp0
./1.out < inp0 > inp1
./0.out > inp0
./2.out < inp0 > inp2
a=$(diff inp1 inp2)
while [ a ]
do	
	let count++
	./0.out > inp0
	./1.out < inp0 > inp1
	./0.out > inp0
	./2.out < inp0 > inp2
	a=$(diff inp1 inp2)
done
echo "ok"
