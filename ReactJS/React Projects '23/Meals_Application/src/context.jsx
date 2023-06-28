import axios from "axios";
import React , {useContext, useEffect, useState   }from "react";

const AppContext = React.createContext();


const allMealsUrl = 'https://www.themealdb.com/api/json/v1/1/search.php?s=a'
const randomMealUrl = 'https://www.themealdb.com/api/json/v1/1/random.php'


// Special type of props
const AppProvider = ({children}) => {
    const [meals, setMeals] = useState([]);
    const [loading, setLoading] = useState(false)
    const [searchTerm, setSearchTerm] = useState('')
    const [showModal, setShowModal] = useState(false)
    const [selectedMeal, setSelectedMeal] = useState(null)
    const [favorites, setFavorites] = useState([])
    
    
    // fetch the data using fetch API (Async await)
    // Helps to return a promise
    const fetchMeals = async(url) => {
        setLoading(true)
        try {
            const { data } = await axios(url)
            if (data.meals) {
                setMeals(data.meals)
            }
            else {
                setMeals([])
            }
        }
        catch (e) {
            console.log(e.response)
        }
        setLoading(false)
    }

    const fetchRandomMeal = () => {
        fetchMeals(randomMealUrl)
    }

    const selectMealFn = (idMeal, favMeal) => {
        let meal
        if(favMeal){
            meal = favorites.find((meal) => meal.idMeal === idMeal)
        }
        else{
            meal =  meals.find((meal) => meal.idMeal === idMeal)
        }
        meal = meals.find((mealPar)=> mealPar.idMeal == idMeal)
        setSelectedMeal(meal)
        setShowModal(true)
    } 

    const closeModal = () => {
        setShowModal(false)
    }

    const addToFavorites = (idMeal) => {
        console.log(idMeal);
        const meal = meals.find((meal) => meal.idMeal === idMeal)
        const alreadyFav = favorites.find((meal) => meal.idMeal === idMeal);
        if(alreadyFav) return
        const updateFav = [...favorites, meal]
        setFavorites(updateFav)
    }


    const removeFromFavorites = (idMeal) => {
        const updatedFavorites = favorites.filter((meal) => meal.idMeal !== idMeal)
        setFavorites(updatedFavorites)
    }

    useEffect(() => {
        fetchMeals(allMealsUrl)
    }, [])
    
    useEffect(() => {
        if (!searchTerm) return
        fetchMeals(`${allMealsUrl}${searchTerm}`)
    }, [searchTerm])

    return(
        <AppContext.Provider value={{loading, meals, setSearchTerm, fetchRandomMeal, showModal, selectedMeal, selectMealFn, closeModal, favorites, addToFavorites, 
        removeFromFavorites}}>
            {children}
        </AppContext.Provider   >
    )
}

export const useGlobalContext = () => {
    return useContext(AppContext)
}

export {AppContext, AppProvider};
