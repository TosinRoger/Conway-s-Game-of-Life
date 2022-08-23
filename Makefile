LIBS=src
INCLUDE_PATH=src/

exec: binaries
	gcc -Wall main.c $(wildcard binaries/*) -I$(INCLUDE_PATH) -o exec -lm `pkg-config allegro-5 allegro_main-5 allegro_font-5 allegro_primitives-5 --libs --cflags`
	./exec
	make clean

binaries:
	mkdir binaries/
	for dir in $(LIBS); do \
		cd $$dir; \
		gcc -c *.c -I ../; \
		mv *.o ../binaries; \
		cd -; \
	done

clean:
	rm -rf binaries/
	