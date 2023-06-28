import Meals from "./Meals";
import { useGlobalContext } from "../context";


const Model = () => {
    const {meals, selectedMeal, closeModal} = useGlobalContext();
    const {strMealThumb : image, strMeal : title, strInstructions : procedure, strSource : source} = selectedMeal;

    return <aside className="modal-overlay">
        <div className="modal-container">
            <img src={image} alt={title} className="modal-img"/>
            <h1>{title}</h1>
            <p>Cooking Procedure</p>
            <p>{procedure}</p>
            <a href={source}>Click to go to the 🌐</a> <br />
            <button className="close-btn" onClick={closeModal}>Close 👋🏻</button>
        </div>
    </aside>

}
export default Model;



































// import Meals from "./Meals";
// import { useGlobalContext } from "../context";
// const Model = () => {
//     const {meals, selectedMeal, closeModal} = useGlobalContext();
//     return(
//         <div>

//             <aside className="modal-overlay">Model
//             <div className="modal-container">
//                 {
//                     meals.map((item)=>{
//                         const {idMeal, strMeal : title, strMealThumb:image, strInstructions : detail } = item
//                         return <aside key={idMeal} className="modal-content">
//                             <h5 className="modal-content ">{selectedMeal.strMeal}</h5>
//                             <img src={image} alt="Meal_image" style={{width:'200px'}}/>
//                             <h5>{detail}</h5>
//                             <button onClick={closeModal}>Close</button>
//                         </aside>
//                     })
//                 }
//             </div>
//             </aside>
//         </div>
//     )
// }

// export default Model;