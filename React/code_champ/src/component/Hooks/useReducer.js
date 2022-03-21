import React from "react";
import "./style.css";

const reducer=(state,action)=>{
    if(action.type==="INCR"){
        state=state+1;
    }
    else if(state>0 && action.type==="DCR"){
        state=state-1;
    }
    return state;
}

const useReducer = () => {
    const initialData = 10;
    // const [myNum, setMyNum] = React.useState(0);
    const [state,dispatch] = React.useReducer( reducer,initialData);


  return (
    <>
      <div className="center_div">
        <p>{state}</p>
        <div class="button2" onClick={()=>{dispatch({type:"INCR"})}}>
          <span></span>
          <span></span>
          <span></span>
          <span></span>
          INCR
        </div>
        <div
          class="button2" onClick={()=>{dispatch({type:"DCR"})}}>
          <span></span>
          <span></span>
          <span></span>
          <span></span>
          DECR
        </div>
      </div>
    </>
  );
};

export default useReducer;
