import React from "react";




class Validator extends React.Component()
{
    state ={password:''};

    render() {
        return(
            <div className="ui segment">
                <form  className="ui form">
                    <div className="field">
                        <label >Enter password</label>
                        <input  type="password" />
                    </div>
                    {this.state.password.length < 4 ?'Password must be atleast 4 character':''}
                </form>
            </div>
        );
    }
}

export default Validator;
