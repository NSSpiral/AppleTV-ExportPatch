/* Runtime dump - MFUUDecoder
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFUUDecoder : MFBaseFilterDataConsumer
{
    unsigned long _begin;
    unsigned long _end;
    unsigned long _length;
    unsigned long _readBytes;
    id _encoded;
    char _beginComplete;
    char _dataComplete;
    char _validLength;
    char _lineComplete;
    char _passthrough;
}

- (void)done;
- (int)appendData:(NSData *)arg0;

@end
