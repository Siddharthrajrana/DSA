def longest(text):
    longest=0
    for words in text.split():
        if len(words) > longest:
            longest = len(words)
    return longest


s = input("Please input a list of words to evaluate: ")
longest_word =longest(s)
print(longest_word)
