import itertools




def generate_grids(words):
    

    pick = words.pop()
    words.add(pick)

    for candidates in itertools.product(words, repeat=len(pick)):
        for down in zip(*candidates):
            if ''.join(down) not in words:
                break
        else:
            yield candidates

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        words = []
        for i in range(n):
            words.append(input())

        words = set(words) #only unique words
        for grid in generate_grids(words):
            print(grid)