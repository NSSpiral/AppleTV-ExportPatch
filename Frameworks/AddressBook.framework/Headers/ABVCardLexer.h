/* Runtime dump - ABVCardLexer
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardLexer : NSObject
{
    NSMutableData * _data;
    char * _bytes;
    unsigned int _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    char _unicode;
    int _errorCount;
    NSArray * _activeTokenSets;
}

- (id)tokenSetForLength:(int)arg0;
- (int)nextTokenPeakUnicode:(char)arg0 length:(int)arg1;
- (int)nextTokenPeakSingle:(char)arg0 length:(int)arg1;
- (char)advancePastEOL;
- (char)advancedPastToken:(int)arg0;
- (int)tokenAtCursor;
- (NSData *)nextQuotedPrintableData;
- (id)nextEscapedCharacter;
- (void)advanceToPeakPoint;
- (id)nextUnicodeStringStopTokens:(int)arg0 quotedPrintable:(char)arg1 trim:(char)arg2;
- (NSString *)nextSingleByteStringInEncoding:(unsigned int)arg0 quotedPrintable:(char)arg1 stopTokens:(int)arg2 trim:(char)arg3;
- (char)_advancePastLineFoldingSequenceIfNeeded;
- (void)_applyNextStringInEncoding:(unsigned int)arg0 quotedPrintable:(char)arg1 stopTokens:(int)arg2 trim:(char)arg3 intoString:(id *)arg4;
- (NSString *)nextStringInEncoding:(unsigned int)arg0 quotedPrintable:(char)arg1 stopTokens:(int)arg2 trim:(char)arg3;
- (id)nextUnicodeBase64Line:(char *)arg0;
- (id)nextSingleByteBase64Line:(char *)arg0;
- (id)nextBase64Line:(char *)arg0;
- (char)advanceToEOL;
- (int)advanceToString;
- (int)advanceToUnicodeString;
- (int)advanceToSingleByteString;
- (int)nextTokenPeak:(char)arg0;
- (char)advanceToEOLUnicode;
- (char)advanceToEOLSingle;
- (char)advancePastEOLUnicode;
- (char)advancePastEOLSingle;
- (NSString *)tokenName:(int)arg0;
- (NSString *)nextArraySeperatedByToken:(int)arg0 stoppingAt:(int)arg1 inEncoding:(unsigned int)arg2;
- (NSData *)nextBase64Data;
- (char)advanceToToken:(int)arg0 throughTypes:(int)arg1;
- (char)atEOF;
- (void)dealloc;
- (ABVCardLexer *)initWithData:(NSMutableData *)arg0;
- (unsigned int)cursor;
- (int)errorCount;
- (void)finalize;

@end
