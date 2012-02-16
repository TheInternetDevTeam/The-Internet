/*
Unicode is one of the answers to the translation problem. It is perfectly possible to do multi-lingual HTML without Unicode, for those who prefer not to do so.
*/
/*
There have been many objections to Unicode in the past, and, upon further research, most of these have been related to either problems with display or unsupported language feature issues.
*/
/*
Receivers might be expected to either:
(1) Understand the character sets the sender is able to present, or...
(2) Call some proxy that is able to translate the document into a character set that the client knows.

Current practice is that servers offer documents in the character sets which they have, and the clients either display them correctly, or attempt to translate them. If you browse the net looking for websites by country, you'll come up with plenty of examples.

In general, users with large collections of documents in national character sets will just make them available in those forms.

They're currently expecting the reader, if they're really interested, to obtain support for the character encoding used in the documents on those servers. A regime where the documents are properly labelled, and the client fetches the translation table first time in order to properly display the documents:
(a) Will work well.
(b) Is efficient.
(c) Has a reasonable transition from current practice.
*/
/*
When you think of 200,000 accesses from the US to a Japanese site from a browser that does not support SJIS, EUC, Arbaic or Thai, all of which are used in a single document, resulting in 200,000 requests for each of those translation tables, and compare that to a single server wasting cycles doing a conversion to UTF-8 (which would probably be cached after the first access), you can see why efficiency becomes crucial. Requiring the browsers to call a proxy is at least as inefficient as server conversion (in reality, more so, due to redirect), and relies upon the same (or probably more complicated) caching techniques for performance.

Even worse, doing in-client translation will almost certainly require 16-bits, somewhere within the client (depending on what everything is being translated into). Unless you are translating into some virtual character set (which would need to be at least as large as the largest national character set, which is 16 bits), into Unicode or transliterating, you will also need to recode the parsers for the different data formats which you plan to support, so that they will be able to recognise the characters to be used in parsing (think of SGML, or even HTML parsing).

In the worst case scenario, current practice (or something close to it) is supported.
*/
/*
The servers don't have the computational resources to translate the document on-the-fly into Unicode; nor is the translation particularly efficient, in terms of network bandwidth.
*/
/*
The biggest problem with this idea, especially if the server employs good caching techniques, is that in the worst case (and indeed, many cases), the client and server would not be able to communicate without help. Additionally, it encourages the creation of browsers with widely different capabilities and version numbers, and breaking the web into "villages" with their own culture, own language, own GUI etc.

We need some sort of common base, so that in a disaster scenario (no external help available), the two can communicate. Unicode is the only thing currently available which offers a reasonable path to this. Additionally, it promises to offer a single processing model for character data of mixed languages (at least until it needs to be displayed), and most, if not all, parsers could use Unicode as a base for character classification, and hence, the parsing tables would not need to be recoded. Eventually, free tools and libraries will appear to aid in processing (and ultimately, display).
*/
/*
accept-parameter: charset=1-1-utf7
(perhaps UTF8 or UCS-2?)
*/
/*
Unless a program was specifically designed to manipulate charsets and/or encodings, the actual processing within it can be abstracted away from concrete code. If a program/system relies entirely upon concrete code, it is broken by its very design, although Unicode certainly gives a greater range of flexibility than other code sets.
*/

//TODO: Add HTTP Code Here.