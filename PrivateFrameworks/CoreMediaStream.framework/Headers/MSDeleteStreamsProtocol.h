/* Runtime dump - MSDeleteStreamsProtocol
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSDeleteStreamsProtocol : MSStreamsProtocol
{
    struct _MSDSPCContext _context;
    NSMutableArray * _collectionsInFlight;
}

@property (nonatomic) <MSDeleteStreamsProtocolDelegate> * delegate;

- (void).cxx_destruct;
- (MSDeleteStreamsProtocol *)initWithPersonID:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)_resetConnectionVariables;
- (void)_coreProtocolDidFinishResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;
- (void)_coreProtocolDidFailAuthenticationError:(NSError *)arg0;
- (void)sendDeletionRequestForAssetCollections:(id)arg0;
- (void)abort;

@end
