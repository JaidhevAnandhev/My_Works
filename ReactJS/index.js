import React, { createElement } from 'react';
import ReactDOM from 'react-dom/client';
import './index.css'

const books = [
{
  author: 'Sudha Murthy ',
  title: 'GM Stories',
  img: 'https://images-eu.ssl-images-amazon.com/images/I/61yB0UFlM3L._AC_UL600_SR600,400_.jpg',
  id : 1,
},
{
  author: 'James Clear',
  title: 'Atomic Habits',
  img: 'https://images-eu.ssl-images-amazon.com/images/I/91bYsX41DVL._AC_UL600_SR600,400_.jpg',
  id : 2,
},

];

// create a new component 
function BookList () {

  /* This code is an example for Prop Drilling that is instead of passing through each of the components 
  it directly executes in the required component */
  const someValue = 'shakeAndBake'
  const displayValue = () => {
    console.log(someValue)
  }
    return (
      <section className='booklist'>
        
          {/* <Book job = "developer " />
          <Book title_ran = "random-title"  number = {22}/>
          <Book goal = "writer"/>
          <Book goal={"book writer "}/> */}
          {/* <Book  */}
          {/* // img = {firstBook.img}
          // title = {firstBook.title}
          // author = {firstBook.author}
          // > */}
             {/* <p>Hello paragraph Hello paragraph Hello paragraph
          //   Hello paragraph Hello paragraph Hello paragraph
          //   Hello paragraph Hello paragraphHello paragraph
          //   </p> */}
          {/* // </Book> */}
          {/* <Book 
          img = {secondBook.img}
          title = {secondBook.title}
          author = {secondBook.author}
          /> */}
        {/* {newNames} */}

        {/* <EventExamples /> */}

        {books.map((book) => {
          console.log(book)
          /*To render these items on the screen Iterates over the item to return the component */
          // const{img, title, author, id} = book;
          return(
            <div>
              {/* <h2> IMAGE = {book.img}</h2>
              <h2> TITLE = {book.title}</h2>
              <h2> AUTHOR ={book.author}</h2> */}

              {/* <EventExamples /> */}

              { /* To render the objects in one line - 1*/}
              {/* <Book img = {img} title = {title} author = {author} key = {id}/> */}

              { /* To render the objects in one line - 2 */}
              {/* To pass down the entire object as props  */}
              {/* <Book book = {book} key = {book.id} /> */}

              {/* Using spread operator (...array_name, append_names) */}
              <Book {...book } key = {book.id} displayValue = {displayValue}/>
              
            </div>
          )
        })}
      </section>
    )
}


const shoot = () => {
  alert("Bravo working Well!");
}



const Book = (props) => {
  // Declare props.book (since props renders the book object )
  // {If we use spread operator then we need not access the object like this via props }
  const { img, title, author, children, displayValue } = props;
  console.log(props);

  // Creating a function to display title  after clicking the button
  // const displayTitle =  () => {
  //   console.log(title);
  // }

  return (
    <article className='book'>
      <img src={img} alt={title} />
      <h2>{title}</h2>
      <h4>{author} </h4>
      {children}
      {/* <button onClick={shoot}>Click Me</button> */}
      <button onClick={displayValue}>Display Title</button>
    </article>
  );
};


const root = ReactDOM.createRoot(document.getElementById('root'));

root.render(<BookList />)


// const names = ['john', 'peter', 'susan'];
// const newNames = names.map((name) => {
//   return <h1>{name  }</h1>
// });

// console.log(newNames);

// const EventExamples = () => {
  
  //     const handleFormEvent = (e) => {
    //       // Prints the event details in the console
    //       console.log(e);
    //       // Prints <input type="text" name='example' onChange={handleFormEvent} style={{margin: '1rem 0'}}
//       console.log(e.target);
//       // Prints the value given to name variable that is example in this case
//       console.log(e.target.name)
//       // Prints the exact value given by the user in the textbox
//       console.log(e.target.value);

//       console.log("Text box is used")
//     }

//     const handleButtonEvent = () => {
//       alert("Hooray Button clicked")
//     }

//     const handleFormSubmit = (e) => {
//       // It prevents the default action initiated by formSubmission
//       e.preventDefault();
//       console.log(`Form Submitted`)
//     }
//     // return <h1>Events</h1>
//     return (<section>
//       <form onSubmit={handleFormSubmit}> 
//         <h2>Typical Form</h2>
//         {/*For input textbox we use onChange */}
//         <input type="text" name='example' onChange={(e) => console.log(e.target.value)} style={{margin: '1rem 0'}} />
            
//       </form>
//       {/* Passing anonymous functions to run when we click the button  */}
//       {/* For button we use  onClick*/}
//       <button type = 'file' onClick={() => console.log('Submit')} >Submit - 😇 Check Console</button><br />
//       <button type = 'button' onClick={handleButtonEvent}>Click Me🧑🏻‍💻</button>
//     </section>
//     )
// }