/* Runtime dump - PTPInitCommandRequestPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitCommandRequestPacket : NSObject
{
    id _initiatorGUID;
    NSString * _initiatorFriendlyName;
}

- (void)dealloc;
- (NSString *)description;
- (PTPInitCommandRequestPacket *)initWithInitiatorGUID:(char *)arg0 initiatorFriendlyName:(NSString *)arg1;
- (NSData *)contentForTCP;
- (PTPInitCommandRequestPacket *)initWithTCPBuffer:(void *)arg0;
- (char *)initiatorGUID;
- (void)setInitiatorGUID:(char *)arg0;
- (NSString *)initiatorFriendlyName;
- (void)setInitiatorFriendlyName:(NSString *)arg0;

@end
