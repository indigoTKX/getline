# getline
Found it on my laptop. reads a line in std::cin and puts it in char* (automatically resizing it).
It reads a whole line from std::cin (until the end of the stream or the end-of-line symbol).
By defaut creates an array of chars with 100 elements, increasing it by another 100 elements, if the line doesn't fit yet.
When whole line is read, adjusts the size of an array, erasing extra elements.
