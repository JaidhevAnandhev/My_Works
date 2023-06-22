import React, { useEffect } from 'react';
import './App.css'
import Employees from './Employees'
import Footer from './Footer'
import Header from './Header'
import { useState } from 'react';
import GroupTeamMembers from './GroupTeamMembers';
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom';
import Nav from './Nav';
import NotFound from './NotFound';

function App() {
  const [sel_Team, setSel_Team] = useState(JSON.parse(localStorage.getItem('selTeam')) || 'TeamA')
    const [employees, setEmployees] = useState(JSON.parse(localStorage.getItem('employeeList')) ||[{
        id: 1,
        fullName: "Bob Jones",
        designation: "JavaScript Developer",
        gender: "male",
        teamName: "TeamA"
      },
      {
        id: 2,
        fullName: "Jill Bailey",
        designation: "Node Developer",
        gender: "female",
        teamName: "TeamA"
      },
      {
        id: 3,
        fullName: "Gail Shepherd",
        designation: "Java Developer",
        gender: "female",
        teamName: "TeamA"
      },
      {
        id: 4,
        fullName: "Sam Reynolds",
        designation: "React Developer",
        gender: "male",
        teamName: "TeamB"
      },
      {
        id: 5,
        fullName: "David Henry",
        designation: "DotNet Developer",
        gender: "male",
        teamName: "TeamB"
      },
      {
        id: 6,
        fullName: "Sarah Blake",
        designation: "SQL Server DBA",
        gender: "female",
        teamName: "TeamB"
      },
      {
        id: 7,
        fullName: "James Bennet",
        designation: "Angular Developer",
        gender: "male",
        teamName: "TeamC"
      },
      {
        id: 8,
        fullName: "Jessica Faye",
        designation: "API Developer",
        gender: "female",
        teamName: "TeamC"
      },
      {
        id: 9,
        fullName: "Lita Stone",
        designation: "C++ Developer",
        gender: "female",
        teamName: "TeamC"
      },
      {
        id: 10,
        fullName: "Daniel Young",
        designation: "Python Developer",
        gender: "male",
        teamName: "TeamD"
      },
      {
        id: 11,
        fullName: "Adrian Jacobs",
        designation: "Vue Developer",
        gender: "male",
        teamName: "TeamD"
      },
      {
        id: 12,
        fullName: "Devin Monroe",
        designation: "Graphic Designer",
        gender: "male",
        teamName: "TeamD"
      }]);

      useEffect(() => {
          localStorage.setItem('employeeList', JSON.stringify(employees))
      },[employees])

      useEffect(() => {
        localStorage.setItem('selTeam', JSON.stringify(sel_Team))
      },[employees])
    
      const handleSelChange = (e) => {
        setSel_Team(e.target.value);
      }

      const handleEmployeeCardClick = (e) => {
          const transformedEmployees = employees.map((employee) => 
          employee.id === parseInt(e.currentTarget.id)
          ?(employee.teamName === sel_Team )? {...employee, teamName: ''} : {...employee, teamName: sel_Team}
          : employee)

          setEmployees(transformedEmployees);
      }
      return(
        <Router>
          <Nav />
          {/* props drilling in Header child component */}
          <Header sel_Team = {sel_Team}
                  teamMemberCount = {employees.filter((employee)=>employee.teamName === sel_Team).length}/>
          <Routes>
            <Route path='/'
              element={
              /* props drilling in Employees component */
              <Employees sel_Team = {sel_Team} 
              employees = {employees}
              handleEmployeeCardClick = {handleEmployeeCardClick}
              handleSelChange = {handleSelChange}/>
              }></Route>
            <Route path='/GroupTeamMembers' 
            element = {<GroupTeamMembers employees = {employees} 
            sel_Team = {sel_Team} 
            setSel_Team = {setSel_Team}/>}></Route>
            <Route path='*' element = {<NotFound />}></Route>
          </Routes>
          <Footer />
        </Router>
      )
}

export default App
