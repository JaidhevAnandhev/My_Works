import './App.css'
import Favorites from './Components/Favorites'
import Meals from './Components/Meals'
import Model from './Components/Model'
import Search from './Components/Search'
import { useGlobalContext } from './context'

function App() {

  const{showModal, favorites} = useGlobalContext();

  return (
    <div>
      <Search />
      {favorites.length > 0 && <Favorites />} 
      <Meals />
      {showModal && <Model />}

    </div>
  )
}

export default App
