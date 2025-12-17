# Couldn't math my way through this one, just brute forced it

with open("inputs\day1.txt", "r") as input:
    position = 50
    passes = 0

    for line in input:
        for i in range(int(line[1:])):
            if line[0] == 'L':
                position = (position + 100 - 1) % 100
            else:
                position = (position + 1) % 100
            if position == 0:
                passes += 1
    print(f"Passes: {str(passes)}")

# Answer is 6166