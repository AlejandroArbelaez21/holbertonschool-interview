#!/usr/bin/python3
# Write a method that determines if all the boxes can be opened.


def canUnlockAll(boxes):

    keybox = [0]

    for box in keybox:
        for key in boxes[box]:
            if key not in keybox and key < len(boxes):
                keybox.append(key)

    if len(keybox) == len(boxes):
        return (True)
    else:
        return (False)
