import React from 'react'
import UserContainer from './UserContainer'

const NavLinks = (/*{user, logout}*/) => {
  return (
    <div className='nav-containers'>
      <div className='nav-container'>
        <ul className='nav-links'>
          <li>
            <a href="https://react.dev/">Home</a>
          </li>
          <li>
            <a href="https://react.dev/">About</a>
          </li>
        </ul>

      </div>
      <UserContainer /*user = {user} logout = {logout}*//>
    </div>
  )
}

export default NavLinks
