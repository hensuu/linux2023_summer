all: s-tree alignment qsort

s-tree:
	gcc -Wall -o s-tree s-tree.c
alignment:
	gcc -Wall -o alignment alignment.c
qsort:
	gcc -Wall -o qsort qsort-mt.c -lpthread
clean:
	rm -f s-tree alignment qsort