/* Runtime dump - TSUZipInflateReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel>
{
    <TSUStreamReadChannel> * _readChannel;
    unsigned long _remainingUncompressedSize;
    unsigned int _CRC;
    char _validateCRC;
    struct z_stream_s _stream;
    unsigned long _outBufferSize;
    char * _outBuffer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSUZipInflateReadChannel *)initWithReadChannel:(<TSUStreamReadChannel> *)arg0 uncompressedSize:(unsigned long)arg1 CRC:(unsigned int)arg2 validateCRC:(char)arg3;
- (void)handleFailureWithHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (void)readWithHandler:(id /* block */)arg0;
- (void)prepareBuffer;
- (char)processData:(NSData *)arg0 inflateResult:(int *)arg1 CRC:(unsigned int *)arg2 isDone:(char)arg3 handler:(id /* block */)arg4;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;

@end
