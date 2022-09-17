animal: basics.o animal.o 
	g++ basics.o animal.o -o animal

basics.o: basics.cpp animal.h
	g++ -c basics.cpp
	
animal.o: animal.cpp animal.h
	g++ -c animal.cpp
	
