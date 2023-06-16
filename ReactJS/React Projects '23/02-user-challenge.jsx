import { useState } from "react";
import { data } from '../../../data';


const UserChallenge = () => {
    const [name, setName] = useState('');
    const [users, setUsers] = useState(data);
    const [email, setEmail] = useState('');

    const handleSubmitForm = (e) => {
      e.preventDefault();
      if (!name) {
        alert("Enter a name")
      }
      // To create a random id
      const newId = Date.now;
      const newUser = {newId, name};
      const UserList = [...users, newUser];
      setUsers(UserList)
      setName('');
    }

    const removeName = (id) => {
      const idRemove = users.filter((person)=>person.id !== id)
      setUsers(idRemove)
    }
  return (
    <div>
      <form className='form' onSubmit={handleSubmitForm}>
        <h4>Add User</h4>
        {/* Input block for providing name */}
        <div className='form-row'>
          <label htmlFor='name' className='form-label'>
            name
          </label>
          <input type='text' 
          className='form-input' 
          id='name' 
          value={name}
          onChange={(e)=>setName(e.target.value)}
          />
        </div>

        {/* Input block for providing email */}
        <div className="form-row">
          <label htmlFor="email" className="form-label">
            Email
          </label>
          <input type="email"
            className="form-input"
            id = 'email'
            value={email}
            onChange={(e)=>setEmail(e.target.value)}
          />
        </div>

       <button type='submit' className='btn btn-block'>
          submit
        </button>
      </form>
      {/* render users below */}
      <h4>Users added</h4>
      {users.map((user)=>{
        return(
          <div key={user.id}>
            <h4>{user.name}</h4>
            <button onClick={()=> removeName(user.id)} className="btn">Remove</button>
          </div>
        );
      })}
    </div>
  );
};
export default UserChallenge;
