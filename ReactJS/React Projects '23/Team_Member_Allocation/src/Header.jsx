const Header = ({sel_Team, teamMemberCount}) => {
    return(
        <header>
            <h1 className="container" >Team Member Allocation</h1>
                <br />
            <h4 className="container">{sel_Team} has {teamMemberCount} Members</h4>
            <br />
        </header>
    )
}

export default Header;