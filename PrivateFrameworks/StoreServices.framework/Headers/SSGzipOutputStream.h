/* Runtime dump - SSGzipOutputStream
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSGzipOutputStream : NSOutputStream
{
    NSOutputStream * _actualOutputStream;
    struct z_stream_s _stream;
    NSError * _streamError;
    char * _streamOutBuffer;
    unsigned int _streamOutBufferSize;
    unsigned int _streamContentLength;
}

- (unsigned int)streamStatus;
- (SSGzipOutputStream *)initToMemory;
- (void)dealloc;
- (SSGzipOutputStream *)init;
- (void)close;
- (char)hasSpaceAvailable;
- (void)open;
- (int)write:(char *)arg0 maxLength:(unsigned int)arg1;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (SSGzipOutputStream *)initToFileAtPath:(NSString *)arg0 append:(char)arg1;
- (int)_consumeStreamOutput:(char)arg0;
- (void)_setStreamError:(int)arg0 context:(NSObject *)arg1;
- (unsigned int)streamContentLength;

@end
