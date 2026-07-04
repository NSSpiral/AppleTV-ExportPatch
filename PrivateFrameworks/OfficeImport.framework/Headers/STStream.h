/* Runtime dump - STStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STStream : STSStgObject
{
    struct _Stream * m_pCStream;
}

@property (readonly, nonatomic) struct _Stream * cStream;

- (void)dealloc;
- (void)close;
- (STStream *)initWithCStream:(struct _Stream *)arg0;
- (void)releaseCStream;
- (NSDictionary *)getInfo;
- (void)seek:(int)arg0 fromOrigin:(int)arg1;
- (unsigned int)getPos;
- (void)setClass:(struct ?)arg0;
- (NSData *)readBytes:(unsigned int)arg0;
- (char)readChar8;
- (unsigned char)readUInt8;
- (unsigned char)readBool8;
- (short)readSInt16;
- (unsigned short)readUInt16;
- (int)readSInt32;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (float)readFloat32;
- (double)readFloat64;
- (unsigned short)readChar16;
- (NSString *)readString16:(unsigned int)arg0;
- (void)writeBytes:(NSData *)arg0;
- (void)writeUInt8:(unsigned char)arg0;
- (void)writeChar8:(char)arg0;
- (void)writeBool8:(unsigned char)arg0;
- (void)writeSInt16:(short)arg0;
- (void)writeUInt16:(unsigned short)arg0;
- (void)writeSInt32:(int)arg0;
- (void)writeUInt32:(unsigned int)arg0;
- (void)writeFloat32:(float)arg0;
- (void)writeFloat64:(double)arg0;
- (void)writeChar16:(unsigned short)arg0;
- (void)writeString16:(NSString *)arg0;
- (void)writeString16NoTerminator:(id)arg0;
- (struct _Stream *)cStream;

@end
