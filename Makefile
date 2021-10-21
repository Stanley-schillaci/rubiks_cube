CC = gcc
CFLAGS= -g -Wall -Wextra -std=c99 -O3 `pkg-config --cflags sdl SDL_image` `pkg-config --cflags gtk+-3.0`
LDLIBS= -pthread -lpthread `pkg-config --libs sdl SDL_image` `pkg-config --libs gtk+-3.0`

stan: structure/rubik.o structure/solution.o structure/rotation.o structure/rubikTools.o structure/switchRotation.o structure/colorNeutral.o fridrich/fridrich.o fridrich/whiteCross.o fridrich/firstTwoLayer.o fridrich/orientationLastLayer.o fridrich/permutationLastLayer.o stan.o
			$(CC) -g -o stan rubik.o solution.o  rotation.o rubikTools.o switchRotation.o colorNeutral.o fridrich.o whiteCross.o firstTwoLayer.o orientationLastLayer.o permutationLastLayer.o stan.o $(LDLIBS)

martin: structure/rubik.o structure/solution.o structure/rotation.o structure/rubikTools.o structure/switchRotation.o classique/whiteFace.o classique/secondLayer.o classique/classiqueResolution.o martin.o classique/thirdLayer.o
			$(CC) -g -o martin rubik.o solution.o rotation.o rubikTools.o switchRotation.o whiteFace.o secondLayer.o martin.o thirdLayer.o classiqueResolution.o $(LDLIBS)

erwann: structure/colorNeutral.o structure/rubik.o structure/solution.o structure/cube.o structure/rotation.o structure/rubikTools.o structure/switchRotation.o fridrich/fridrich.o fridrich/whiteCross.o fridrich/firstTwoLayer.o fridrich/orientationLastLayer.o fridrich/permutationLastLayer.o classique/whiteFace.o classique/secondLayer.o classique/classiqueResolution.o classique/thirdLayer.o ToMachine.o erwann.o
			$(CC) -g -o erwann colorNeutral.o rubik.o solution.o  cube.o rotation.o rubikTools.o switchRotation.o fridrich.o whiteCross.o firstTwoLayer.o orientationLastLayer.o permutationLastLayer.o classiqueResolution.o thirdLayer.o secondLayer.o whiteFace.o ToMachine.o erwann.o $(LDLIBS)
main: structure/colorNeutral.o structure/rubik.o structure/solution.o structure/cube.o structure/rotation.o structure/rubikTools.o structure/switchRotation.o fridrich/fridrich.o fridrich/whiteCross.o fridrich/firstTwoLayer.o fridrich/orientationLastLayer.o fridrich/permutationLastLayer.o classique/whiteFace.o classique/secondLayer.o classique/classiqueResolution.o classique/thirdLayer.o ToMachine.o main.o
			$(CC) -g -o main colorNeutral.o rubik.o solution.o  cube.o rotation.o rubikTools.o switchRotation.o fridrich.o whiteCross.o firstTwoLayer.o orientationLastLayer.o permutationLastLayer.o classiqueResolution.o thirdLayer.o secondLayer.o whiteFace.o ToMachine.o main.o $(LDLIBS)
main:


stan.o: stan.c
			$(CC) $(CFLAGS) -c stan.c
martin.o: martin.c
			$(CC) $(CFLAGS) -c martin.c
erwann.o: erwann.c
			$(CC) $(CFLAGS) -c erwann.c
main.o: main.c
			$(CC) $(CFLAGS) -c main.c

fridrich/fridrich.o: fridrich/fridrich.c
			$(CC) $(CFLAGS) -c fridrich/fridrich.c

fridrich/whiteCross.o: fridrich/whiteCross.c
			$(CC) $(CFLAGS) -c fridrich/whiteCross.c

fridrich/firstTwoLayer.o: fridrich/firstTwoLayer.c
			$(CC) $(CFLAGS) -c fridrich/firstTwoLayer.c

fridrich/orientationLastLayer.o: fridrich/orientationLastLayer.c
			$(CC) $(CFLAGS) -c fridrich/orientationLastLayer.c

fridrich/permutationLastLayer.o: fridrich/permutationLastLayer.c
			$(CC) $(CFLAGS) -c fridrich/permutationLastLayer.c

classique/classiqueResolution.o: classique/classiqueResolution.c
			$(CC) $(CFLAGS) -c classique/classiqueResolution.c

classique/whiteFace.o: classique/whiteFace.c
			$(CC) $(CFLAGS) -c classique/whiteFace.c

classique/secondLayer.o: classique/secondLayer.c
			$(CC) $(CFLAGS) -c classique/secondLayer.c

classique/thirdLayer.o: classique/thirdLayer.c
			$(CC) $(CFLAGS) -c classique/thirdLayer.c

structure/colorNeutral.o: structure/colorNeutral.c
			$(CC) $(CFLAGS) -c structure/colorNeutral.c
structure/cube.o: structure/cube.c
			$(CC) $(CFLAGS) -c structure/cube.c
structure/switchRotation.o: structure/switchRotation.c
			$(CC) $(CFLAGS) -c structure/switchRotation.c
structure/rubikTools.o:	structure/rubikTools.c
			$(CC) $(CFLAGS) -c structure/rubikTools.c
structure/rotation.o: structure/rotation.c
			$(CC) $(CFLAGS) -c structure/rotation.c
ToMachine.o: ToMachine.c
			$(CC) $(CFLAGS) -c ToMachine.c
structure/solution.o: structure/solution.c
			$(CC) $(CFLAGS) -c structure/solution.c
structure/rubik.o: structure/rubik.c
			$(CC) $(CFLAGS) -c structure/rubik.c


clean:
			rm *.o -f stan erwann martin main
