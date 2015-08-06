#######################################################
#######################################################
#######################################################
##########                                   ##########
########## Author:  Roman Ulan               ##########
########## Mail:    roman.ulan@gmail.com     ##########
##########                                   ##########
#######################################################
#######################################################
#######################################################

#######################################################
##########        BEGIN User part            ##########
##########       You can change it           ##########
#######################################################
CFLAGS = -Wall -g
LDFLAGS =
SOURCES = ./main.c
NAME = prog
#######################################################
##########        END User part              ##########
#######################################################

#######################################################
##########      BEGIN Automation part        ##########
##########     You shouldn't change it       ##########
#######################################################
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $(NAME) -pthread

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@ -pthread

clean:
	rm -f $(OBJECTS)
	rm -f $(NAME)
#######################################################
##########       END Automation part         ##########
#######################################################
