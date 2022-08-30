

# Predicting the Joining Dates for New Hires

Objective
Write an algorithm to do an analysis of the recruitment funnel for an Open Position and
predict the joining date(s) of candidates


## Business Process
The recruitment process starts when we sign a contract with a client to start a new team of engineers to 
work on the client’s project. A typical requirement consists of  
- X number of Backend Developers 
- Y number of Frontend Developers 
- Z number of QA Analysts 
 
This requirement is passed on to the recruitment team, for hiring experienced professionals from the market. 
 
Each requirement is mapped to specific Job Titles and Job Descriptions. 
E.g. A requirement for 3 Backend developers will typically translate into 2 SSE and 1 SE. 
 
The interview process is a multi-step process 
 
1. HR Connect 
2. Technical Screening 
3. Detailed Technical Assessment - 1 
4. Detailed Technical Assessment - 2 
5. Culture Fitment Assessment 
6. Offer Process 
7. Offer Accepted 
8. Joined 
 
The candidates keep dropping at each level, and the end-state numbers at each stage look like a Funnel. 
## Input
There are 3 data sets available to you for use in this Algorithm. All these data sets will be in 
CSV files, and will have the following structure.
**Project Estimation**
- We want to hire SSE,SWD,SQA.
- By using Historical data.
- By using availability of panel per week.
| Title | Number of people needed  |
| ---- |----------| 
| SSE | 1|
| SSD | 2|
| SQA | 1|

The staffing requirement also has a Start Date, on which the recruitment process will start.

**Historical Funnel Data for Each Title**
|Stage|# of people who entered this stage| | |
|------|-----|--|--|
| Stage | SSE | SWD | SQA |
|HR Connect| 100  | 100|100|
|Technical Screening| 90  | 90|90|
|Detailed Technical Assessment-1| 70  | 70|70|
|Detailed Technical Assessment-2| 40  | 40|40|
|Culture Fitment Round| 30  | 30|30|
|Offer Process| 25  | 25|25|
|Offer Accepted| 20  | 20|20|
|Joined| 10  | 10|10|

**Interview Panel Availability per week**
|Stage|# of people who entered this stage| | |
|------|-----|--|--|
| Stage | SSE | SWD | SQA |
|HR Connect| 20  | 20|20|
|Technical Screening| 10  | 15|20|
|Detailed Technical Assessment-1| 5  | 10|10|
|Detailed Technical Assessment-2| 5  | 5|5|
|Culture Fitment Round| 3  | 3|3|
|Offer Process| 3  | 3|3|
|Offer Accepted| No Interview + X - NP  | No Interview + X - NP |No Interview + X - NP |
|Joined| | | |


## Output

The expected output is a Joining Date of NEW HIRES.
|Title|Nth-Hire|Joining Date|
|------|------|------|
|SSE|1|The New Joining Date|
|SWD|1|The New Joining Date|
|SWD|2|The New Joining Date|
|SQA|1|The New Joining Date|


This output should be exported as a CSV, so that it can be opened in Excel, the primary tool for project managers.
**Project Best Practices**
|S.No |Best Practices and standards|
|----|------|
|1|All code should be saved on a Github.com repository, and everyone should have access to the same master copy of code.|
|2|All the developers should check-in their code into GIT on a daily basis|
|3|Everyone who pushes code into GIT must ensure they do not leave the project code in an uncompilable / unstable state or overwrite other people’s changes|







