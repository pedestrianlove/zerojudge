$(obj):
	g++ src/$(obj).cpp -o $(obj).o
	time (./$(obj).o < input/$(obj).input)

clean:
	rm *.o
