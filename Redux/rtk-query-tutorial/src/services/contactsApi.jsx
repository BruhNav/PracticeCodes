import {createApi, fetchBaseQuery} from '@reduxjs/toolkit/query/react';

export const contactsApi = createApi({
    reducerPath: 'contactsApi',
    baseQuery:fetchBaseQuery({baseUrl: 'https://jsonplaceholder.typicode.com'}),
    endpoints:(builder)=>({
        contacts: builder.query({
            query:()=> '/users'
        })
    })
});

export const { useContactsQuery } = contactsApi;