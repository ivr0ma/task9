PROG = shape

$(PROG):
	g++ main.cpp circle.cpp rectangle.cpp cut_figure.cpp shape.h circle.h rectangle.h cut_figure.h -o $(PROG)
clean:
	rm -f *.o $(PROG)
run:
	./$(PROG)
