# import re

# file = open("/usr/share/hunspell/en_US.dic", "r")
# words = re.sub("[^\w]", " ", file.read()).split()
# file.close()


def is_english_word(word: str):
    dictionary = {"Awesomeness", "Awesome", "very", "cool"}
    return word in dictionary


def is_sentence_english(sentence):
    if sentence == "":
        return True
    for index, _ in enumerate(sentence):
        if is_english_word(sentence[: index + 1]):
            print(f"Found word! {sentence[:index + 1]}")
            rest_english = is_sentence_english(sentence[index + 1 :])
            if rest_english:
                return True
    return False


print(is_sentence_english("Awesomenessverycooll"))
# print("a" in words.words(words))
