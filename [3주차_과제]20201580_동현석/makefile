cc = g++
target = exe
objects = main.o str.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : head.h

.PHONY : clean
clean: 
	rm $(target) $(objects)
