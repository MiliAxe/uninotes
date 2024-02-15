import enchant


def is_english_word(word: str):
    dictionary = enchant.Dict("en_US")
    return dictionary.check(word)


word = "hello"

print(is_english_word(word))
