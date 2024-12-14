<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Before and After Array 📊</h1>
  <p>
    Given an array, the goal is to print, for each position in the array, how many times the number at that position was seen before and after that position.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    Write a C program to determine how many times a number appears before and after its position in an array.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>An integer <code>N</code>, the size of the array (1 ≤ N ≤ 1000).</li>
    <li><code>N</code> positive integers (1 ≤ a[i] ≤ 1000000) representing the array.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>For each position in the array, print two integers: <code>B</code> and <code>A</code>. 
      <ul>
        <li><code>B</code> is the number of times the number at that position appears before it in the array.</li>
        <li><code>A</code> is the number of times the number at that position appears after it in the array.</li>
      </ul>
    </li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Input:<br>
    10<br>
    1 2 1 1 2 2 2 1 2 1<br>
    Output:<br>
    0 4<br>
    0 4<br>
    1 3<br>
    2 2<br>
    1 3<br>
    2 2<br>
    3 1<br>
    3 1<br>
    4 0<br>
    4 0<br>
  </div>

  <h3>Example #2</h3>
  <div class="code-block">
    Input:<br>
    5<br>
    1 2 3 4 5<br>
    Output:<br>
    0 0<br>
    0 0<br>
    0 0<br>
    0 0<br>
    0 0<br>
  </div>

  <h3>Example #3</h3>
  <div class="code-block">
    Input:<br>
    5<br>
    1 2 3 2 1<br>
    Output:<br>
    0 1<br>
    0 1<br>
    0 0<br>
    1 0<br>
    1 0<br>
  </div>

  <h3>Example #4</h3>
  <div class="code-block">
    Input:<br>
    5<br>
    1 1 1 1 1<br>
    Output:<br>
    0 4<br>
    1 3<br>
    2 2<br>
    3 1<br>
    4 0<br>
  </div>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program must include the function:
      <ul>
        <li><code>void before_after(int *array, int n);</code></li>
        <li>Where <code>array</code> contains the list of input numbers, and <code>n</code> is the number of elements in the array.</li>
        <li>This function should print the number of occurrences before and after each position directly.</li>
      </ul>
    </li>
    <li>Use pointer arithmetic. Array subscripting (e.g., <code>array[i]</code>) is not allowed.</li>
    <li>Eliminate all counter variables (i, j), and do not use the <code>[]</code> operator in array manipulation.</li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o before_after before_after.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./before_after</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>The size of the array <code>N</code>.</li>
    <li>The array elements separated by spaces.</li>
  </ul>
</section>

</body>
</html>
