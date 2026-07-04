/* Runtime dump - StreamingUnzipper
 * Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol>
{
    long long _sandboxToken;
    void * _decompressionOutputBuffer;
    NSXPCConnection * _xpcConnection;
    StreamingUnzipState * _currentState;
}

@property (weak, nonatomic) NSXPCConnection * xpcConnection;

- (void)dealloc;
- (StreamingUnzipper *)init;
- (void).cxx_destruct;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;
- (void)setupUnzipperWithOutputPath:(NSURL *)arg0 sandboxExtensionToken:(char *)arg1 options:(NSDictionary *)arg2 withReply:(id /* block */)arg3;
- (void)supplyBytes:(NSData *)arg0 withReply:(id /* block */)arg1;
- (void)supplyRemappableData:(NSData *)arg0 withReply:(id /* block */)arg1;
- (void)supplyDispatchData:(NSData *)arg0 withReply:(id /* block */)arg1;
- (void)supplyXPCData:(NSData *)arg0 withReply:(id /* block */)arg1;
- (void)suspendStreamWithReply:(id /* block */)arg0;
- (void)finishStreamWithReply:(id /* block */)arg0;
- (void)_setErrorState;
- (NSData *)_beginNonStreamablePassthroughWithRemainingBytes:(void *)arg0 length:(void)arg1;
- (void)_supplyBytes:(char *)arg0 length:(unsigned int)arg1 withReply:(id /* block */)arg2;

@end
