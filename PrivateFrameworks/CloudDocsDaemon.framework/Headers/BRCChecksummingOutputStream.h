/* Runtime dump - BRCChecksummingOutputStream
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCChecksummingOutputStream : NSOutputStream
{
    struct CC_SHA1state_st _ctx;
    id _sig;
    char _isOpen;
}

@property (readonly, nonatomic) NSData * signature;

+ (NSString *)checksummingOutputStreamWithTag:(unsigned char)arg0;

- (void)close;
- (NSData *)signature;
- (BRCChecksummingOutputStream *)initWithTag:(unsigned char)arg0;
- (char)hasSpaceAvailable;
- (void)open;
- (int)write:(char *)arg0 maxLength:(unsigned int)arg1;

@end
