import {combineReducers} from 'redux'

const songsReducer=()=>{
    return[
        {title:'No Scrubs', duration:'4:50'},
        {title:'Macarena', duration:'2:30'},
        {title:'All Start', duration:'3:13'},
        {title:'I Want It That Way', duration:'1:45'}
    ];
};

const selectedSongReducer=(selectedSong=null, action)=>{
    if(action.type==='SONG_SELECTED'){
        return action.payload;
    }

    return selectedSong;
};

export default combineReducers({
    songs:songsReducer,
    selectedSong:selectedSongReducer
});