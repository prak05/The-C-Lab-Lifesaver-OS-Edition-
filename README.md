# The C Lab Lifesaver: OS Edition

## Your (Hopefully) Bug-Free Companion to OS Lab Programs!

### Project Overview
Ah, college labs. The late nights, the cryptic error messages, the sheer joy of seeing your `printf` actually work! This repository is a nostalgic collection of my C language lab programs, primarily focusing on Operating Systems concepts. Consider this your little treasure chest (or maybe a digital life raft?) of code that helped me (and hopefully will help you!) navigate the challenging waters of OS practicals.

I've put these up here not just for old times' sake, but to give a helping hand to anyone currently battling with these concepts. Maybe you'll find a different perspective, a clearer implementation, or just a good old `printf("Hello World");` moment of comfort. Good luck, future engineers! May your compilers be ever swift and your segmentation faults few.

### What's Inside This Time Capsule?

This repo is packed with C code demonstrating fundamental Operating Systems algorithms and concepts:

#### 1. CPU Scheduling Algorithms
* **FCFS.c (First-Come, First-Served):** The fairest of them all, sometimes.
* **SJF.c (Shortest Job First):** Where tiny tasks get VIP treatment.

#### 2. Page Replacement Algorithms
* **FIFO.c (First-In, First-Out):** The one that just throws out the oldest page, no questions asked.
* **LRU.c (Least Recently Used):** The sophisticated one that remembers what you haven't touched in ages.

#### 3. Memory Management Algorithms
* **bf.c (Best Fit):** Tries to find the snuggest spot for your program.
* **ff.c (First Fit):** Grabs the first available spot it sees – often the simplest.
* **wf.c (Worst Fit):** Leaves the biggest possible hole for future programs, bless its heart.

#### 4. Disk Scheduling Algorithms
* **scan.c (SCAN / Elevator Algorithm):** The one that sweeps back and forth, like a polite elevator.

#### 5. Process Management
* **fork.c (Process Creation using `fork()`):** Witnessing the magic (and sometimes chaos) of creating child processes.

### Technologies Used

* **Language:** C (The OG!)
* **Compiler:** GCC (or whatever old friend you use)
* **Environment:** Your favorite Linux terminal, or perhaps a nostalgic Windows Subsystem for Linux (WSL) setup.
* **Version Control:** Git & GitHub (because even college labs deserve proper versioning!)

### Getting Started (The Old School Way)

To run any of these programs, you'll need a C compiler (like GCC) installed on your system.

#### Prerequisites

* GCC (or Clang, MinGW, etc.)

#### Installation & Compilation

1.  **Clone this repository:**
    ```bash
    git clone [https://github.com/](https://github.com/)[YourGitHubUsername]/the-c-lab-lifesaver.git
    ```
2.  **Navigate into the project directory:**
    ```bash
    cd the-c-lab-lifesaver
    ```
3.  **Compile any `.c` file:**
    ```bash
    gcc your_program_name.c -o your_program_name
    ```
    (Replace `your_program_name.c` with the actual file name, e.g., `FCFS.c`)
4.  **Run the compiled program:**
    ```bash
    ./your_program_name
    ```
    (Or `.\your_program_name.exe` on Windows if you used MinGW)

### A Little Note for Fellow Students
These programs are here to help you understand the logic. **Please, please, please** use them as a reference and for learning, not just for copy-pasting your way through assignments. The real learning happens when you type out the code, debug it, and truly grasp the concepts. You got this! 💪

### Contributing (If you're feeling nostalgic too!)
If you spot a bug, have a more elegant solution, or just want to add another classic college C program, feel free to contribute!

1.  Fork this repository.
2.  Create your Feature Branch (`git checkout -b feature/your-awesome-fix`).
3.  Commit your Changes (`git commit -m 'Fix: A classic bug in FCFS'`).
4.  Push to the Branch (`git push origin feature/your-awesome-fix`).
5.  Open a Pull Request.

### License
These are college lab programs, so let's keep it simple. It's under the MIT License, which basically means you can do whatever you want with it, just give credit. See `LICENSE` for more info.

### Contact
[Your Name] - [Your Email Address]
Project Link: [https://github.com/[YourGitHubUsername]/the-c-lab-lifesaver](https://github.com/[YourGitHubUsername]/the-c-lab-lifesaver)
