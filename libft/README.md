### <stdlib.h>

ft_atoi			converts the initial portion of the string pointed to by (str = ASCII) to (int) representation.
ft_calloc		allocates enough space for (count) objects that are (size) bytes of memory each and returns a pointer to the allocated memory. The allocated memory is filled with bytes of value zero.

### <ctype.h>

ft_isascii		checks for ASCII characters.
ft_isalnum		checks for alphanumeric characters.
ft_isalpha		checks for alphabetic characters.
ft_isdigit		checks for decimal-digit characters.
ft_isprint		checks for printable characters.
ft_tolower		converts upper case letter to lower case.
ft_toupper		converts lower case letter to upper case.

### <strings.h>

ft_bzero		writes zeroed bytes to the string. If (n) is zero, bzero() does nothing.
ft_memset		writes a certain amount of bytes (len) of an specific value (c) to the string given string (b). It returns is first argument.
ft_memchr		locates the first occurrence of a specific character (c) in the given string (s). It returns a pointer to the byte located, or (NULL) if no such byte exists within (n) bytes.
ft_memcmp		compares byte string (s1) against byte string (s2). Both strings are assumed to be (n) bytes long. Returns 0 if ==; otherwise returns the difference between the first two differing bytes
ft_memmove		copies (len) bytes from string (src) to string (dst). The two strings may overlap; the copy is always done in a non-destructive manner. The return value is original (dst) value.
ft_memcpy		copy memory area.

### <string.h>

ft_strlen		finds the string length and returns it.
ft_strchr		locates a character in string (first occurrence).
ft_strrchr		locates a character in string (last occurence).
ft_strnstr		locates a substring in the string (size-bounded).
ft_strncmp		compares strings (size-bounded).
ft_strdup		saves a copy of a string (with malloc).
ft_strlcpy		size-bounded string copying.
ft_strlcat		size-bounded string concatenation.

###Extra

ft_itoa			converts integer to ASCII in a string.
ft_substr		extracts a substring from a string.
ft_strtrim		trims the beginning and the end of string with the specified characters.
ft_strjoin		concatenates two strings into a new string (with malloc).
ft_split		splits a string with a specified character as delimiter into an array of strings.
ft_striteri		applies a specified function to modify a string.
ft_strmapi		creates a new string from a modified string with a specified function.
ft_putchar_fd	outputs a character to given file.
ft_putstr_fd	outputs a string to given file.
ft_putendl_fd	outputs a string to given file with newline.
ft_putnbr_fd	outputs an integer to given file.
