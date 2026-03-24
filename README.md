# Cricket Highlights Generation System

Project Overview:
This project is a Cricket Highlights Generation System developed using C++. It automatically detects and displays key match events such as boundaries, wickets, milestones, and match-winning moments from ball-by-ball input data.

Objectives:
- To automate cricket highlight detection
- To reduce manual effort in analyzing matches
- To provide quick and accurate match summaries


Features
-  Detects boundaries (4s and 6s)
-  Identifies wickets
-  Tracks milestones (50 & 100 runs)
-  Highlights high-scoring overs
-  Detects pressure situations (dot balls)
-  Identifies match-winning moment
-  Generates match summary

System Logic:
The system processes input data for each ball and applies conditions:
- `-1` → Wicket
- `0` → Dot ball
- `4` → Boundary (FOUR)
- `6` → Boundary (SIX)
- Tracks total score and milestones
- Groups every 6 balls as one over


Technologies Used:
- C++
- Standard Template Library (STL)
- Basic Data Structures (Vectors)


