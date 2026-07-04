/* Runtime dump - BRCXPCRegularIPCsClient
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)presentAcceptDialogsForShareURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)setupInstanceWithDict:(id)arg0 reply:(id /* block */)arg1;
- (void)resetBudgets:(id)arg0 reply:(id /* block */)arg1;
- (void)dumpDatabaseTo:(id)arg0 containerID:(NSObject *)arg1 reply:(id /* block */)arg2;
- (void)performSelfCheck:(id)arg0 reply:(id /* block */)arg1;
- (void)printStatus:(id)arg0 reply:(id /* block */)arg1;
- (void)gatherInformationForPath:(NSString *)arg0 reply:(id /* block */)arg1;
- (void)log:(SEL)arg0 function:(char *)arg1 source:(char *)arg2 line:(char *)arg3 message:(int)arg4;
- (void)forceSyncContainerID:(NSObject *)arg0 reply:(id /* block */)arg1;
- (void)computePurgableSpaceWithUrgency:(int)arg0 reply:(id /* block */)arg1;
- (void)purgeAmount:(long long)arg0 withUrgency:(int)arg1 reply:(id /* block */)arg2;
- (void)reclaimAmount:(long long)arg0 withUrgency:(int)arg1 reply:(id /* block */)arg2;
- (void)waitForFileSystemChangeProcessingWithReply:(id /* block */)arg0;
- (void)createContainerWithID:(int)arg0 ownerName:(NSString *)arg1 reply:(id /* block */)arg2;
- (void)getContainersByID:(NSObject *)arg0;
- (void)getContainerForURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getContainerForURLFast:(id)arg0 reply:(id /* block */)arg1;
- (void)checkinAskClientIfUsingUbiquity:(SEL)arg0;
- (void)presyncContainerWithID:(int)arg0 reply:(id /* block */)arg1;
- (void)getContainerURLForID:(NSObject *)arg0 reply:(id /* block */)arg1;
- (void)getContainerURLForID:(NSObject *)arg0 forPid:(int)arg1 reply:(id /* block */)arg2;
- (void)updateContainerMetadataForID:(SEL)arg0 bundleID:(NSString *)arg1;
- (void)deleteAllContentsOfContainerID:(NSObject *)arg0 onClient:(char)arg1 onServer:(char)arg2 reply:(id /* block */)arg3;
- (void)registerInitialSyncBarrierForID:(NSObject *)arg0 reply:(id /* block */)arg1;
- (void)startDownloadItemsAtURLs:(id)arg0 options:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)evictItemAtURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)thumbnailChangedForItemAtURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getNotificationInfoAtURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getAttributeValues:(NSArray *)arg0 forItemAtURL:(NSURL *)arg1 reply:(id /* block */)arg2;
- (void)getItemUpdateSenderWithReceiver:(NSObject *)arg0 reply:(id /* block */)arg1;
- (void)getNonLocalVersionSenderWithReceiver:(NSObject *)arg0 documentURL:(NSURL *)arg1 includeCachedVersions:(char)arg2 reply:(id /* block */)arg3;
- (void)getTotalApplicationDocumentUsageWithReply:(id /* block */)arg0;
- (void)getApplicationDocumentUsageInfoForBundleID:(NSObject *)arg0 withReply:(id /* block */)arg1;
- (void)didReceiveHandoffRequestForBundleID:(NSObject *)arg0 reply:(id /* block */)arg1;
- (void)copyLoggedInUserFirstAndLastNameWithReply:(id /* block */)arg0;
- (void)addExternalDocumentReferenceTo:(id)arg0 forPid:(int)arg1 inContainer:(NSObject *)arg2 underParent:(NSObject *)arg3 reply:(id /* block */)arg4;
- (void)bundleDidAccessExternalDocument:(SEL)arg0;
- (void)resolveConflictWithName:(NSString *)arg0 atURL:(NSURL *)arg1 reply:(id /* block */)arg2;
- (void)currentAccountCreateWithID:(int)arg0 reply:(id /* block */)arg1;
- (void)currentAccountLogoutWithReply:(id /* block */)arg0;
- (void)getContainersNeedingUpload:(id)arg0;
- (void)setMigrationStatus:(char)arg0 forDSID:(NSNumber *)arg1 shouldNotify:(char)arg2 reply:(id /* block */)arg3;
- (void)getMigrationStatusForPrimaryiCloudAccount:(NSObject *)arg0;
- (void)jetsamCloudDocsAppsWithReply:(id /* block */)arg0;
- (void)getBookmarkDataForURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)resolveBookmarkDataToURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getBackReferencingContainerIDsForURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getBackReferencingURLForURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getPublishedURLForItemAtURL:(NSURL *)arg0 forStreaming:(char)arg1 requestedTTL:(unsigned int)arg2 reply:(id /* block */)arg3;
- (void)forceConflictForURL:(NSURL *)arg0 bookmarkData:(NSData *)arg1 forcedEtag:(id)arg2 reply:(id /* block */)arg3;
- (void)getApplicationStatus:(id)arg0;
- (void)getApplicationStatusWithPID:(int)arg0 reply:(id /* block */)arg1;
- (void)getContainerStatusWithID:(int)arg0 reply:(id /* block */)arg1;
- (void)getContainerLastServerUpdateWithID:(int)arg0 reply:(id /* block */)arg1;
- (void)getIsContainerWithIDOverQuota:(id)arg0 reply:(id /* block */)arg1;
- (void)setiWorkPublishingInfoAtURL:(NSURL *)arg0 publish:(char)arg1 readonly:(char)arg2 reply:(id /* block */)arg3;
- (void)getiWorkPublishingInfoAtURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)getiWorkPublishingBadgingStatusAtURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)startOperation:(NSObject *)arg0 toCopySharingInfoAtURL:(NSURL *)arg1 reply:(id /* block */)arg2;
- (void)startOperation:(NSObject *)arg0 toCopySharingWebAuthTokenForContainerID:(NSObject *)arg1 reply:(id /* block */)arg2;
- (void)startOperation:(NSObject *)arg0 toCopySharingAccessToken:(NSString *)arg1 wantsPermissions:(char)arg2 reply:(id /* block */)arg3;
- (void)copyCurrentUserIdentifierWithReply:(id /* block */)arg0;
- (void)createSharingInfoForURL:(NSURL *)arg0 reply:(id /* block */)arg1;
- (void)startOperation:(NSObject *)arg0 toSaveSharingInfo:(NSDictionary *)arg1 reply:(id /* block */)arg2;
- (void)startOperation:(NSObject *)arg0 toDestroySharingInfo:(NSDictionary *)arg1 reply:(id /* block */)arg2;
- (void)copyBulkShareIDsAtURLs:(id)arg0 reply:(id /* block */)arg1;
- (void)startOperation:(NSObject *)arg0 toCopyShareURLForShare:(id)arg1 appName:(NSString *)arg2 reply:(id /* block */)arg3;
- (void)removeItemFromDisk:(id)arg0 reply:(id /* block */)arg1;
- (void)handleShareURL:(NSURL *)arg0 withBlock:(id /* block */)arg1;

@end
