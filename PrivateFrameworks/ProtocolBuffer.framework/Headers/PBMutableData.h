/* Runtime dump - PBMutableData
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBMutableData : NSMutableData
{
    char * p;
    char * buffer;
    char * end;
}

- (void)dealloc;
- (unsigned int)length;
- (PBMutableData *)initWithCapacity:(unsigned int)arg0;
- (void *)bytes;
- (void)setLength:(unsigned int)arg0;
- (void *)mutableBytes;
- (void)_pb_growCapacityBy:(unsigned int)arg0;

@end
