import sys, os


if len(sys.argv) != 2:
	print("invalid number of arguments")


className = sys.argv[1]


if os.path.exists(className+".hpp"):
	print("error, header file already exist")
	exit()

if os.path.exists(className+".cpp"):
	print("error, cpp file already exist")
	exit()

hppFile = open(className+".hpp", 'a')
cppFile = open(className+".cpp", 'a')

hppFile.write("#ifndef " + className.upper() + "_HPP\n" +
	      "#define "  + className.upper() + "_HPP\n \n" + 
	      "class " + className + " {\n" +
	      "public: \n" +
	      "private: \n" +
	      "}; \n \n" +
	      "#endif");

cppFile.write("#include \"" + className + ".hpp\"")

hppFile.close()
cppFile.close()