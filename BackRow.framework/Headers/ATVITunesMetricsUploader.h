/* Runtime dump - ATVITunesMetricsUploader
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class LTDownloadTestConnection;
@interface ATVITunesMetricsUploader : BRSingleton
{
    NSMutableArray * _uploadQueue;
    NSMutableDictionary * _logCurrentlyUploading;
    int _lastDSID;
}

@property (retain) NSMutableArray * uploadQueue;
@property int lastDSID;
@property (retain) NSMutableDictionary * logCurrentlyUploading;

+ (ATVITunesMetricsUploader *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (unsigned long long)preferredAccountDSID;
+ (NSString *)generateGUID;

- (void)enqueueMetricsDictionary:(NSDictionary *)arg0 withDelegate:(NSObject *)arg1;
- (void)enqueueBlock:(id /* block */)arg0;
- (void)uploadAvailableMetrics;
- (void)_sendNextUploadLog;
- (int)lastDSID;
- (void)setLastDSID:(int)arg0;
- (NSData *)_copyCompressedData:(NSData *)arg0;
- (NSString *)_downloadSpeedTestKVSDomain;
- (char)sendLogDictionary:(NSDictionary *)arg0;
- (void)setUploadQueue:(NSMutableArray *)arg0;
- (NSMutableDictionary *)logCurrentlyUploading;
- (void)setLogCurrentlyUploading:(NSMutableDictionary *)arg0;
- (void)augmentDownloadInfoWithExtraData:(NSData *)arg0;
- (void)dealloc;
- (ATVITunesMetricsUploader *)init;
- (void)connection:(LTDownloadTestConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connectionDidFinishLoading:(LTDownloadTestConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(NSURLResponse *)arg1;
- (NSMutableArray *)uploadQueue;
- (NSURLConnection *)connection:(NSURLConnection *)arg0 willCacheResponse:(NSURLResponse *)arg1;

@end
