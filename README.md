This is a collaborative project.
This is custom made printf function and been programmed to take a multiple argument using variadic functions and the like. It is simply a replica of the printf function in the stdio library. And yes it was a team project work to test our understanding of the various concepts which we have been taught so far. Open for any collaborations and corrections. Cheers! 
SUMMARY
This custom function _printf() prints to the stdout using the writes function. It is an independent function of the stdio library files.
It returns the total number of characters printed to the standard output not considering the null character which gives the indication of a end of strings after a prof=gram has been executed successfully.
It prints error or return -1 if an error is encountered during compilation (Check using echo $?)
This custom printf has the prototype: int _printf(const char format, ...);
This gives an indication it has one mandatory format argument, and an extra number of arguments that can be none, or many due to ellipsis sign

