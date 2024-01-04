def multiple_only_one_counter(number):
    multiple_number = 1
    multiple_string = "1"

    while multiple_number % number != 0:
        multiple_string += "1"
        multiple_number = int(multiple_string)

    return len(str(multiple_number))


def main():
    while True:
        try:
            number = int(input())
            print(multiple_only_one_counter(number))

        except EOFError:
            break


if __name__ == "__main__":
    main()
