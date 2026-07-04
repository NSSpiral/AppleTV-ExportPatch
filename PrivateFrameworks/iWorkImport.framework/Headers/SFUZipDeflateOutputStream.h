/* Runtime dump - SFUZipDeflateOutputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream>
{
    <SFUOutputStream> * mOutputStream;
    struct z_stream_s mDeflateStream;
    char * mOutBuffer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (SFUZipDeflateOutputStream *)initWithOutputStream:(NSObject *)arg0;
- (NSInputStream *)inputStream;
- (void)seekToOffset:(long long)arg0 whence:(int)arg1;
- (char)canCreateInputStream;
- (NSObject *)closeLocalStream;
- (void)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (char)canSeek;

@end
