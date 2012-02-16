/*
One of the merits which Unicode always wins by is its ability to act as a character set "hub" for translation. In that way, it can be used for HTTP without either the content on the server, or the display end on the client, having to know anything about Unicode. This use of Unicode is transparent to end users and suppliers of this content, and so is really an internal implementation detail of the client/server protocol.
*/
/*
As for the HTTP protocol element, I think we might be better off with:
accept-parameter: charset=unicode-1-1-utf7
rather than:
accept-charset: unicode-1-1-utf7
*/
/*
UTF-7 isn't appropriate for HTTP, since that's a guaranteed 8-bit protocol. It seems like UTF-8 or UCS-2 would be more appropriate. People are just using it as an example right now, but it's worth bearing this in mind.
*/
/*
In addition, the MIME specification states that for the text/data types, all line breaks must be indicated by a CRLF pair. This implies that certain encodings cannot be used within the text/data types if the WWW is to be strictly MIME-conformant.
*/
/*
This information actually comes from an Internet Draft which makes stronger claims about text/data types. Unless the draft is changes, this is what is going to be in the MIME spec in its next edition.
*/

//TODO: Add HTTP Code Here.