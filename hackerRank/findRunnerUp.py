if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    sortedArr = sorted(list(arr), reverse=True)
    maxNum = sortedArr[0]
    
    i = 1
    while sortedArr[i] == maxNum:
        i+=1
    print(sortedArr[i])