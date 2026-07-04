/* Runtime dump - OISFUZipInflateInputStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    <OISFUBufferedInputStream> * mInput;
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
- (OISFUZipInflateInputStream *)initWithInput:(NSString *)arg0;
- (OISFUZipInflateInputStream *)initWithOffset:(long long)arg0 end:(long long)arg1 uncompressedSize:(unsigned long long)arg2 crc:(unsigned long)arg3 dataRepresentation:(NSData *)arg4;
- (unsigned long)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;
- (void)setupInflateStream;
- (long long)totalCompressedBytesConsumed;
- (char)canSeek;

@end
