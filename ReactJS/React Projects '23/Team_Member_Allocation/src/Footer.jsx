const Footer = () => {
    
    var today = new Date();

    return(
        <footer className="container">
            <div className="row justify-content-center">
                <div >
                    <br />
                    <h4>Team Allocation App {today.getFullYear()}<br />   
                    DOC:{today.getDate()}/{today.getMonth()+1}/{today.getFullYear()}
                    </h4>
                </div>
            </div>
        </footer>
    )
}

export default Footer;