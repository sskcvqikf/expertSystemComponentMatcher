CXXFLAGS = -O3 -Wall
CC = g++

all: mkbin gaming_preference.o work_preference.o interact.o utils.o gaming_interact.o work_interact.o
	g++ $(-O3 -Wall) -o ./bin/main main.cc \
	./bin/gaming_preference.o ./bin/work_preference.o ./bin/interact.o \
	./bin/work_interact.o ./bin/utils.o ./bin/gaming_interact.o
	
rmbin:
	rm -rf ./bin

mkbin:
	if [ ! -d ./bin ]; then \
		mkdir ./bin; \
	fi

interact.o:
	$(CC) -c $(CXXFLAGS) -o ./bin/interact.o ./interact.cc

gaming_interact.o:
	$(CC) -c $(CXXFLAGS) -o ./bin/gaming_interact.o gaming_interact.cc

work_interact.o:
	$(CC) -c $(CXXFLAGS) -o ./bin/work_interact.o work_interact.cc

gaming_preference.o:
	$(CC) -c $(CXXFLAGS) -o ./bin/gaming_preference.o ./preferences/gaming_preference.cc

work_preference.o:
	$(CC) -c $(CXXFLAGS) -o ./bin/work_preference.o ./preferences/work_preference.cc 

utils.o:
	$(CC) -c $(CXXFLAGS) -o ./bin/utils.o ./utils.cc 

