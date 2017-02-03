TARGET = hello_world

INCDIR = include
SRCDIR = src
OBJDIR = obj
BINDIR = bin

CFLAGS = -g -I$(INCDIR)
LIBS =

C_SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(C_SOURCES))

dir_guard=@mkdir -p $(@D)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(dir_guard)
	$(CC) $(CFLAGS) -c $< -o $@

$(BINDIR)/$(TARGET): $(OBJECTS)
	$(dir_guard)
	$(CC) -o $@ $^ $(LIBS)

all: $(BINDIR)/$(TARGET)

clean:
	rm -f $(OBJECTS)
