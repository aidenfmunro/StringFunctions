CFLAGS = -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE

IFLAGS = -I./headers/

all: a.exe object/main.o object/stringfunctions.o

a.exe: object/main.o object/stringfunctions.o
	g++ object/main.o object/stringfunctions.o

object/main.o: src/main.cpp
	g++ $(IFLAGS) $(CFLAGS) -c src/main.cpp -o object/main.o

object/stringfunctions.o: src/stringfunctions.cpp
	g++ $(IFLAGS) $(CFLAGS) -c src/stringfunctions.cpp -o object/stringfunctions.o
	
