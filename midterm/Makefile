main: main.cpp
	g++ -o main main.cpp

edit:
	vim main.cpp

clean:
	rm main

submit:
	git add .
	read -r -p "Enter commit message: " COMMIT
	git commit -a -m \'$$COMMIT\'
	git push
