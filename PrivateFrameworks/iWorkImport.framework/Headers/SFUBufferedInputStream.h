/* Runtime dump - SFUBufferedInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream>
{
    <SFUInputStream> * mStream;
    char * mBuffer;
    unsigned long mBufferSize;
    long long mBufferOffset;
    long long mBufferStart;
    long long mBufferEnd;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (SFUBufferedInputStream *)initWithStream:(NSObject *)arg0;
- (SFUBufferedInputStream *)initWithStream:(NSObject *)arg0 bufferSize:(unsigned long)arg1;
- (char)seekWithinBufferToOffset:(long long)arg0;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (SFUBufferedInputStream *)initWithStream:(NSObject *)arg0 dataLength:(long long)arg1;
- (unsigned long)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;
- (char)canSeek;

@end
