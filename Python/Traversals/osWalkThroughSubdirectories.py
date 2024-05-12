import os
import os.path
import sys

def main(sourceDirectory):
    for path, folders, fileNames in os.walk(sourceDirectory):
        for file in fileNames:
            with open(os.path.join(path, file), 'r') as sourceFile:
                with open(file, 'a') as writePath:
                    writePath.write(sourceFile.read())

main('/path/to/directory')
