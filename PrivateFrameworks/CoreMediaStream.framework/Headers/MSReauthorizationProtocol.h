/* Runtime dump - MSReauthorizationProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSReauthorizationProtocol : MSStreamsProtocol
{
    struct __MSRPCContext _context;
    NSArray * _assetsInFlight;
}

- (void)dealloc;
- (void)setDelegate:(<MSStreamsProtocolDelegate> *)arg0;
- (<MSStreamsProtocolDelegate> *)delegate;
- (void).cxx_destruct;
- (MSReauthorizationProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)requestReauthorizationForAssets:(NSArray *)arg0;
- (void)_coreProtocolDidFinishResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;
- (void)_coreProtocolDidFailAuthenticationError:(NSError *)arg0;
- (void)abort;

@end
