/* Runtime dump - LTDownloadTestConnection
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRDownload;
@interface LTDownloadTestConnection : NSObject <BRDownload>
{
    double _startTime;
    double _receivedResponseTime;
    double _elapsedTime;
    unsigned int _lastMarkedLength;
    double _cachedMeasuredBandwidth;
    double _endTime;
    NSTimer * _measuringTimer;
    NSString * _urlString;
    NSDictionary * _options;
    NSURLConnection * _urlConnection;
    unsigned int _fetchedDataLength;
    NSHTTPURLResponse * _urlResponse;
    NSMutableArray * _progressArray;
    int _downloadState;
    int _downloadContext;
    <LTNetworkTestDownloadDelegate> * _delegate;
    int _downloadCapTime;
    long _downloadCapBytes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)testContent;
- (unsigned int)fetchedDataLength;
- (LTDownloadTestConnection *)initWithURLString:(NSString *)arg0 andOptions:(NSDictionary *)arg1;
- (void)setDownloadCapTime:(int)arg0;
- (void)setDownloadCapBytes:(long)arg0;
- (id)progressLogs;
- (int)qualifiedDownloadState;
- (int)downloadStateContext;
- (double)timeUntilPlayable;
- (void)markProgress;
- (double)measuredBytesPerSecond;
- (void)setPlayable:(char)arg0;
- (int)downloadState;
- (void)dealloc;
- (void)setDelegate:(<LTNetworkTestDownloadDelegate> *)arg0;
- (LTDownloadTestConnection *)init;
- (<LTNetworkTestDownloadDelegate> *)delegate;
- (void)resume;
- (NSURLResponse *)response;
- (void)connection:(LTDownloadTestConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(NSData *)arg1;
- (void)connectionDidFinishLoading:(LTDownloadTestConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(NSURLResponse *)arg1;
- (NSDictionary *)options;
- (void).cxx_destruct;
- (double)startTime;
- (void)startConnection;
- (void)stopConnection;
- (void)pause;
- (double)elapsedTime;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willCacheResponse:(NSURLResponse *)arg1;
- (unsigned long long)expectedSize;
- (LTDownloadTestConnection *)initWithURLString:(NSString *)arg0;
- (unsigned int)expectedContentLength;
- (NSString *)contentType;
- (NSString *)originalURLString;
- (unsigned long long)byteCount;

@end
