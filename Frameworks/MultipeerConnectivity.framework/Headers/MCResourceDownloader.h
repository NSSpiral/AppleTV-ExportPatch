/* Runtime dump - MCResourceDownloader
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession * _urlSession;
    NSURLSessionDataTask * _urlTask;
    id _urlResponseHandler;
    MCSession * _session;
    NSString * _resourceName;
    MCPeerID * _peerID;
}

@property (retain, nonatomic) NSURLSession * urlSession;
@property (retain, nonatomic) NSURLSessionDataTask * urlTask;
@property (nonatomic) id urlResponseHandler;
@property (nonatomic) MCSession * session;
@property (copy, nonatomic) NSString * resourceName;
@property (retain, nonatomic) MCPeerID * peerID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MCPeerID *)peerID;
- (void)setPeerID:(MCPeerID *)arg0;
- (void)setUrlTask:(NSURLSessionDataTask *)arg0;
- (void)syncCloseStreamForSession:(NSObject *)arg0 withError:(NSError *)arg1;
- (void)sendData:(NSData *)arg0 fromByteOffset:(unsigned int)arg1;
- (MCResourceDownloader *)initWithSession:(MCSession *)arg0 resourceUrl:(NSURL *)arg1 name:(NSString *)arg2 peerID:(MCPeerID *)arg3;
- (NSURLSessionDataTask *)urlTask;
- (id /* block */)urlResponseHandler;
- (void)setUrlResponseHandler:(id /* block */)arg0;
- (void)dealloc;
- (void)setUrlSession:(NSURLSession *)arg0;
- (MCSession *)session;
- (void)setSession:(MCSession *)arg0;
- (void)URLSession:(NSURLSession *)arg0 task:(NSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(NSURLSession *)arg0 dataTask:(NSURLSessionDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (NSString *)resourceName;
- (void)setResourceName:(NSString *)arg0;
- (NSURLSession *)urlSession;

@end
