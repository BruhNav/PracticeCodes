import axios from 'axios';

const KEY = 'AIzaSyBuJhjO9Tk0esvfPLiU8Q4LNr6pR09Dth4'

export default axios.create({
    baseURL:'https://www.googleapis.com/youtube/v3',
    params:{
        part:'snippet',
        maxResults:5,
        key:KEY
    }
});