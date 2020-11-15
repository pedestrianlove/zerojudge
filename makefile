$(NAME):
	g++ src/$(NAME).cpp -o bin/$(NAME).o
	bin/$(NAME).o < input/a015.input
