## Test Plan

## High Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P |	Actual Output | Type of Test |
| --- | --- | --- | --- | --- | --- |
| H_01 | Check if the code is working as expected, by considering the test cases | Inputing Name | Mobile no. | Mobile No. | Scenario Based |
| H_02 | Check if the system handles boundary conditions | names | Done | Done | Boundary Based |
| H_03 | Check if same name can be written multiple times | name | pass | pass | Integration Based |
| H_04 | Check if we can search the multiple names written| name | all the info of the name |only getting 1st input name detils | Integration Based |
| H_05 | Check if we can delete the single name of mutiple file input | delete name info | delete single info | deletes all the multiple file of that name | Integration Based |



## Low Level Test Plan 

| Test ID | Function name | Description | Return type | Valid Input Range |	Output Range | Output for out of range/invalid inputs | Type of Test | Status (PASS/FAIL) |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| L_01 | Mobile No. | checks if phonebook is asking mobile no. after the name | name | mobile | mobile | PASS |
| L_02 | Name | checks if the given name is there in file | 0 and 1| 0 | unit test | PASS |

