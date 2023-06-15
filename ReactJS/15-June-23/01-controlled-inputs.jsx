import { useState } from "react";

const ControlledInputs = () => {
const [name, setName] = useState('');
const [email, setEmail] = useState('');

const handleSubmit = (e) => {
  e.preventDefault();
  console.log(name, email);
}
return(
  <div>
    <form className="form" onSubmit={handleSubmit}>
        <h4>controlled inputs FORM</h4>
         {/* Create a label and input box for name */}
         <div>
          <label htmlFor="name" className="form-label">
            Name
          </label>
          <input 
            type = 'text'
            className="form-input"
            value={name}
            onChange={(e)=>setName(e.target.value)}
          />
         </div>
         
         {/* Create a label and set up an input box for email */}
         <div>
          <label htmlFor="email" className="form-label">
            Email
          </label>
          <input
           type="email"
           className="form-input"
           value={email}
           onChange={(e)=>setEmail(e.target.value)}
           />
         </div>
         <button type="submit" className="btn btn-block">
            Submit
         </button>
    </form>
  </div>
)

  return <h2>Controlled Inputs</h2>;
};
export default ControlledInputs;
