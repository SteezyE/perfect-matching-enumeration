CC=gcc
CCFLAGS=-march=native -Ofast -lm -flto -Wno-alloc-size-larger-than
TARGETS=test test.o uno.o cheap.o matching.o

all: $(TARGETS)

test: test.o uno.o cheap.o matching.o
	$(CC) $(CCFLAGS) -o $@ $^

test.o: test.c
	$(CC) $(CCFLAGS) -c $<	

uno.o: uno.c uno.h
	$(CC) $(CCFLAGS) -c $<	

cheap.o: extern/cheap.c extern/matchmaker.h
	$(CC) $(CCFLAGS) -c $<

matching.o: extern/matching.c extern/matchmaker.h
	$(CC) $(CCFLAGS) -c $<

.PHONY: clean run
clean:
	rm -rf $(TARGETS)

run:
	./test
