n = input()
eng_list = list(map(int, input().split()))
french_list = list(map(int, input().split()))

print(len(eng_list.difference(french_list)))

