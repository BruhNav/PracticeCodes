import React from "react";
import SongList from "./SongList";
import SongDetail from "./SongDetail";


const App = () =>{
    return (<div className="ui container grid">
        <div className="ui row">
            <div className="column six wide">
                <SongList/>
            </div>
            <div className="coulmn six wide"> 
                <SongDetail/>
            </div>
        </div>
    </div>);
}

export default App; 