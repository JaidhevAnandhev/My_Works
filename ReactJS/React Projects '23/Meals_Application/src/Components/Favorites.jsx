import { useGlobalContext } from "../context";

const Favorites = () => {

    const {favorites, selectedMeal, selectMealFn, removeFromFavorites} = useGlobalContext()
    return(
        <section className="favorites">
            <div className="favorites-content">
            <h5>Favorites</h5>
            <div className="favorites-container">
                {favorites.map((item) => {
                    const {idMeal, strMeal : title, strMealThumb : image} = item
                    return <div key={idMeal} className="favorite-item">
                        <img src={image} className="favorites-img img" onClick={() => selectMealFn(idMeal)} />
                        <button className="remove-btn" onClick={()=>removeFromFavorites(idMeal)}>Remove</button>
                    </div>
                })}
            </div>
            </div>
        </section>
    )
}

export default Favorites;