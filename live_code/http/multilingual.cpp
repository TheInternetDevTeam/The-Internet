/*
As an example, if some Japanese text was sent to a person who could not read Kanji, Hiragana or Katakana, the browser could conceivably map the Japanese text into something like the following:

Nihongo, tokuni Kanji, wa totemo muzukashii desu.
*/
/*
Unless one has a strong masochistic streak, Unicode (or ISO/IEC 10646) will certainly be part of the answer. However, Unicode wasn't designed to solve every problem facing designers of multilingual systems. Nevertheless, it makes a great foundation upon which to build such systems.
[Like HTML, Unicode's designers knew that they couldn't solve every problem if they wanted an implementable standard; the emphasis on a plain-text encoding which intentionally disregarded certain higher-level, language-specific issues was an explicit design decision to aid in achieving an implementable result.]

One should be aware that Unicode (as a profile of ISO/IEC 10646) is essentially becoming a national standard in many countries: e.g., Japan expects to publish JIS 0221 this coming year, which will be a national standard version of ISO/IEC 10646; China has already published GB 13000, also a national standard version of 10646. I wouldn't be surprised to see Korea do the same thing in the not-too-distant future.
*/
/*
ISO 8879 also defines some methods for handling things like ISO-2022; but some encodings for languages such as Thai cannot be handled by SGML, even if the SGML declaration is altered (although it is possible for the application to deal with this from within, or just prior to, the entity manager).
*/
/*
There *should* be nothing difficult about employing Thai in SGML. The encoding is actually not complicated at all: it is not variable length, and the fact that there is no canonical order for certain combining characters is irrelevant, since they have a fixed position on the base consonant, regardless of their coding order in a sequence of multiple combining marks after a base consonant. Furthermore, there is a standard Thai encoding (TIS 620) which is now commonly used. The Unicode Thai character block is based on TIS 620.

Variable length encoding (in this context, vis-a-vis ISO 2022) means that a variable number of bytes are used to encode one coded character element. In the case of the Thai character set TIS 620 (and, indeed, Unicode), a fixed number of bytes are used to encode each coded character element (1 byte for TIS 620, and 2 bytes for a canonical UCS-2 Unicode character). The fact that multiple coded character elements in TIS 620 (and in Unicode) can combine graphically to fill a single display cell does not mean that either of these character sets are technically variable length encodings. The units of processing for transmission of information are still fixed length, regardless of the number of display cells used to display character data.
*/

//TODO: Add HTTP Code Here.