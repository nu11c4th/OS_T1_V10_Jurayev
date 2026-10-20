# Operatsion tizimlar — 1-topshiriq, 10-variant

Bajardi: Jo'rayev Sardorbek

## Kompilyatsiya

A qism (Hello World, 4 bosqich):
gcc -E hello.c -o hello.i
gcc -S hello.i -o hello.s
gcc -c hello.s -o hello.o
gcc hello.o -o hello

B qism (10-variant):
gcc -Wall -Wextra main.c -o main

## Ishga tushirish

./hello
./main