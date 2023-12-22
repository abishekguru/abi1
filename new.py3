#file opening and reading
f1 = open("sample1.txt",'w')
f1.write("hola amigo\nhello world\nhello yantravision")
f1.close()

file1 = open("sample1.txt",'r')
f = open("sample.txt",'a')
f.write("\n")
f.write(file1.read())
f.close()
file1.close()
with open("sample.txt",'r') as file:
	r = file.read()
	print("\n\n\n",r)
