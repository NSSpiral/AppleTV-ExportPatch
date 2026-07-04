/* Runtime dump - GQZEntryInflateInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    long long mEnd;
    unsigned long mCalculatedCrc;
    unsigned long mCheckCrc;
    <GQZArchiveInputStream> * mInput;
    char * mOutBuffer;
    unsigned long mOutBufferSize;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (GQZEntryInflateInputStream *)initWithOffset:(long long)arg0 end:(long long)arg1 uncompressedSize:(unsigned long long)arg2 crc:(unsigned long)arg3 input:(NSObject *)arg4;
- (void)dealloc;
- (void).cxx_construct;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;

@end
