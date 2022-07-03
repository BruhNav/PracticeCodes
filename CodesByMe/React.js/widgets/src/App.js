import React, {useState} from "react";
import Accordion from "./components/Accordion";
import Search from "./components/Search";
import Dropdown from "./components/Dropdown";
import Translate from "./Translate";
import Route from "./Route"
import Header from "./Header";


const items = [
    {
        title: 'what is React?',
        content: 'React is a front end js framework'
    },
    {
        title:'why use React?',
        content:'React is my favorite'
    },
    {
        title:'How do you use react',
        content:'We use react by creating components'
    }
];

const options=[
    {
        label:'The Color Red',
        value:'red'
    },
    {
        label:'The Color Green',
        value:'green'
    },
    {
        label:'A Shade Of Blue',
        value:'blue'
    }
]

export default ()=>{

    const [selected, setSelected] = useState([options[0]])

    return (
    <div>
        <Header/>
        <Route path = "/">
            <Accordion items={items}/>
        </Route>
        <Route path = "/list">
            <Search/>
        </Route>
        <Route path = "/dropdown">
            <Dropdown
            label="select a color"
            options={options}
            selected={selected}
            onSelectedChange={setSelected}
        />
        </Route>
        <Route path = "/translate">
            <Translate/>
        </Route>
    </div>
    
    );
};