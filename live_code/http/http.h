/*
The standard for the transport protocol shouldn't need to worry about addressing the encoding schemes of the various data types it sends between a source and its destination.

Specifically, for all data types, HTTP is ignorant of the actual content of the data it conveys from point A to point B. It supports passing a few header fields between a server and a client that describe this content, but it doesn't (in current practice) require any dabbling in the content itself.

It seems wise to separate the best way to encode text for WWW applications from the best way to transport that text for WWW applications. Try not to mix WWW client and server implementation issues up with the HTTP standard. WWW servers are not equivalent to a HTTP protocol engine. Servers do much more work to find and interpret data before stuffing it into the HTTP pipe. Making text/MIME types something that HTTP implementation have to treat differently to all other data types doesn't seem consistent. It may be that servers acting as interfaces between a file system and the HTTP world would have to care, but HTTP is data-type independent by its very nature. The HTTP standard document may end up devolving into a "How to build a server" cookbook.

Likewise, HTTP clients don't need to know how to interpret the data they receive. The viewer functions that WWW client software pipes this data into do need to understand this data, but as with servers, client-side HTTP protocol engines are not equivalent to WWW clients. Clients do a lot more after the data is received that falls completely outside the scope of the HTTP protocol.

One can use a standard encoding for HTML documents, and one can further specify encodings for all other text/MIME types, and that's fine. The HTTP standard shouldn't have to care at all. If some sort of encoding is needed for request and response headers, then yes, there may be some need. However, given that the HTTP protocol supports a full 8-bit binary pipe for transfers, issues such as encoding text for transport seem beyond the scope of the HTTP standard.

The mechanisms for standardizing text transport over HTTP connections need to be put in place, but the HTTP/1.x standard document is not the place to do this. This is more the province of an RFC describing a particular encoding scheme which may be transported via HTTP (or any other number of protocols, for that matter).

Those who may not realize the implications of their recommendations are continuing to place unreasonable demands on the server-side of HTTP implementations by demanding all sorts of data conversions, in conjunction with the simple transport functions of the protocol. If this becomes standard, servers will be so bogged down with translation exercises, that their transport tasks will be rendered impossible.
*/

//TODO: Add HTTP Code Here.