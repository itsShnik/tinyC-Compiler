/*
 * Name: Nikhil Shah
 * Roll No.: 17CS10030
 * Assignment 3 : Generating a Lexical Analyzer using FLEX
 */

/*
 * TOKENS
 * keyword
 * identifier
 * constant
 * string literal
 * punctuator
 */

// keywords
auto	break	case	char	const
continue	default		do		double
else	enum	extern	float	for
goto	if	inline		int		long
register	restrict	return	short
signed	sizeof	static	struct	switch
typedef		union	unsigned	void
volatile	while	_Bool	_Complex

Imaginary // the identifier
_Imaginary // the keyword

//Identifiers
hello
heli4
h_dd_ddd

a b c d e f g h i j k l m
n o p q r s t u v w x y z
A B C D E F G H I J K L M
N O P Q R S T U V W X Y Z

//Constants
//integer
0 1 2 3 4 5 6 7 8 9
45 999 334443
//float
2.998 1.997 2.0 98.1 3.5678
//exponent
1.0e-4 1e-7

// Escape Sequences
\a \b \f \n \r \t \v

//String literals
"Hello there"
"I am Shnik"
"What's up?"

// Punctuators
[ ] ( ) { } . ->
++ -- & * + - ~ !
/ % << >> < > <= >= == != ^ | && ||
? : ; ...
= *= /= %= += -= <<= >>= &= ^= |=

//Misellaneous
Let's type an "integer" 1234 , it's float version is 1234.0
Do you know ? -> case is volatile 
