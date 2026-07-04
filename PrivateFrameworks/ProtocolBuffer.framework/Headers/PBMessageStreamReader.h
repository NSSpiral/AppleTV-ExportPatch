/* Runtime dump - PBMessageStreamReader
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMessageStreamReader : NSObject
{
    NSInputStream * _stream;
    Class _classOfNextMessage;
    unsigned int _position;
}

@property Class classOfNextMessage;
@property (readonly) unsigned int position;

- (void)dealloc;
- (unsigned int)position;
- (Class)classOfNextMessage;
- (void)setClassOfNextMessage:(Class)arg0;
- (PBMessageStreamReader *)initWithStream:(NSInputStream *)arg0;
- (NSString *)nextMessage;

@end
