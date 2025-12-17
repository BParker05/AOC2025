with open("inputs\day1.txt", "r") as input:
    position = 50
    passes = 0

    for line in input:
        print(f"Position: {position}  |  Rotation: {line.strip()}")
        if line[0] == 'L':
            position -= int(line[1:])%100
            if position < 0:
                position += 100
        else:
            position += int(line[1:])%100
            if position > 99:
                position -= 100
        if position == 0:
            passes += 1

    print("Passes: " + str(passes))

# Answer is 1034