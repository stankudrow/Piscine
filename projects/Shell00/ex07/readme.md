0. at ex07 directory

1. untar "resources.tar.gz" archive

2. $> `patch a -o b < sw.diff`

3. to ensure all is correct:

	3.1. $> `diff a b > ab.diff` -> or whatever name you would prefer
	
	3.2. $> `diff ab.diff sw.diff` -> none should be printed
