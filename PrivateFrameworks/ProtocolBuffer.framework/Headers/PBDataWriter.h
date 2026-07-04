/* Runtime dump - PBDataWriter
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBDataWriter : NSObject
{
    PBMutableData * _data;
}

- (void)writeDouble:(double)arg0 forTag:(unsigned short)arg1;
- (void)dealloc;
- (PBDataWriter *)init;
- (PBMutableData *)data;
- (unsigned int)write:(char *)arg0 maxLength:(unsigned int)arg1;
- (void)writeData:(NSData *)arg0 forTag:(unsigned short)arg1;
- (void)writeBigEndianFixed16:(unsigned short)arg0;
- (void)writeBigEndianShortThenString:(NSString *)arg0;
- (void)writeInt32:(int)arg0 forTag:(unsigned short)arg1;
- (void)writeInt64:(long long)arg0 forTag:(unsigned short)arg1;
- (void)writeBOOL:(char)arg0 forTag:(unsigned short)arg1;
- (void)writeFixed32:(unsigned int)arg0 forTag:(unsigned short)arg1;
- (void)writeFloat:(float)arg0 forTag:(unsigned short)arg1;
- (void)writeUint32:(unsigned int)arg0 forTag:(unsigned short)arg1;
- (void)writeUint64:(unsigned long long)arg0 forTag:(unsigned short)arg1;
- (void)writeString:(NSString *)arg0 forTag:(unsigned short)arg1;
- (char)writeData:(NSData *)arg0;
- (void)writeSint32:(int)arg0 forTag:(unsigned short)arg1;
- (void)writeSint64:(long long)arg0 forTag:(unsigned short)arg1;
- (void)writeFixed64:(unsigned long long)arg0 forTag:(unsigned short)arg1;
- (void)writeSfixed32:(int)arg0 forTag:(unsigned short)arg1;
- (void)writeSfixed64:(long long)arg0 forTag:(unsigned short)arg1;
- (void)writeBigEndianFixed32:(unsigned int)arg0;
- (void)writeProtoBuffer:(NSObject *)arg0;
- (void)writeInt8:(char)arg0;
- (void)writeUint8:(unsigned char)arg0;
- (void)writeBareVarint:(unsigned long long)arg0;
- (void)writeTag:(unsigned short)arg0 andType:(unsigned char)arg1;
- (NSData *)immutableData;

@end
