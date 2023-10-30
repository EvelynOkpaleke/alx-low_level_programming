This is a README file for 0x15. C - File I/O.

The tasks involved in this project are to write the following functions;

That reads a text file and prints it to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);

That creates a file.
Prototype: int create_file(const char *filename, char *text_content);

That appends text at the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);

That copies the content of a file to another file.

that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
