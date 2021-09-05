
PROGRAM = dtostrf

CSOURCES = test.c dtostrf.c
COBJECTS = $(CSOURCES:.c=.o)

all: $(PROGRAM)

$(PROGRAM): $(COBJECTS)
	$(CC) -o $@ $(COBJECTS) $(LDFLAGS)

clean: execlean objclean

execlean:
	$(RM) $(PROGRAM)

objclean:
	$(RM) $(COBJECTS)

run: $(PROGRAM)
	./$(PROGRAM)

