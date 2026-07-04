/* Runtime dump - MFQuotedPrintableEncoder
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer
{
    unsigned long _line;
    unsigned long _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    char _forTextPart;
    char _lastWasNewLine;
    char _forHeader;
}

@property (nonatomic) char forTextPart;
@property (nonatomic) char forHeader;

+ (unsigned int)requiredSizeToEncodeHeaderBytes:(char *)arg0 length:(unsigned int)arg1;

- (void)done;
- (int)appendData:(NSData *)arg0;
- (void)setForHeader:(char)arg0;
- (char)forTextPart;
- (char)forHeader;
- (void)setForTextPart:(char)arg0;

@end
