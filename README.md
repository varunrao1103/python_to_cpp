# Python to C++ Code Generation

This project converts Python code into optimized, system-specific C++ using the open-source Ollama model (gpt-oss:latest).
The generated C++ code is compiled and executed to achieve significantly better runtime performance.

# Results:
| Implementation | Execution Time |
| -------------- | -------------- |
| Python         | 10.466765 s    |
| C++ (Run 1)    | 0.235518 s     |
| C++ (Run 2)    | 0.215391 s     |
| C++ (Run 3)    | 0.218132 s     |
| **C++ Avg**    | **0.223017 s** |


Performance Improvement

🚀 ~47× faster than Python
