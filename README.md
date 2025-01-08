# get_next_line

This repository contains my implementation of the **get_next_line** project from [42](https://www.42.fr/). The goal of this project is to read and return a line from a file descriptor (or multiple file descriptors, if you work on the bonus). By recreating this functionality, we practice handling buffer management, edge cases, and reading data in a controlled manner.

![Score of the project](docs/ProjectGrade.png)

## Table of Contents

1. [About the Project](#about-the-project)  
2. [Project Structure](#project-structure)  
3. [Getting Started](#getting-started)  
4. [Usage](#usage)  

Link to the subject: [Link to the subject PDF](docs/en.subject.pdf)

---

## About the Project

**get_next_line** is a function that reads from a file descriptor and returns one line at a time, including the newline character (if any). The behavior is similar to standard library functions such as `fgets()`, but with specific constraints:

- Your function should manage its own static or dynamic memory.
- Only one line is returned each time the function is called.  
- Once the function reaches the end of a file, it should return `NULL`.

**Key Challenges**:

- Handling partial reads and buffer management.
- Managing newline characters correctly and returning exactly one line each time.
- Freeing or preserving memory between consecutive calls of `get_next_line`.
- Dealing with edge cases (e.g., empty files, file descriptor errors, large buffers).

---

## Project Structure

- **source files**  
  All files need to be at the root of directory.

- **test**  
  Contain a main for testing and some input files for testing.

---

## Getting Started

### Prerequisites

- A C compiler (e.g., **GCC** or **Clang**).

### Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/get_next_line.git
   ```

2. **Go into the directory**
    ```bash
    cd get_next_line
    ```

3. **Compile and Test**
    ```bash
    gcc test/main_test.c get_next_line.c get_next_line_utils.c -o gnl
    ./gnl test/char.txt
    ```

## Usage

1. **Include the header**
    ```bash
    #include "get_next_line.h"
    ```

2. **Call the fonction**

    Example:

    ```bash
    int   main(void)
    {
        int   fd;
        char  *line;

        fd = open("example.txt", O_RDONLY);
        if (fd < 0)
            return (1);  // Handle error
        
        line = get_next_line(fd);
        while (line)
        {
            // Do something with 'line'
            free(line);
            line = get_next_line(fd);
        }
        close(fd);
        return (0);
    }
    ```

