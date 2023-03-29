import React, { createElement } from 'react';
import ReactDOM from 'react-dom/client';
import './index.css'

const books = [
{
  author: 'Sudha Murthy ',
  title: 'GM Stories',
  img: 'https://images-eu.ssl-images-amazon.com/images/I/61yB0UFlM3L._AC_UL600_SR600,400_.jpg',
},
{
  author: 'James Clear',
  title: 'Atomic Habits',
  img: 'https://images-eu.ssl-images-amazon.com/images/I/91bYsX41DVL._AC_UL600_SR600,400_.jpg',
},

];

// create a new component 
function BookList () {
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

        {books.map((book) => {
          console.log(book)
          return(
            <div>
              <h2> IMAGE = {book.img}</h2>
              <h2> TITLE = {book.title}</h2>
              <h2> AUTHOR ={book.author}</h2>
            </div>
          )
        })}
      </section>
    )
}

// const names = ['john', 'peter', 'susan'];
// const newNames = names.map((name) => {
//   return <h1>{name  }</h1>
// });

// console.log(newNames);



const Book = (props) => {
  const { img, title, author, children } = props;
  console.log(props);
  return (
    <article className='book'>
      <img src={img} alt={title} />
      <h2>{title}</h2>
      <h4>{author} </h4>
      {/* {children} */}
      <button>Click Me</button>
    </article>
  );
};

 
const root = ReactDOM.createRoot(document.getElementById('root'));

root.render(<BookList />)