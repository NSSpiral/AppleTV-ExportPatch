/* Runtime dump - PBMessageStreamWriter
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMessageStreamWriter : NSObject
{
    NSOutputStream * _stream;
}

- (void)dealloc;
- (PBMessageStreamWriter *)initWithOutputStream:(NSObject *)arg0;
- (char)writeMessage:(NSString *)arg0;

@end
