$(obj):
	g++ src/$(obj).cpp -o $(obj).o
	./$(obj).o < input/$(obj).input

clean:
	rm *.o
