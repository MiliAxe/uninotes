def is_english_word(word: str):
    dictionary = {"Awesomeness", "Awesome", "very", "cool"}
    return word in dictionary


# Personal recursive approach
def is_sentence_english_recur(sentence):
    if sentence == "":
        return True
    for index, _ in enumerate(sentence):
        if is_english_word(sentence[: index + 1]):
            # print(f"Found word! {sentence[:index + 1]}")
            is_rest_english = is_sentence_english_recur(sentence[index + 1 :])
            if is_rest_english:
                return True
    return False


# Recurisve Geeks for geeks approach
def wordBreak(wordList, word):
    if word == "":
        return True
    else:
        wordLen = len(word)
        return any(
            [
                (word[:i] in wordList) and wordBreak(wordList, word[i:])
                for i in range(1, wordLen + 1)
            ]
        )


# Personal DP approach
def get_starting_points(dp_table, index):
    result = [0]
    for index in range(index):
        if dp_table[index] == 1:
            result.append(index)
    return result


def is_sentence_english_dp(sentence):
    is_sentence_upto = [0] * (len(sentence) + 1)
    for index in range(len(sentence) + 1):
        for starting_points in get_starting_points(is_sentence_upto, index):
            if is_english_word(sentence[starting_points:index]):
                is_sentence_upto[index] = 1

    return is_sentence_upto[len(sentence)]


# print(get_starting_points([0, 1, 0, 0, 0, 1], 1))

sentence = "Awesomenessverycool" * 300
# print(is_sentence_english_dp(sentence))
print(is_sentence_english_recur(sentence))
# print(wordBreak({"Awesomeness", "Awesome", "very", "cool"}, sentence))
# print(is_sentence_upto[: len(sentence) + 1])
# print("a" in words.words(words))
