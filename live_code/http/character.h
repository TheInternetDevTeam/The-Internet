/*
There are several places where character set issues impact the design of HTTP; one example of this is in human-readable metadata, such as titles and author names. HTTP-NG defines all human-readable headers to be variable-length strings of bytes - ideally, all such text should be UTF-* encoded UCS-2 or UCS-4.

The bitstream sent over the data channels is not a HTTP issue. However, using UCS-* as the preferred charset for HTML would probably be a really good idea.
*/

//TODO: Add HTTP Code Here.