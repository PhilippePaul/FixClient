INC=-Isrc

#compiler
CXX=g++
RM=rm -f
CPPFLAGS=-W -Wall -Werror
LDFLAGS=
LDLIBS=-lcurl -lcurlpp

SRCS=src/fixClient.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: fixClient

fixClient: $(OBJS)
	$(CXX) $(LDFLAGS) -o fixClient $(OBJS) $(LDLIBS)

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) *~ .depend

include .depend 
