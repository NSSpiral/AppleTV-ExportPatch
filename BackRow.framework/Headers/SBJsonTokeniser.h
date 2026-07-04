/* Runtime dump - SBJsonTokeniser
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class SBJsonUTF8Stream;
@interface SBJsonTokeniser : NSObject
{
    SBJsonUTF8Stream * _stream;
    NSString * _error;
}

@property (copy) NSString * error;

- (int)getToken:(id *)arg0;
- (char)decodeHexQuad:(unsigned short *)arg0;
- (char)decodeEscape:(unsigned short)arg0 into:(unsigned short *)arg1;
- (int)match:(char *)arg0 length:(unsigned int)arg1 retval:(int)arg2;
- (int)getStringToken:(id *)arg0;
- (int)getNumberToken:(id *)arg0;
- (SBJsonTokeniser *)init;
- (void)appendData:(NSData *)arg0;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;

@end
