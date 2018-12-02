# Greedy Algorithms

In many algorithms, we have to make a sequence of choices to achieve a final optimal solution. Typical situations include the following.

- We have a set of tasks to finish. Each task takes a fixed amount of time and has a deadline, with a penalty for missing the deadline. We have to finish all the tasks, even if we cannot meet all the deadlines. Choose a sequence in which we minimize the overall penalty.

- We are clearing out our hostel room and we have only a single carton in which to pack our books. Any book that does not fit in the carton has to be discarded. Some books are more valuable to us than others, but also some books are larger than others, so it may be advantageous to choose two smaller, less valuable books, than a larger, more precious one. How should we fill the carton?


In a greedy solution, we proceed by making locally optimal choices. For instance, in the examples above, we may choose to.

- Take up as the next task to complete the one whose deadline is nearest.

- For each book, compute the ratio value divided by volume and add books in descending order of this ratio.

**Contents**
