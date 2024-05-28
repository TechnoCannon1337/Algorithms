import os
import os.path
import sys

def main(sourceDirectory):
	for path, folders, fileNames in os.walk(sourceDirectory):
		os.makedirs(os.getcwd()+path, exist_ok=True)
		for file in fileNames:
			with open(os.path.join(path, file), 'r') as sourceFile:
				currentDirectory = os.getcwd()
				newPath = currentDirectory+path
				with open(os.path.join(newPath, file), 'a') as writePath:
					writePath.write(sourceFile.read())

targetDirectory = '/path/to/directory'
main(targetDirectory)
