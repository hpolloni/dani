grammar:
	java -jar antlr-4.7.1-complete.jar -Dlanguage=Cpp -no-listener -visitor SQLite.g4
	rm -fr src include
	mkdir -p src
	mkdir -p include
	mv *.cpp src/
	mv *.h include/
