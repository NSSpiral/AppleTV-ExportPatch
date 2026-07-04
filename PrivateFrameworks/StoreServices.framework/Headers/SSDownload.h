/* Runtime dump - SSDownload
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownload : SSEntity <SSXPCCoding>
{
    NSMutableDictionary * _localAssets;
    SSDownloadMetadata * _metadata;
    NSNumber * _prioritizeAboveDownload;
    SSDownloadStatus * _status;
}

@property (readonly) long long persistentIdentifier;
@property (readonly) char cancelable;
@property (copy) SSDownloadPolicy * downloadPolicy;
@property (readonly) long long downloadSizeLimit;
@property (readonly, nonatomic) char external;
@property (readonly, nonatomic) id downloadIdentifier;
@property (retain, nonatomic) NSArray * assets;
@property (copy, nonatomic) SSDownloadMetadata * metadata;
@property (retain, nonatomic) SSDownloadStatus * status;
@property (readonly) SSXPCConnection * _XPCConnection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (SSDownload *)initWithPersistentIdentifier:(long long)arg0;
- (char)addAsset:(NSSet *)arg0 forType:(NSObject *)arg1;
- (NSError *)failureError;
- (void)setDownloadHandler:(SSDownloadHandler *)arg0 completionBlock:(id /* block */)arg1;
- (NSObject *)assetsForType:(NSObject *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (NSString *)downloadIdentifier;
- (long long)bytesDownloaded;
- (long long)bytesTotal;
- (long long)persistentIdentifier;
- (long long)downloadSizeLimit;
- (NSString *)downloadPhaseIdentifier;
- (void)setDownloadPolicy:(SSDownloadPolicy *)arg0;
- (void)prioritizeAboveDownload:(NSNumber *)arg0 completionBlock:(id /* block */)arg1;
- (void)dealloc;
- (double)percentComplete;
- (void)resume;
- (char)isExternal;
- (void)pause;
- (SSDownloadStatus *)status;
- (void)setStatus:(SSDownloadStatus *)arg0;
- (NSArray *)assets;
- (void)setMetadata:(SSDownloadMetadata *)arg0;
- (SSDownloadMetadata *)metadata;
- (void)setAssets:(NSArray *)arg0;
- (NSData *)_errorWithData:(NSData *)arg0;
- (char)isEligibleForRestore:(id *)arg0;
- (SSDownloadPolicy *)downloadPolicy;
- (NSError *)_errorWithXPCReply:(id /* block */)arg0;
- (void)_applyPhase:(NSObject *)arg0 toStatus:(GEORPProblemStatus *)arg1;
- (void)_resetLocalIVars;
- (void)setValuesWithStoreDownloadMetadata:(NSData *)arg0;
- (NSURL *)_newAssetWithURL:(NSURL *)arg0 assetType:(int)arg1;
- (NSArray *)_initWithLocalPropertyValues:(NSArray *)arg0;
- (NSString *)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (char)isCancelable;
- (SSNetworkConstraints *)networkConstraints;
- (char)removeAsset:(NSSet *)arg0;
- (void)setBackgroundNetworkingJobGroupName:(NSString *)arg0;
- (void)setNetworkConstraints:(SSNetworkConstraints *)arg0;
- (void)_addCachedExternalValues:(NSArray *)arg0;
- (void)_addCachedPropertyValues:(NSArray *)arg0;
- (SSDownload *)initWithDownloadMetadata:(NSData *)arg0;
- (void)handleWithDownloadHandler:(SSDownload *)arg0 completionBlock:(id /* block */)arg1;
- (char)isBackgroundNetworkingUserInitiated;
- (void)setBackgroundNetworkingUserInitiated:(char)arg0;
- (void)_resetStatus;
- (SSXPCConnection *)_XPCConnection;

@end
