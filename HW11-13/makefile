all: prog

prog: sensor.o temp_api.o
	gcc -o prog sensor.o temp_api.o

sensor.o: sensor.c
	gcc -c -o sensor.o sensor.c

temp_api.o: temp_api.c
	gcc -c -o temp_api.o temp_api.c

clean:
	del *.o
	del prog.exe