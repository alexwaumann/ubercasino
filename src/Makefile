#
# File: Makefile
# Created: 04/01/2018
# Modified: 04/01/2018
#
# Basic makefile to start compiling and testing
# code. Many changes are planned to this file.
#

CXXFLAGS += --std=c++11

test: test_card test_hand

test_player: test_player.o player.o hand_t.o card_t.o
	g++ $(CXXFLAGS) -o test_player test_player.o player.o hand_t.o card_t.o
test_player.o: test_player.cpp player.h hand_t.h card_t.h
	g++ $(CXXFLAGS) -Wall -c test_player.cpp
player.o: player.cpp player.h hand_t.h card_t.h
	g++ $(CXXFLAGS) -Wall -c player.cpp
test_hand: test_hand_t.o hand_t.o card_t.o
	g++ $(CXXFLAGS) -o test_hand test_hand_t.o hand_t.o card_t.o
	./test_hand
test_hand_t.o: test_hand_t.cpp hand_t.h card_t.h
	g++ $(CXXFLAGS) -Wall -c test_hand_t.cpp
hand_t.o: hand_t.cpp hand_t.h card_t.h
	g++ $(CXXFLAGS) -Wall -c hand_t.cpp
test_card: test_card_t.o card_t.o
	g++ $(CXXFLAGS) -o test_card test_card_t.o card_t.o
	./test_card
test_card_t.o: test_card_t.cpp card_t.h
	g++ $(CXXFLAGS) -Wall -c test_card_t.cpp
card_t.o: card_t.cpp card_t.h
	g++ $(CXXFLAGS) -Wall -c card_t.cpp

clean:
	rm -rf *.o test_card test_hand
