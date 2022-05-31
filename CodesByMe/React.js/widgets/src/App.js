import React from "react";
import Accordion from "./components/Accordion";

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

export default ()=>{
    return (
    <div>
        <Accordion items={items} />
    </div>
    );
};