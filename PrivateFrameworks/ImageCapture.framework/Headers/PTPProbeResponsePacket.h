/* Runtime dump - PTPProbeResponsePacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPProbeResponsePacket : NSObject

- (NSString *)description;
- (NSData *)contentForTCP;
- (PTPProbeResponsePacket *)initWithTCPBuffer:(void *)arg0;

@end
