# MyLeetCode

[TOC]

## 1. Two Sum

1. It is feasible to use enumeration. **Time complexity O(n)**.
2. We can convert the enumeration to a hash map. **Time complexity O(1)**

## 1232. Check If It Is a Straight Line

1. This is a linear equation of two variables, we need to traverse all points.
2. To avoid the problem of numerical accuracy, convert division to multiplication calculation.
3. Calculate every point with the first and second points. **Time complexity O(n)**.
