import axios from "axios";

export default axios.create({
    baseURL:'https://api.unsplash.com',
    headers:{ 
        Authorization:'Client-ID tYhSmBtrHtQgLjkD2bfGfFlm7bsvBxl4WJ7R_FsTo1A'
    }
})