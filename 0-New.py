import os

folder = input("Folder: ")
fileName = input("Problem: ");
extension = input("Language: ");

try:
	os.mkdir(folder + "\\" + fileName);
except OSError:
	pass

cHead = """#include <bits/stdc++.h>
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define INF 1<<29;

using namespace std;

int main(){


	return 0;
}"""


f = open(folder + "\\" + fileName + "\\" + fileName + "." + extension,"w+")
if(extension == "cpp"):
	f.write(cHead)
open(folder + "\\" + fileName + "\\" + "input.txt","w+")
open(folder + "\\" + fileName + "\\" + "output.log","w+")

print("Folder and files created succesfully. Good luck!")

