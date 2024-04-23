def split_and_join(line):
    splitLine = line.split(" ")
    joinLine = "-".join(splitLine)
    return joinLine

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)