#compile implementation
gcc -c implementation.c -o implementation
gcc -I ./ main.c implementation -o main
./main

