/* Runtime dump - SFUMemoryInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream>
{
    NSData * mData;
    char * mStart;
    char * mCurrent;
    char * mEnd;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SFUMemoryInputStream *)initWithData:(NSData *)arg0;
- (long long)offset;
- (void)close;
- (SFUMemoryInputStream *)initWithData:(NSData *)arg0 offset:(unsigned long)arg1 length:(unsigned long)arg2;
- (char)seekWithinBufferToOffset:(long long)arg0;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (unsigned long)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;
- (char)canSeek;

@end
