import React, { createContext, useState } from 'react'
import NavLinks from './NavLinks'

export const navBarContext = createContext();

const Navbar = () => {
    const[ user, setUser ] = useState({name : "Jaidhev"})

    const logout = () => {
        setUser('')
        return alert("Login now")
    }
  return (
    <navBarContext.Provider value={{user, logout}} >
    <nav className='navbar'>
        <h5>CONTEXT API</h5>
        <NavLinks /*user = {user} logout = {logout}*/ />
    </nav>
    </navBarContext.Provider>
  )
}

export default Navbar
