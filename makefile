#CC will be compiler to use
#CFLAGS will be options to pass
#SOURCES will be cpp files
#OBJECTS will be .o files
#EXECUTABLE will be completed program
# -c creates object files/does not link
# -g for debugging information
# -Wall for all warnings
CC = g++
STD = -std=c++11
CFLAGS = -c -g -Wall
SOURCES = play_game.cpp tool.cpp rock.cpp paper.cpp scissors.cpp rpsGame.cpp validation.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = group7RPS


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(STD) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $(STD) $< -o $@

clean:
	rm *o $(EXECUTABLE)
