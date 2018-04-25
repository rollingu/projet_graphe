CFLAGS=-g
LDFLAGS=-lm

all : test_graphe test_liste_a

test_liste_a : liste_arc.o
	gcc -o $@ $^ $(LDFLAGS)

test_graphe : liste_arc.o graphe.o test_graphe.o
	gcc -o $@ $^ $(LDFLAGS)

%.o:%.c 
	gcc -c $(CFLAGS) $^

clean :
	rm *.o


