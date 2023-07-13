$(CC)= gcc

project: main.o add.o print.o addatend.o sort.o delete.o insertmiddle.o insert.o printrev.o reverse.o
	$(CC) main.o add.o print.o addatend.o sort.o delete.o insertmiddle.o insert.o printrev.o reverse.o -o project
main.o:main.c header.h
	$(CC) -c main.c
add.o:add.c header.h
	$(CC) -c add.c
print.o:print.c header.h
	$(CC) -c print.c
addatend.o:addatend.c header.h
	$(CC) -c addatend.c
sort.o:sort.c header.h
	$(CC) -c sort.c
delete.o:delete.c header.h
	$(CC) -c delete.c
insertmiddle.o:insertmiddle.c header.h
	$(CC) -c insertmiddle.c
insert.o: insert.c header.h
	$(CC) -c insert.c
printrev.o:printrev.c header.h
	$(CC) -c printrev.c
reverse.o:reverse.c header.h
	$(CC) -c reverse.c

clean:
	rm*.o final
