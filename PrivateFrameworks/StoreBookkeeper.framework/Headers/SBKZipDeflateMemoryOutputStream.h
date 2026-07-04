/* Runtime dump - SBKZipDeflateMemoryOutputStream
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKZipDeflateMemoryOutputStream : NSObject
{
    NSMutableData * deflatedData;
    struct z_stream_s zstream;
    char * _outputBuffer;
    int _bufferingSize;
}

+ (NSData *)dataByDeflatingData:(NSData *)arg0;

- (void)dealloc;
- (id)close;
- (void).cxx_destruct;
- (char)writeBuffer:(char *)arg0 size:(unsigned long)arg1;
- (SBKZipDeflateMemoryOutputStream *)initWithBufferingSize:(int)arg0 compressionType:(unsigned int)arg1;

@end
