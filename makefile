$(obj):
	g++ src/$(obj).cpp -o bin/$(obj).o
	bin/$(obj).o < input/$(obj).input
