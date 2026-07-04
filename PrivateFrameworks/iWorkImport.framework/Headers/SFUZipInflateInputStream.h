/* Runtime dump - SFUZipInflateInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    <SFUBufferedInputStream> * mInput;
    char * mOutBuffer;
    unsigned long long mOutBufferSize;
    char mReachedEnd;
    char mIsFromZip;
    unsigned long mCalculatedCrc;
    unsigned long mCheckCrc;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (SFUZipInflateInputStream *)initWithInput:(NSString *)arg0;
- (SFUZipInflateInputStream *)initWithOffset:(long long)arg0 end:(long long)arg1 uncompressedSize:(unsigned long long)arg2 crc:(unsigned long)arg3 dataRepresentation:(NSData *)arg4;
- (unsigned long)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;
- (void)setupInflateStream;
- (long long)totalCompressedBytesConsumed;
- (char)canSeek;

@end
