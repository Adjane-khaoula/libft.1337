blah: blah.o
cc blah.o -o blah # runs thrid

blah.o: blah.h
cc -c blah.c -o blah.o #runs second

blah.c:
echo "int main() {return 0;}" > blah.c #runs first