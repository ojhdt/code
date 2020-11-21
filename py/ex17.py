from sys import argv
from os.path import exists
script, from_file, to_file = argv
print(f"copying from {from_file} to {to_file}")
in_file = open(from_file)
indata = in_file.read()
print(f"The file is {len(indata)} long")
print(f"Does the output file exist?{exists(to_file)}")
print("hit RETURN to continue")
input()

out_file = open(to_file,'w')
out_file.write(indata)

out_file.close()
in_file.close()
