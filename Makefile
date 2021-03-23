driver.exe: Tag.o Tagdriver.o
	g++ Tag.o Tagdriver.o -o driver.exe -std=c++2a
Tag.o: Tag.cpp
	g++ -c Tag.cpp -o Tag.o -std=c++2a
Tagdriver.o: Tagdriver.cpp
	g++ -c Tagdriver.cpp -o Tagdriver.o -std=c++2a
clean:
	rm *.o driver.exe
