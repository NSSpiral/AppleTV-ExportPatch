/* Runtime dump - PTPInitEventACKPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitEventACKPacket : NSObject

- (NSString *)description;
- (NSData *)contentForTCP;
- (PTPInitEventACKPacket *)initWithTCPBuffer:(void *)arg0;

@end
