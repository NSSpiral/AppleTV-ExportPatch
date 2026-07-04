/* Runtime dump - LTITunesDownloadTestManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRDownloadManager.h>

@protocol ATVITunesMetricsUploaderConnectionDelegate;
@protocol LTNetworkTestDownloadDelegate;

@class ATVNetworkStatisticsMonitor, LTDownloadTestConnection;
@interface LTITunesDownloadTestManager : BRDownloadManager <LTNetworkTestDownloadDelegate, ATVITunesMetricsUploaderConnectionDelegate>
{
    NSDictionary * _uploadUserInput;
    NSArray * _downloadURLs;
    NSArray * _avDownloadURLs;
    NSMutableDictionary * _optionalHeadersDictionary;
    NSString * _speedTestGUID;
    unsigned int _currentNetworkDownloadDataCount;
    unsigned int _currentNetworkAVDownloadDataCount;
    unsigned int _currentNetworkUploadDataCount;
    int _sessionDownloadCapTime;
    long _sessionDownloadCapBytes;
    unsigned int _totalTestsCount;
    unsigned int _homeShareTestURLsCount;
    char _networkTestInProgress;
    char _networkDownloadInProgress;
    char _networkUploadInProgress;
    char _shouldUploadLogs;
    NSMutableArray * _uploadLogData;
    LTDownloadTestConnection * _currentDownloadConnection;
    NSHTTPCookie * _downloadKeyCookie;
    NSDateFormatter * _dateFormat;
    ATVNetworkStatisticsMonitor * _networkMonitor;
}

- (void)_resetManager;
- (void)startNetworkSpeedTestWithUserInput:(NSMutableDictionary *)arg0 testType:(unsigned long)arg1;
- (id)_homeShareTestURLs;
- (id)_httpDownloads;
- (id)_avDownloads;
- (char)_startNextDownloadTest;
- (NSDictionary *)dictionaryForDownload:(id)arg0 includingTCPStats:(char)arg1;
- (char)_startNextAVDownloadTest;
- (void)connection:(LTDownloadTestConnection *)arg0 didGetMeasuredBytesPerSecond:(double)arg1 atTime:(double)arg2;
- (char)networkDiagnosticsAvailable;
- (char)shouldPerformMatchingAVDownloadTests;
- (int)downloadCapTime;
- (void)setSessionDownloadCapTime:(int)arg0;
- (long)downloadCapBytes;
- (void)setSessionDownloadCapBytes:(long)arg0;
- (char)networkTestInProgress;
- (void)startNetworkSpeedTestWithUserInput:(NSMutableDictionary *)arg0;
- (void)cancelNetworkSpeedTest;
- (void)_pauseAllDownloads;
- (void)_uploadNetworkSamplingData;
- (void)_resumeAllDownloads;
- (NSDictionary *)dictionaryForDownload:(id)arg0;
- (void)dealloc;
- (LTITunesDownloadTestManager *)init;
- (void)connection:(LTDownloadTestConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connectionDidFinishLoading:(LTDownloadTestConnection *)arg0;
- (void).cxx_destruct;

@end
