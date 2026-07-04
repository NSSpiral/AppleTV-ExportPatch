/* Runtime dump - MFBase64Encoder
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBase64Encoder : MFBaseFilterDataConsumer
{
    char * _table;
    unsigned long _left;
    id _leftovers;
    unsigned long _line;
    unsigned long _lineBreak;
    char _padChar;
}

@property (nonatomic) unsigned long lineBreak;
@property (nonatomic) char allowSlash;
@property (nonatomic) char padChar;

- (void)done;
- (int)appendData:(NSData *)arg0;
- (void)setLineBreak:(unsigned long)arg0;
- (char)allowSlash;
- (unsigned long)lineBreak;
- (char)padChar;
- (MFBase64Encoder *)initWithConsumers:(NSArray *)arg0;
- (void)setStandardLineBreak;
- (void)setAllowSlash:(char)arg0;
- (void)setPadChar:(char)arg0;

@end
