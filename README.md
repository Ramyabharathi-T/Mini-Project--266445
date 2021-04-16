# SDLC Activity based learning

Build | Code Quality | Unity | Git Inspector
|---------|------------|-----------|----------------
[![C/C++ CI - Build Status](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/build.yml/badge.svg)](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/build.yml)|[![Code Quality - Static Code - Cppcheck](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/cppcheck.yml)[![CodeQuality Dynamic Code Analysis Valgrind](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/Dynamic.yml/badge.svg)](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/Dynamic.yml)[![CI-Coverage](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/gcov.yml/badge.svg)](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/gcov.yml)| [![Unit Testing - Unity](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/unity.yml/badge.svg)](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/unity.yml) | [![Contribution Check - Git Inspector](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/git_inspector.yml/badge.svg)](https://github.com/Rahul-S-Iyer/Mini-Project--266445/actions/workflows/git_inspector.yml)



## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`266445` | Rahul S Iyer  | F_3, F_4, F_5 | 1     | 1  |7  |7     
   

| Feature Id | Feature |
| -----------|---------|
|F_1| Option to load the scorecard |
|F_2| Save data to file |
|F_3| Update score in the file |
|F_4| Resetting the score|
|F_5| Randomising the set of questions to be displayed |


## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | Score was not being updated properly | Modified the logic of the program 
|2. | Score was not being reset to zero | Modified the mode of file opening from r+ to w |
|3. | Randomising the set of questions | Implemented rand and srand functions
|4. | Error while Building the makefile | Trial and Error and referred Mini Project Template

## Reference
The above code was taken from codewithc.com. My contributions to the code have been mentioned above and errors in the original code have been rectified.   
