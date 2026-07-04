/* Runtime dump - MSVArtworkService
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkService : NSObject
{
    NSOperationQueue * _serviceThrottlingOperationQueue;
    NSXPCConnection * _serverConnection;
}

@property (retain, nonatomic) NSOperationQueue * serviceThrottlingOperationQueue;
@property (retain, nonatomic) NSXPCConnection * serverConnection;

+ (MSVArtworkService *)sharedService;

- (void)dealloc;
- (MSVArtworkService *)init;
- (void).cxx_destruct;
- (void)setServiceThrottlingOperationQueue:(NSOperationQueue *)arg0;
- (NSOperationQueue *)serviceThrottlingOperationQueue;
- (void)setServerConnection:(NSXPCConnection *)arg0;
- (NSXPCConnection *)serverConnection;
- (void)sendRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;

@end
