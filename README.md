# Random Password Generator

This C++ program generates a random password based on user-specified length. It uses a combination of lowercase and uppercase letters, numbers, and special characters to create a strong, unpredictable password.

## Features

- User-defined password length
- Utilizes a mix of characters including:
  - Lowercase letters
  - Uppercase letters
  - Numbers
  - Special characters
- Random generation for enhanced security

## How to Use

1. Compile and run the program.
2. When prompted, enter the desired length for your password.
3. The program will generate and display a random password of the specified length.

## Implementation Details

- The program uses the C++ standard library's `rand()` function seeded with the current time to generate random numbers.
- The character set includes the entire alphabet (both cases), numbers from 0-9, and various special characters.
- The password is constructed by randomly selecting characters from this set.

## Code Structure

- `generator(int length)`: Function that generates the random password
- `main()`: Handles user input and output

## Potential Improvements

- Add options for user to specify character types to include/exclude
- Implement more sophisticated random number generation
- Add password strength evaluation
- Provide an option to generate multiple passwords at once
