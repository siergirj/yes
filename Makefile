all: yes

yes: yes.c
	gcc -Wall -O2 -o yes yes.c

debug:
	gcc -Wall -g -O2 -o yes.debug yes.c
	gdb ./yes.debug

clean:
	rm yes
