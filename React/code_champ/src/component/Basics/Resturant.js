import React from 'react'
import "./style.css"
import Menu from './menuApi';
import MenuCard from './MenuCard';
import Navbar from './navbar';

// array-- spread operator-- set
const uniqueList = [...new Set(Menu.map((currElem) =>{
            return currElem.category;
        })
    ),
    "All",
]
// console.log(uniqueList);

const Resturant = () => {
    const [menuData,setMenuData]=React.useState(Menu);
    const [menuList,setMenuList]=React.useState(uniqueList);
    
    const filterItem = (category)=>{

        if(category === "All"){
            setMenuData(Menu);
            return;
        }
        const updateList=Menu.filter((currElem)=>{
            return currElem.category === category;
        });
        setMenuData(updateList);
    };

    return (
        <>
          <Navbar filterItem = {filterItem} menuList= {menuList}/>
          <MenuCard menuData={menuData} />  
        </>
    );
}

export default Resturant;
