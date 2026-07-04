/* Runtime dump - DADConnection
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DADConnection : NSObject
{
    NSObject<OS_xpc_object> * _conn;
    NSObject<OS_dispatch_queue> * _muckingWithConn;
    NSObject<OS_dispatch_queue> * _muckingWithInFlightCollections;
    NSMutableSet * _accountIdsWithAlreadyResetCerts;
    NSMutableSet * _accountIdsWithAlreadyResetThrottleTimers;
    id _statusReportBlock;
    NSMutableDictionary * _inFlightSearchQueries;
    NSMutableDictionary * _inFlightFolderChanges;
    NSMutableDictionary * _inFlightAttachmentDownloads;
    NSMutableDictionary * _inFlightCalendarAvailabilityRequests;
    NSMutableDictionary * _inFlightCalendarDirectorySearches;
    NSMutableDictionary * _inFlightShareRequests;
    NSMutableDictionary * _inFlightOofSettingsRequests;
}

+ (DADConnection *)sharedConnection;
+ (DADConnection *)sharedConnectionIfServerIsRunning;
+ (void)setShouldIgnoreAccountChanges;

- (char)performServerContactsSearch:(id)arg0 forAccountWithID:(int)arg1;
- (void)cancelServerContactsSearch:(id)arg0;
- (char)updateContentsOfAllFoldersForAccountID:(NSObject *)arg0 andDataclass:(int)arg1 isUserRequested:(char)arg2;
- (char)updateFolderListForAccountID:(NSObject *)arg0 andDataclasses:(int)arg1 isUserRequested:(char)arg2;
- (void)externalIdentificationForAccountID:(NSObject *)arg0 resultsBlock:(id /* block */)arg1;
- (NSObject *)requestCalendarAvailabilityWithAccountID:(NSObject *)arg0 startDate:(NSDate *)arg1 endDate:(NSDate *)arg2 ignoredEventID:(NSString *)arg3 addresses:(struct __CFArray * *)arg4 resultsBlock:(id /* block */)arg5 completionBlock:(/* block */ id)arg6;
- (void)cancelCalendarAvailabilityRequestWithID:(int)arg0;
- (NSObject *)performCalendarDirectorySearchWithAccountID:(NSObject *)arg0 terms:(NSSet *)arg1 recordTypes:(NSMutableArray *)arg2 resultLimit:(unsigned int)arg3 resultsBlock:(id /* block */)arg4 completionBlock:(/* block */ id)arg5;
- (void)cancelCalendarDirectorySearchWithID:(int)arg0;
- (void)dealloc;
- (DADConnection *)init;
- (DADConnection *)_init;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;
- (char)registerForInterrogationWithBlock:(id /* block */)arg0;
- (void)_foldersUpdated:(id)arg0;
- (void)fillOutCurrentEASTimeZoneInfo;
- (char)resumeWatchingFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1;
- (char)watchFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1;
- (char)stopWatchingFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1;
- (char)processMeetingRequests:(id)arg0 deliveryIdsToClear:(id)arg1 deliveryIdsToSoftClear:(id)arg2 inFolderWithId:(NSObject *)arg3 forAccountWithId:(NSObject *)arg4;
- (char)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg0 deleted:(char)arg1 foldersTag:(NSString *)arg2 forAccountID:(NSObject *)arg3;
- (char)suspendWatchingFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1;
- (char)processFolderChange:(NSDictionary *)arg0 forAccountWithID:(int)arg1;
- (void)reportFolderItemsSyncSuccess:(char)arg0 forFolderWithID:(int)arg1 withItemsCount:(unsigned int)arg2 andAccountWithID:(int)arg3;
- (char)requestPolicyUpdateForAccountID:(NSObject *)arg0;
- (char)updateContentsOfFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1 andDataclass:(int)arg2 isUserRequested:(char)arg3;
- (void)_tearDownInFlightObjects;
- (void)_reallyRegisterForInterrogation;
- (void)_serverDiedWithReason:(NSString *)arg0;
- (void)_dispatchMessage:(NSString *)arg0;
- (NSData *)decodedErrorFromData:(NSData *)arg0;
- (NSURLRequest *)_createReplyToRequest:(NSURLRequest *)arg0 withProperties:(NSDictionary *)arg1;
- (void)_resetCertWarningsForAccountId:(NSObject *)arg0 andDataclasses:(int)arg1 isUserRequested:(char)arg2;
- (void)_requestDaemonChangeAgentMonitoringStatus:(char)arg0 waitForReply:(char)arg1;
- (void)_resetThrottleTimersForAccountId:(NSObject *)arg0;
- (char)updateContentsOfFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1 andDataclasses:(int)arg2 isUserRequested:(char)arg3;
- (char)updateContentsOfAllFoldersForAccountID:(NSObject *)arg0 andDataclasses:(int)arg1 isUserRequested:(char)arg2;
- (void)_sendSynchronousXPCMessageWithParameters:(NSDictionary *)arg0 handlerBlock:(id /* block */)arg1;
- (void)_cancelDownloadsWithIDs:(int)arg0 error:(NSError *)arg1;
- (char)_performOofSettingsRequest:(NSURLRequest *)arg0 forAccountWithID:(int)arg1 forUpdate:(char)arg2;
- (void)_registerForAppResumedNotification;
- (void)resetTimersAndWarnings;
- (void)_policyKeyChanged:(NSNotification *)arg0;
- (void)_logDataAccessStatus:(id)arg0;
- (void)_serverContactsSearchQueryFinished:(id)arg0;
- (void)_folderChangeFinished:(id)arg0;
- (void)_getStatusReportsFromClient:(NSObject *)arg0;
- (void)_downloadProgress:(id)arg0;
- (void)_downloadFinished:(id)arg0;
- (void)_shareResponseFinished:(id)arg0;
- (void)_oofSettingsRequestsFinished:(id)arg0;
- (void)_calendarAvailabilityRequestReturnedResults:(NSArray *)arg0;
- (void)_calendarAvailabilityRequestFinished:(id)arg0;
- (void)_calendarDirectorySearchReturnedResults:(NSArray *)arg0;
- (void)_calendarDirectorySearchFinished:(id)arg0;
- (NSObject *)currentPolicyKeyForAccountID:(NSObject *)arg0;
- (void)requestDaemonStartMonitoringAgents;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)removeStoresForAccountWithID:(int)arg0;
- (void)requestDaemonShutdown;
- (char)updateContentsOfFoldersWithKeys:(NSArray *)arg0 forAccountID:(NSObject *)arg1 andDataclass:(int)arg2;
- (char)updateContentsOfAllFoldersForAccountID:(NSObject *)arg0 andDataclass:(int)arg1;
- (id)beginDownloadingAttachmentWithUUID:(id)arg0 accountID:(NSString *)arg1 queue:(NSObject *)arg2 progressBlock:(id /* block */)arg3 completionBlock:(/* block */ id)arg4;
- (void)cancelDownloadingAttachmentWithDownloadID:(NSObject *)arg0 error:(NSError *)arg1;
- (void)respondToSharedCalendarInvite:(int)arg0 forCalendarWithID:(int)arg1 accountID:(NSString *)arg2 queue:(NSObject *)arg3 completionBlock:(id /* block */)arg4;
- (id)statusReports;
- (NSString *)activeSyncDeviceIdentifier;
- (char)retrieveOofSettingsRequest:(NSURLRequest *)arg0 forAccountWithID:(int)arg1;
- (char)updateOofSettingsRequest:(NSURLRequest *)arg0 forAccountWithID:(int)arg1;
- (char)isOofSettingsSupportedForAccountWithID:(int)arg0;
- (char)updateFolderListForAccountID:(NSObject *)arg0 andDataclasses:(int)arg1;
- (char)updateFolderListForAccountID:(NSObject *)arg0 andDataclasses:(int)arg1 requireChangedFolders:(char)arg2 isUserRequested:(char)arg3;
- (void)handleURL:(NSURL *)arg0;

@end
