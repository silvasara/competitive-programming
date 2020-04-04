import sys

for line in sys.stdin:
    isUpper = 0
    new_line = ''
    size = len(line)
    for i in range(size - 1):
        if line[i] == " ":
            new_line += " "
        elif not isUpper:
            new_line += line[i].upper()
            isUpper = 1
        elif isUpper:
            new_line += line[i].lower()
            isUpper = 0

    print(new_line)
