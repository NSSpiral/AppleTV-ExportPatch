/* Runtime dump - MFQuotedPrintableDecoder
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer
{
    unsigned char _lastEncoded;
    unsigned long _required;
    char _forTextPart;
    char _badlyEncoded;
}

@property (nonatomic) char forTextPart;

- (void)done;
- (int)appendData:(NSData *)arg0;
- (char)forTextPart;
- (void)setForTextPart:(char)arg0;

@end
