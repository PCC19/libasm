all:
	@nasm *.s -f elf64
	@gcc -c *.c
	@gcc -no-pie *.o -o test

run: all
	./test
