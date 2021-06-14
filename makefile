# Leon e Guilherme

CFLAGS = -Wall -std=c99 # compilation flag

# object-file
objects = arvore.o

all: analisa_expressao

analisa_expressao: analisa_expressao.c $(objects)
	gcc analisa_expressao.c -o analisa_expressao $(objects) $(CFLAGS)
arvore.o: arvore.c arvore.h
	gcc -c arvore.c $(CFLAGS)
purge: clean
	-rm -f analisa_expressao
clean:
	-rm -f $(objects)