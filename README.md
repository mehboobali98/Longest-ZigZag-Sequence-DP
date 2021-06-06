# Longest Zig-Zag Sequence Dynamic Programming

## Problem Statement

A sequence of numbers is called a zig-zag sequence if the differences between successive numbers strictly alternate between positive and negative. The first difference (if one exists) may be either positive or negative. A sequence with two or fewer than two elements is trivially a zig-zag sequence.

For example, 1,7,4,9,2,5 is a zig-zag sequence because the differences (6,-3,5,-7,3) are alternately positive and negative. In contrast, 1,4,7,2,5 and 1,7,4,5,5 are not zig-zag sequences, the first because its first two differences are positive and the second because its last difference is zero.

In this problem, we have to compute the longest zig-zag subsequence using Dynamic Programming given a sequence of n integers as input.

## Approach

The algorithm to solve the problem has been implemented in three ways:

- recursive
- top-down
- bottom-up (Dynamic Programming)

## Time Complexity

The time complexity of the dynamic programming solution is: O(N^2)

# Directory Structure

<pre>
📦Longest-ZigZag-Sequence-DP
┣ 📜main.cpp
┗ 📜README.md
</pre>
