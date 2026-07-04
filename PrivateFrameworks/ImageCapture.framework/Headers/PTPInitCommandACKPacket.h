/* Runtime dump - PTPInitCommandACKPacket
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitCommandACKPacket : NSObject
{
    unsigned long _connectionNumber;
    id _responderGUID;
    NSString * _responderFriendlyName;
}

- (void)dealloc;
- (NSString *)description;
- (NSData *)contentForTCP;
- (PTPInitCommandACKPacket *)initWithTCPBuffer:(void *)arg0;
- (PTPInitCommandACKPacket *)initWithConnectionNumber:(unsigned long)arg0 responderGUID:(char *)arg1 responderFriendlyName:(NSString *)arg2;
- (unsigned long)connectionNumber;
- (NSString *)responderGUIDString;
- (void)setConnectionNumber:(unsigned long)arg0;
- (char *)responderGUID;
- (void)setResponderGUID:(char *)arg0;
- (NSString *)responderFriendlyName;
- (void)setResponderFriendlyName:(NSString *)arg0;

@end
