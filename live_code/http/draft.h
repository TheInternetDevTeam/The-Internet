/*
(1) In the definition of the Accept request header, there is no mention of a "version" modifier, e.g.,

Accept: text/html; version=3.0

The BNF for Accept (section 5.5.8) includes *(";" parameter).
*/
/*
It's worth pointing this out specifically, because gauging client capabilities reliably has been a real problem in the past.
*/
/*
(2) The semantics of Expires should discourage clients from indiscriminately trying to refetch objects, just because they have expired. Dynamically-created pages can be ephemeral, without having time-dependent content that needs to be updated.
*/
/*
Expires was always intended to refer to the client's viewpoint, and not have a server-centric view of expiration. Expiration should mean that the client is encouraged to re-fetch the URL.
*/

//TODO: Add HTTP Code Here.