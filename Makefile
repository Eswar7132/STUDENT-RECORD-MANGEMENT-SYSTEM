CC = gcc 
CFLAGS = -Wall

OBJ = stud_main.o stud_add.o stud_del.o stud_mod.o stud_save.o stud_show.o read_file.o delete_allRecords.o reverse_Links.o sort_Record.o

student: $(OBJ)
    $(CC) $(OBJ) -o student

%.o: %.c student.h
    $(CC) $(CFLAGS) -c $<

clear:
    rm -f $(OBJ) student
