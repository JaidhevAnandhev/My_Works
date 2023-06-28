import { useState } from "react";
import { useGlobalContext } from "../context";

const Search = () => {
    const [text, setText] = useState('');
    
const  handleTextChange = (e) => {
    setText(e.target.value)
}

const {setSearchTerm, fetchRandomMeal} = useGlobalContext();

const handleSubmit = (e) => {
    e.preventDefault()
    if (text) {
        setSearchTerm(text)
    }
}

const handleRandomMeal = () => {
    setSearchTerm('')
    setText('')
    fetchRandomMeal()
}
    return(
        <header className="search-container">
        <form onSubmit={handleSubmit} className="search-container">
            <input type="text" placeholder="Type your fav 🍴" value={text} onChange={handleTextChange} className="form-input"/> 
            <button className='btn' type="submit">Search</button>
            <button className="btn btn-hipster" type="button" onClick={handleRandomMeal}>Surprise Me!</button>
        </form>
        </header>
    )
}


export default Search;