/* Runtime dump - PTPInitEventRequestPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitEventRequestPacket : NSObject
{
    unsigned long _connectionNumber;
}

- (NSString *)description;
- (NSData *)contentForTCP;
- (PTPInitEventRequestPacket *)initWithConnectionNumber:(unsigned long)arg0;
- (PTPInitEventRequestPacket *)initWithTCPBuffer:(void *)arg0;
- (unsigned long)connectionNumber;
- (void)setConnectionNumber:(unsigned long)arg0;

@end
