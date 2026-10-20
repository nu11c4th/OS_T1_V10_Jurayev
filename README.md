# Operatsion tizimlar — 10-variant

Bajardi: Jo'rayev Sardorbek

## 1-topshiriq

### A qism (Hello World, 4 bosqich)
gcc -E hello.c -o hello.i
gcc -S hello.i -o hello.s
gcc -c hello.s -o hello.o
gcc hello.o -o hello
./hello

### B qism (sonlarni ikkilik/sakkizlik/o'n oltilik sistemaga o'tkazish)
gcc -Wall -Wextra main.c -o main
./main

## 2-topshiriq (dinamik massivdan juft-toq sonlarni ajratish)

gcc -Wall -Wextra -g main2.c -o main2
./main2

valgrind --leak-check=full ./main2 > valgrind.txt