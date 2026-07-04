/* Runtime dump - ATVInstallableResourceManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol NSURLDownloadDelegate;

@class BRMerchant;
@interface ATVInstallableResourceManager : NSObject <NSURLDownloadDelegate>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _basePath;
    char _downloadingFile;
    char _downloadCompletedSuccessfully;
    NSMutableSet * _dirtyResourceRecords;
    NSArray * _resources;
}

@property (retain) NSArray * resources;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)_buildRecordsAtBasePath:(NSString *)arg0;
+ (NSString *)_buildRecordsForMerchantPath:(NSString *)arg0;
+ (ATVInstallableResourceManager *)sharedInstance;

- (id)resourceForMerchant:(id)arg0 named:(NSString *)arg1;
- (void)installResourceNamed:(id)arg0 version:(NSString *)arg1 url:(NSURL *)arg2 merchant:(BRMerchant *)arg3 completionHandler:(id /* block */)arg4;
- (NSString *)_initWithPath:(NSString *)arg0;
- (NSString *)_recordForName:(NSString *)arg0 merchant:(BRMerchant *)arg1;
- (void)_markAsDirty:(id)arg0;
- (char)_installDownloadedTarball:(id)arg0 to:(NSObject *)arg1 version:(NSString *)arg2;
- (unsigned long long)_bytesUsed;
- (void)_removeLeastRecentlyUsedResource;
- (NSString *)_merchantIdentifierFromPath:(NSString *)arg0;
- (id)_resourcesForMerchant:(id)arg0 named:(NSString *)arg1;
- (id)resourcesForMerchant:(id)arg0;
- (void)_saveDirtyResourcesNotification:(NSNotification *)arg0;
- (void)download:(NSURLDownload *)arg0 didFailWithError:(NSError *)arg1;
- (void)downloadDidFinish:(NSURLDownload *)arg0;
- (void)dealloc;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;

@end
