/* Runtime dump - TSPDocumentResourceManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceManager : NSObject
{
    NSURL * _appDocumentResourcesURL;
    NSURL * _appDocumentResourcesMetadataURL;
    long _documentResourcesConfigurationToken;
    NSObject<OS_dispatch_queue> * _documentResourcesConfigurationQueue;
    NSDictionary * _documentResourcesConfiguration;
    long _sageDocumentResourcesConfigurationToken;
    NSMutableDictionary * _sageDocumentResourcesConfiguration;
    TSPDocumentResourceCache * _cache;
    TSUDownloadManager * _downloadManager;
}

@property (readonly, nonatomic) TSPDocumentResourceCache * cache;
@property (readonly, nonatomic) TSUDownloadManager * downloadManager;

+ (NSURL *)appDocumentResourcesMetadataURL;
+ (NSURL *)appDocumentResourcesURL;
+ (void)setAppDocumentResourcesURL:(NSURL *)arg0;
+ (void)setAppDocumentResourcesMetadataURL:(NSURL *)arg0;
+ (void)setSageAppDocumentResourcesURL:(NSURL *)arg0;
+ (TSPDocumentResourceManager *)sharedManager;

- (NSString *)newDataProviderForContext:(NSObject *)arg0;
- (NSString *)findDocumentResourceUsingDigestString:(NSString *)arg0 locator:(NSString *)arg1;
- (TSPDocumentResourceManager *)initWithAppDocumentResourcesURL:(NSURL *)arg0 appDocumentResourcesMetadataURL:(NSURL *)arg1 cache:(TSPDocumentResourceCache *)arg2 downloadManager:(TSUDownloadManager *)arg3;
- (NSString *)dataStorageForDigestString:(NSString *)arg0 locator:(NSString *)arg1 extension:(id *)arg2 infoToDownload:(id *)arg3;
- (NSString *)URLForAppDocumentResourceWithDigestString:(NSString *)arg0 extension:(id *)arg1;
- (NSMutableDictionary *)sageDocumentResourcesConfiguration;
- (NSDictionary *)documentResourcesConfiguration;
- (NSDictionary *)applicationDataStorageForInfo:(NSDictionary *)arg0 isValidated:(char)arg1;
- (NSDictionary *)cachedDocumentResourceDataStorageForInfo:(NSDictionary *)arg0 isValidated:(char)arg1;
- (id)sageAssetURLForLocator:(id)arg0;
- (NSString *)URLForCachedDocumentResourceWithDigestString:(NSString *)arg0;
- (TSPDocumentResourceManager *)init;
- (TSPDocumentResourceCache *)cache;
- (void).cxx_destruct;
- (void)clearCache;
- (TSUDownloadManager *)downloadManager;

@end
