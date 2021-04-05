cc=gcc
target=star
objects=main.o findNum.o print.o

$(target): $(objects)
	$(cc) -o $(target) $(objects) -lm

$(objects): Star.h

.PHONY : clean
clean :
	rm $(target) $(objects)

