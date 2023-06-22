import femaleProfile from "./images/femaleProfile.jpg"
import maleProfile from './images/maleProfile.jpg'

/* Array Destructing */
function Employees ({sel_Team,employees,handleEmployeeCardClick,handleSelChange})  {
    
  return(
    <main className="container">
      <div className=" row justify-content-center mt-3 mb-5">
          <div className="col-8">
            {/* Selection of lists */}
            <select className="form-select" onChange={handleSelChange}>
                <option value="TeamA">Team A</option>
                <option value="TeamB">Team B</option>
                <option value="TeamC">Team C</option>
                <option value="TeamD">Team D</option>

            </select>
          </div>
        </div>
        {/* Bootstrap defined CSS classes */}
        <div className=" row justify-content-center">
          <div className="col-8">
          <div className="card-collection">
            {
                /* Calling the employees array data and mapping them to a function*/
                employees.map((employee) => (
                    /* Two curly braces one for jsx and one for javascript */
                    <div id={employee.id} className={(employee.teamName === sel_Team ? 'card m-2 standout' : 'card m-2')} 
                      style={{ cursor: "pointer" }}
                      onClick={handleEmployeeCardClick}>
                    {(employee.gender === 'male') ? <img src={maleProfile} alt="male" className="card-img-top"/>
                                                    : <img src={femaleProfile} alt="male" className="card-img-top"/>}
                      <div className="card-body">
                        <h5 className="card-title">FullName : {employee.fullName}</h5>
                        <h5 className="card-text">Designation : {employee.designation}</h5>
                      </div>
                    </div>
                ))
            }
            </div>
          </div>
        </div>
        </main>
      )
}

export default Employees;