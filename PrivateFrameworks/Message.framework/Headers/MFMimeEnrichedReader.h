/* Runtime dump - MFMimeEnrichedReader
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMimeEnrichedReader : NSObject
{
    struct ? _inputBuffer;
    long _currentIndex;
    long _inputLength;
    id _noFillLevel;
    id _eatOneNewline;
    id _insideComment;
    id _wantsPlainText;
    int _lastQuoteLevel;
    struct __CFArray * _commandStack;
    id _outputString;
    NSMutableString * _outputBuffer;
    struct __CFString * _prependHTML;
    struct __CFString * _postpendHTML;
    float _indentWidth;
}

+ (struct __CFCharacterSet *)parenSet;
+ (struct __CFCharacterSet *)punctuationSet;

- (void)dealloc;
- (NSString *)description;
- (UIFont *)currentFont;
- (void)parseParameterString:(NSString *)arg0;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)handleNoParameterCommand:(struct ? *)arg0;
- (void)setupFontStackEntry:(struct _CommandStackEntry *)arg0;
- (void)mismatchError:(NSError *)arg0;
- (void)appendNewLine:(id)arg0;
- (void)resetStateWithString:(NSString *)arg0 outputString:(NSString *)arg1;
- (int)readTokenInto:(id *)arg0;
- (void)beginCommand:(NSObject *)arg0;
- (void)endCommand:(NSObject *)arg0;
- (void)appendStringToBuffer:(NSObject *)arg0;
- (void)closeUpQuoting;
- (void)setWantsHTML:(char)arg0;
- (void)convertRichTextString:(NSString *)arg0 intoOutputString:(NSString *)arg1;
- (void)convertEnrichedString:(NSString *)arg0 intoOutputString:(NSString *)arg1;

@end
