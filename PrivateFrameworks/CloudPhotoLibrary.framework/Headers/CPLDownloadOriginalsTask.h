/* Runtime dump - CPLDownloadOriginalsTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLDownloadOriginalsTask : CPLEngineSyncEmergencyTask
{
    NSMutableArray * _cloudResources;
    NSMutableArray * _failedIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportResourceDownloadTask> * _downloadTask;
    NSMutableDictionary * _cloudIdentifierForLocalIdentifier;
    NSProgress * _progress;
    NSString * _typeIdentifier;
    NSString * _progressIdentifier;
    NSURL * _destinationURL;
    NSArray * _localIdentifiers;
}

@property (copy, nonatomic) NSString * typeIdentifier;
@property (copy, nonatomic) NSString * progressIdentifier;
@property (copy, nonatomic) NSURL * destinationURL;
@property (copy, nonatomic) NSArray * localIdentifiers;
@property (readonly, nonatomic) NSArray * failedIdentifiers;

+ (char)shouldCoalesceTasks;
+ (NSString *)taskIdentifier;

- (NSURL *)destinationURL;
- (void)setDestinationURL:(NSURL *)arg0;
- (void)launch;
- (NSString *)typeIdentifier;
- (void)cancel;
- (CPLDownloadOriginalsTask *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CPLDownloadOriginalsTask *)init;
- (unsigned int)priority;
- (void).cxx_destruct;
- (void)taskDidFinishWithError:(NSError *)arg0;
- (char)shouldStopSyncSession;
- (void)_downloadNextResource;
- (void)_filterCloudCache;
- (void)setTypeIdentifier:(NSString *)arg0;
- (NSString *)progressIdentifier;
- (void)setProgressIdentifier:(NSString *)arg0;
- (NSArray *)localIdentifiers;
- (void)setLocalIdentifiers:(NSArray *)arg0;
- (NSArray *)failedIdentifiers;

@end
