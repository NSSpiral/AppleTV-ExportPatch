/* Runtime dump - SFUMemoryOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUMemoryOutputStream : NSObject <SFUOutputStream>
{
    NSMutableData * mData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (SFUMemoryOutputStream *)initWithData:(NSData *)arg0;
- (long long)offset;
- (void)close;
- (NSInputStream *)inputStream;
- (void)seekToOffset:(long long)arg0 whence:(int)arg1;
- (char)canCreateInputStream;
- (NSObject *)closeLocalStream;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (char)canSeek;

@end
