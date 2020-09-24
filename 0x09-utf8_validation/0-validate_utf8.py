#!/usr/bin/python3
""" UTF-8 Validation """


def validUTF8(data):
    """ method that determines if a given data set represents a valid UTF-8 """
    byte = 0

    for index in data:
        convert_bin = format(index, '#010b')[-8:]
        if byte != 0:
            if not (convert_bin[0] == '1' and convert_bin[1] == '0'):
                return False
        else:
            for num in convert_bin:
                if num == '0':
                    break
                byte += 1
            if byte == 0:
                continue
            if byte == 1 or byte > 4:
                return False
        byte -= 1
    return byte == 0
