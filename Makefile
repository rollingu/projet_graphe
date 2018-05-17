CFLAGS=-g
LDFLAGS=-lm

all : test_graphe test_liste_a test_dijkstra

test_liste_a : test_liste_a.o arc.o liste_arc.o
	gcc -o $@ $^ $(LDFLAGS)

test_graphe : arc.o sommet.o liste_arc.o graphe.o test_graphe.o liste_i.o hachage.o
	gcc -o $@ $^ $(LDFLAGS)

test_dijkstra : test_dijkstra.o dijkstra.o liste_i.o arc.o sommet.o liste_arc.o graphe.o HEAP.o 
	gcc -o $@ $^ $(LDFLAGS)
%.o:%.c 
	gcc -c $(CFLAGS) $^

clean :
	rm *.o


