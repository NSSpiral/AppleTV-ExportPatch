/* Runtime dump - MCSessionStream
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCSessionStream : NSObject
{
    char _sourceSuspended;
    char _progressUnbounded;
    MCPeerID * _peerID;
    NSString * _name;
    unsigned int _streamID;
    int state;
    int _fd;
    NSObject<OS_dispatch_source> * _source;
    NSMutableData * _incomingBuffer;
    NSURL * _url;
    NSProgress * _progress;
    id _completionHandler;
    MCResourceDownloader * _urlDownloader;
    MCResourceProgressObserver * _observer;
}

@property (nonatomic) MCPeerID * peerID;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) unsigned int streamID;
@property (nonatomic) int state;
@property (nonatomic) int fd;
@property (nonatomic) NSObject<OS_dispatch_source> * source;
@property (nonatomic) char sourceSuspended;
@property (retain, nonatomic) NSMutableData * incomingBuffer;
@property (copy, nonatomic) NSURL * url;
@property (retain, nonatomic) NSProgress * progress;
@property (retain, nonatomic) MCResourceProgressObserver * observer;
@property (nonatomic) char progressUnbounded;
@property (copy, nonatomic) id completionHandler;
@property (retain, nonatomic) MCResourceDownloader * urlDownloader;

- (MCPeerID *)peerID;
- (void)setPeerID:(MCPeerID *)arg0;
- (int)fd;
- (void)setFd:(int)arg0;
- (char)sourceSuspended;
- (void)setSourceSuspended:(char)arg0;
- (NSMutableData *)incomingBuffer;
- (void)setIncomingBuffer:(NSMutableData *)arg0;
- (char)progressUnbounded;
- (void)setProgressUnbounded:(char)arg0;
- (MCResourceDownloader *)urlDownloader;
- (void)setUrlDownloader:(MCResourceDownloader *)arg0;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSURL *)url;
- (void)setProgress:(NSProgress *)arg0;
- (id /* block */)completionHandler;
- (void)setUrl:(NSURL *)arg0;
- (MCResourceProgressObserver *)observer;
- (void)setObserver:(MCResourceProgressObserver *)arg0;
- (NSObject<OS_dispatch_source> *)source;
- (void)setSource:(NSObject<OS_dispatch_source> *)arg0;
- (NSProgress *)progress;
- (void)setCompletionHandler:(id /* block */)arg0;
- (unsigned int)streamID;
- (void)setStreamID:(unsigned int)arg0;

@end
