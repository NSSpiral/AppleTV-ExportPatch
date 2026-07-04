/* Runtime dump - PTPProbeRequestPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPProbeRequestPacket : NSObject

- (NSString *)description;
- (NSData *)contentForTCP;
- (PTPProbeRequestPacket *)initWithTCPBuffer:(void *)arg0;

@end
