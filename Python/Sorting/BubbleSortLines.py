def sortLines():
    sortArray = []
    with open('targetFile.txt', 'r') as targetFile:
        with open('sortFile.txt', 'a') as fileSorted:
            for line in targetFile:
                sortArray.append(line)
            sortSize = len(sortArray)
            for cell in range(sortSize):
                for item in range(0,sortSize-cell-1):
                    if sortArray[item] > sortArray[item+1]:
                        sortArray[item], sortArray[item+1] = sortArray[item+1], sortArray[item]
            for cell in sortArray:
                fileSorted.write(cell)
sortLines()
