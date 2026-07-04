/* Runtime dump - MSResetServerProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSResetServerProtocol : MSStreamsProtocol
{
    struct __MSRSPCContext _context;
}

- (void)dealloc;
- (void)setDelegate:(<MSStreamsProtocolDelegate> *)arg0;
- (<MSStreamsProtocolDelegate> *)delegate;
- (MSResetServerProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)_coreProtocolDidFailAuthenticationError:(NSError *)arg0;
- (void)_coreProtocolDidFinishError:(NSError *)arg0;
- (void)resetServerState;
- (void)abort;

@end
