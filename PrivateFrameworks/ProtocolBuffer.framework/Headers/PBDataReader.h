/* Runtime dump - PBDataReader
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBDataReader : NSObject
{
    unsigned int _pos;
    char _error;
    char * _bytes;
    NSData * _data;
    unsigned int _length;
}

@property unsigned int length;
@property unsigned int position;

- (void)dealloc;
- (unsigned int)length;
- (NSData *)data;
- (PBDataReader *)initWithData:(NSData *)arg0;
- (void)setPosition:(unsigned int)arg0;
- (unsigned int)position;
- (unsigned int)offset;
- (void)setLength:(unsigned int)arg0;
- (char)isAtEnd;
- (float)readFloat;
- (NSData *)readData;
- (NSString *)readString;
- (char)hasError;
- (char)seekToOffset:(unsigned int)arg0;
- (NSData *)readBytes:(unsigned int)arg0;
- (unsigned int)readBigEndianFixed32;
- (unsigned short)readBigEndianFixed16;
- (char)hasMoreData;
- (void)updateData:(NSData *)arg0;
- (void)readTag:(unsigned short *)arg0 andType:(char *)arg1;
- (char)skipValueWithTag:(unsigned short)arg0 andType:(unsigned char)arg1;
- (unsigned long long)readBigEndianFixed64;
- (NSObject *)readProtoBuffer;
- (char)readInt8;
- (long long)readVarInt;
- (double)readDouble;
- (int)readInt32;
- (long long)readInt64;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (int)readSint32;
- (long long)readSint64;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (int)readSfixed32;
- (long long)readSfixed64;
- (char)readBOOL;
- (char)mark:(struct ? *)arg0;
- (void)recall:(struct ? *)arg0;
- (NSString *)readBigEndianShortThenString;

@end
