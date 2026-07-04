/* Runtime dump - TSPDocumentResourceDataProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDataProvider : NSObject <TSPDocumentResourceDownloadNotificationProtocol, TSPDocumentResourceDownloader>
{
    TSPDocumentResourceManager * _manager;
    TSPObjectContext * _context;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _storagesCache;
    NSMutableArray * _downloadItems;
    NSMutableSet * _infosToDownload;
    long long _estimatedDownloadSize;
    char _isEstimatedDownloadSizePrecise;
    char _didCancelDownloads;
    char _didNotifyObjectContext;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char needsDownload;
@property (readonly, nonatomic) long long estimatedDownloadSize;
@property (readonly, nonatomic) char isEstimatedDownloadSizePrecise;

+ (void)didCompleteDocumentResourceDownloadWithDigestString:(NSString *)arg0;
+ (void)registerDownloadNotificationClass:(Class)arg0;

- (char)needsDownload;
- (void)cancelDownloads;
- (long long)estimatedDownloadSize;
- (char)isEstimatedDownloadSizePrecise;
- (NSObject *)downloadWithDelegate:(NSObject *)arg0 description:(NSString *)arg1;
- (NSString *)dataStorageForDigestString:(NSString *)arg0 locator:(NSString *)arg1 extension:(id *)arg2;
- (id)dataStorageForSageLocator:(id)arg0;
- (void)cacheDataForDigestString:(NSString *)arg0 locator:(NSString *)arg1 extension:(id *)arg2;
- (NSString *)dataForDigestString:(NSString *)arg0 locator:(NSString *)arg1 filename:(NSString *)arg2;
- (TSPDocumentResourceDataProvider *)initWithManager:(TSPDocumentResourceManager *)arg0 context:(TSPObjectContext *)arg1;
- (NSString *)dataStorageForDigestString:(NSString *)arg0 locator:(NSString *)arg1 extension:(id *)arg2 needsDownload:(char *)arg3;
- (NSString *)dataForDigestString:(NSString *)arg0 locator:(NSString *)arg1 filename:(NSString *)arg2 needsDownload:(char *)arg3;
- (TSPDocumentResourceDataProvider *)init;
- (void).cxx_destruct;

@end
