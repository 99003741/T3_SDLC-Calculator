Test cases of numberic conversion and currency conversion :

1.in currency conversion we need to enter the datatype as Int,double ,float we cannot enter the datatype as char.

2.in currency conversion we need to convert the india rupee to dollar,euro,pound,yen and vice versa

For example:-

| Indian Rupee |               inv. 1.00 INR |

| US Dollar |        inv. 1.00 INR |    into        | [72.707267]

| Euro |             inv. 1.00 INR |    into        | [88.147832]

| British Pound |    inv. 1.00 INR |    into        | [100.371298]

| Australian Dollar|  inv. 1.00 INR |    into       | [56.324976]

| Canadian Dollar |  inv. 1.00 INR |    into       | [57.229480]

| Singapore Dollar |  inv. 1.00 INR |    into       | [54.835761]

| Japanese Yen |  inv. 1.00 INR |    into       [0.693853]


3.converting the number decimal into hex ,binary ,octal.

| 0 | 0 | 0 | 0 |
| --- | --- | --- | --- |
| 1 | 1 | 1 | 1 |
| 2 | 2 | 2 | 10 |
| 3 | 3 | 3 | 11 |
| 4 | 4 | 4 | 100 |
| 5 | 5 | 5 | 101 |
| 6 | 6 | 6 | 110 |
| 7 | 7 | 7 | 111 |
| 8 | 8 | 10 | 1000 |
| 9 | 9 | 11 | 1001 |
| A | 10 | 12 | 1010 |
| B | 11 | 13 | 1011 |
| C | 12 | 14 | 1100 |
| D | 13 | 15 | 1101 |
| E | 14 | 16 | 1110 |
| F | 15 | 17 | 1111 |
| 10 | 16 | 20 | 10000 |
| 20 | 32 | 40 | 100000 |
| 40 | 64 | 100 | 1000000 |
| 80 | 128 | 200 | 10000000 |


High level requirement of arithmetic and BMI:

| S.NO. | ID | FEATURE | INPUT 1 | INPUT 2 | OUTPUT | CATEGORY |
| --- | --- | --- | --- | --- | --- | --- |
| 1. | HL1 | Addition | 2 | 32 | 34 | Requirement |
| 2. | HL2 | Subtraction | 34 | 10 | 24 | Requirement |
| 3. | HL3 | Multiplication | 4 | 10 | 40 | Requirement |
| 4. | HL4 | Division | 40 | 2 | 20 | Requirement |
| 5. | HL5 | BMI | 74.84 | 1.88 | 21.18 | Requirement |

Low level requirement of arithmetic and BMI:

| S. No. | ID | FEATURE | INPUT1 | INPUT2 | OUTPUT | CATEGORY |
| --- | --- | --- | --- | --- | --- | --- |
| 1. | LL1 | Addition | 2 | 5 | 7 | Requirement |
| 2. | LL2 | Addition | 1000000 | 1345 | 1001345.000000 | Boundary |
| 3. | LL3 | Addition | -2 | 9 | 7 | Scenario |
| 4. | LL4 | Subtraction | 5 | 3 | 2 | Requirement |
| 5. | LL5 | Subtraction | 1000000 | 1345 | 998655.000000 | Boundary |
| 6. | LL6 | Subtraction | -3 | -5 | -8 | Scenario |
| 7. | LL7 | Multiplication | 2 | 5 | 10 | Requirement |
| 8. | LL8 | Multiplication | 1000000 | 1345 | 1344999936.000000 | Boundary |
| 9. | LL9 | Multiplication | 3 | -5 | -15 | Scenario |
| 10. | LL10 | Division | 10 | 5 | 2 | Requirement |
| 11. | LL11 | Division | 1000000 | 1345 | 743.494446 | Boundary |
| 12. | LL12 | Division | -10 | 5 | -2 | Scenario |
| 13. | LL13 | BMI | 74.84 | 1.88 | 21.8 | Requirement |
| 14. | LL14 | BMI | 102.06 | 1.80 | 31.38 | Boundary |
| 15. | LL15 | BMI | 61.23 | 1.63 | 23.17 | Scenario |

Test Plan for Statistics and Investment Calculation
![Rajat_Test](https://user-images.githubusercontent.com/78871103/107950436-b53ada80-6fbc-11eb-852e-68885c5876ab.PNG)


| Test ID | Requirement | Expected Output |
| --- | --- | --- |
| LLR1 | sin(30)  | -0.988032 |
| LLR2 | cos(30)| 0.1542  |
| LLR3 | tan(30) | -6.405331 |
| LLR4 | sin(60)  | -0.304811 |
| LLR5 | cos(60)| -0.9524 |
| LLR6 | tan(60) | 0.32004  |




