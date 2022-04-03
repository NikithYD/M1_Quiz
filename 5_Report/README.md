# Badges
* Codacy badge
 [![Codacy Badge](https://app.codacy.com/project/badge/Grade/8a6d32ee47544a9697745d9ea8f2cdfd)](https://www.codacy.com/gh/NikithYD/M1_Quiz/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=NikithYD/M1_Quiz&amp;utm_campaign=Badge_Grade)

* Codiga badge
 ![Codiga Badge](https://api.codiga.io/project/32402/score/svg)
 
* Build on Linux
  [![Build CI - Linux](https://github.com/NikithYD/M1_Quiz/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/NikithYD/M1_Quiz/actions/workflows/c-cpp.yml)
 
* Build on Windows
  [![Build CI - Windows](https://github.com/NikithYD/M1_Quiz/actions/workflows/wind.yml/badge.svg)](https://github.com/NikithYD/M1_Quiz/actions/workflows/wind.yml)
  
* CPP check
  [![Analysis](https://github.com/NikithYD/M1_Quiz/actions/workflows/analysis.yml/badge.svg)](https://github.com/NikithYD/M1_Quiz/actions/workflows/analysis.yml)
 

# M1_Quiz
Quiz game implimentation<br />

The project is based upon quiz test implemented with the help os C-Programming. Quiz or online tests in the form of MCQs are widely used to test the knowledge of students in collages and schools. It helps in understanding whether student understand the concepts in a very precise and in efficient way.
 
# Objectives
 * To insert questions to the quiz creator developed
 * To register and login to the quiz platform 
 * Attempt quiz
# Block Diagram

<a href="https://drive.google.com/uc?export=view&id=1wwTnelEEgVietX7JHsDR-LrwD9E_h0C-"><img src="https://drive.google.com/uc?export=1wwTnelEEgVietX7JHsDR-LrwD9E_h0C-" style="width: 500px; max-width: 100%; height: auto" title="Click for the larger version." /></a>

# Working and Methodology
 * Initially the user has the choice to choose whether institute login or not
 * If institute login-
   * Enter the institute password "qwerty"
   * After entering the password, enter the questions, four choices and one correct answer, the correct answer should be in the form of numbers between 1-4
   * Exit after entering valid questions. Once exited, the data will be stored in the file which acts as the database to display the questions further. 
   * File used for data storage is in the form of .txt .
 * If Student login, i.e , initial choice "No" -
   * Enter username
   * Enter password
   * Enter gmail id
   * Enter age
   * Enter degree whether "BE" or not
   * Enter passout year
   If passout year is not 2022 and degree is not BE, then student cannot take the test. If the previous condition is satisfied and age is not 21, still the student is      not eligible to take the tests.
  * After successful registration-
   * Relogin using the same credentials used earlier, if the entered credentials doesn't match, then login attempt is failed. 
   * Once successful login, the questions that are stored in the file gets displayed automatically.
   * Enter the correct option by using any numbers between 1-4.
   * After successfully attempting, the program gets exited
  The maincprog.c file has the main function and the necessary initializations and call to the fuctions registration() and institutelogin() ,which are accessible from   regist.h and instlog.h header file respectively.
  registration function contain all the functions to get the input from student.
  inslog.h contains functions for institute login (institutionfileread), to store the entered questions and options,filecheck to check whether file is empty, to check   whether student credentials meet the requiremnts(name of func -passtest), relogin by student(reregistration), userdisplay11()- to display the stored question.
  Unit test is performed to test the functionality of the application. "testprog.c" is the main testing file.
   

 
