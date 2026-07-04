/* Runtime dump - PTPInitFailPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitFailPacket : NSObject
{
    unsigned long _reason;
}

- (NSString *)description;
- (unsigned long)reason;
- (PTPInitFailPacket *)initWithReason:(unsigned long)arg0;
- (NSData *)contentForTCP;
- (PTPInitFailPacket *)initWithTCPBuffer:(void *)arg0;
- (void)setReason:(unsigned long)arg0;

@end
