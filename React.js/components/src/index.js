import React from 'react';
import ReactDom from 'react-dom';
import CommentDetail from './CommentDetail';
import ApprovalCard from './ApprovalCard';

const App = () => {
    return ( 
        <div className="ui container comments">
        <ApprovalCard>
            <CommentDetail author="sam" timeAgo="Today at 4 pm" text="Liked this blog"/>
        </ApprovalCard>
        <ApprovalCard>
            <CommentDetail author="steve" timeAgo="Yesterday at 5:49 pm" text="Not impressed"/>
        </ApprovalCard>
        <ApprovalCard>
            <CommentDetail author="sharon" timeAgo="Today at 8:39 pm" text="Love it"/>
        </ApprovalCard>
        </div>
    );
};

ReactDom.render( < App / > , document.querySelector('#root'));