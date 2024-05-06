# DutyRosterApp


Requirement : 

1) I have N number of staff for them I want to create Duty roster for a month

2) Each staff will give me there leave plan for that month upfront

3) The shift are divided into 3

	i)	The morning shift is from 8AM to 3PM

	ii)	The afternoon shift is from 2PM to 9PM

	iii) The night shift is from 8PM to Next day 9AM

4) Try to give every staff equal number of shifts

5) Maximum number of continuous same shift is 3 days. For example, one person can have 3 consecutive night or morning or afternoon shift.

6) After night shift that person cannot be assigned Morning or Evening shift, only choice for him/her is to continue night shift or should get a off. 
   No staff can have more than 3 consecutive night shift or any other shift.

7) There should be at least one person for each shift.

8) Each staff will get 4 week off per month.

9) Shifts should be scheduled in such a way that we must give one day off after 6 days of working. 

  In another word no one can have more than 6 consecutive working days.




User Story: Duty Roster App
As a manager of a company
I want a duty roster application built in C++
So that I can create a fair and efficient schedule for my staff for a month.

Acceptance Criteria:

The application allows me to enter the number of staff members (N).
Staff members can input their leave plans for the month, specifying dates.
The application supports three types of shifts:
Morning (8 AM - 3 PM)
Afternoon (2 PM - 9 PM)
Night (8 PM - 9 AM next day)
The application strives to assign an equal number of shifts to each staff member throughout the month.
The application enforces a maximum of 3 consecutive days for the same shift type (morning, afternoon, or night) for each staff member.
After a night shift, a staff member can only be assigned another night shift or a day off.
There must always be at least one staff member assigned to each shift.
Each staff member gets at least 4 full days off per month (can be spread across the month).
The application ensures no staff member works more than 6 consecutive days.
The application presents a clear and readable roster for the entire month, displaying staff names and assigned shifts for each day.
Additional Considerations:

The application should handle invalid input gracefully.
It would be beneficial if the application could offer suggestions or alternative schedules if it cannot generate a perfect fit based on the constraints.
The ability to save and export the generated roster in a common format (e.g., CSV) would be valuable.