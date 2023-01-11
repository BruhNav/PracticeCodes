const CAKE_ORDERED = 'CAKE_ORDERED'


function orderCake(){
    return{
        type:CAKE_ORDERED,
        quatity: 1,
    }
}


const initialState={
    numOfCakes: 10,
}

// {previousState,action} => newState

const reducer=(state= initialState,action)=>{
    switch(action.type){
        case CAKE_ORDERED:
            return{
                ...state,
                numOfCakes: state.numOfCakes - 1,
            }
            default:
                return state
    }
}