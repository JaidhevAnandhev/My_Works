import { useState } from "react";

const GroupTeamMembers = ({employees, sel_Team, setSel_Team}) => {

    const [groupedEmployees, setGroupedEmployees] = useState(groupTeamMemFn());

    function groupTeamMemFn() 
    {
        var team = [];

        /* Filter the team members accordingly*/
        var teamAMembers = employees.filter((employee) => employee.teamName === 'TeamA');
        var teamA = {team:'TeamA', members:teamAMembers, collapsed : sel_Team ===   'TeamA' ?false:true}
        team.push(teamA);

        var teamBMembers = employees.filter((employee) => employee.teamName === 'TeamB');
        var teamB = {team:'TeamB', members:teamBMembers, collapsed : sel_Team ===   'TeamB' ?false:true}
        team.push(teamB);

        var teamCMembers = employees.filter((employee) => employee.teamName === 'TeamC');
        var teamC = {team:'TeamC', members:teamCMembers, collapsed : sel_Team ===   'TeamC' ?false:true}
        team.push(teamC);

        var teamDMembers = employees.filter((employee) => employee.teamName === 'TeamD');
        var teamD = {team:'TeamD', members:teamDMembers, collapsed : sel_Team ===   'TeamD' ?false:true}
        team.push(teamD);

        return team;
    }

    function handleTeamClick (e)
    {
        var newGroupData = groupedEmployees.map((groupedData) => groupedData.team === e.currentTarget.id 
                                                                        ? {...groupedData, collapsed: !groupedData.collapsed} 
                                                                        : groupedData);
        setGroupedEmployees(newGroupData);
        setSel_Team(e.currentTarget.id);                                                                      
                                                                        
    }

    return(
        <main>
        {
            groupedEmployees.map((items) => {
                return(
                    <div key={items.team} className="card m-2" style={{cursor:"pointer"}}>
                        <h4 id={items.team} className="card-header text-secondary bg-white" onClick={handleTeamClick}
                        >
                            Team Name : {items.team}
                        </h4>
                        <div id={"collapse_" + items.team} className={items.collapsed === true ? "collapsed" : ""}>
                            <hr />
                            {
                                items.members.map((member) => {
                                    return(
                                        <div className="mt-2">
                                            <h5 className=" card-title mt-2">
                                                <span className="text-dark">
                                                    Full Name : {member.fullName}
                                                </span>
                                            </h5>
                                            <p>Designation : {member.designation}</p>
                                        </div>
                                    )
                                })
                            }
                        </div>
                    </div>
                )
            })
        } 
        </main>
    )
}

export default GroupTeamMembers;