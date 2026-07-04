/* Runtime dump - BRCSharingAcceptFlowOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingAcceptFlowOperation : _BRCOperation <BRCForegroundClient, BRCOperationSubclass>
{
    BRCUserNotification * _userNotification;
    BRCAccountSession * _session;
    NSArray * _acceptationFlow;
    unsigned int _stepIndex;
    id _logSection;
    NSURL * _shareURL;
    CKShareID * _shareID;
    CKShareInfo * _shareInfo;
    BRCItemID * _sharedItemID;
    NSString * _unsaltedBookmarkData;
    BRCLocalContainer * _localContainer;
    BRCPrivateLocalContainer * _aliasContainer;
    NSURL * _shareDocumentURL;
    NSString * _shareDocumentFileProviderString;
    BRCXPCClient * _xpcClient;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * identifier;

+ (BRCSharingAcceptFlowOperation *)_runningShareIDs;
+ (void)_openShareURLInWebBrowser:(id)arg0 withReason:(NSString *)arg1;
+ (void)_openiCloudSettings;
+ (void)_openAppStoreForShareURL:(NSURL *)arg0;

- (NSString *)identifier;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:(NSObject *)arg0 error:(NSError *)arg1;
- (char)shouldRetryForError:(NSError *)arg0;
- (void)_performNextStep;
- (char)_isOwnerOrShareAlreadyAccepted;
- (char)_isOwner;
- (BRCSharingAcceptFlowOperation *)initWithShareURL:(NSURL *)arg0 client:(NSObject *)arg1 session:(BRCAccountSession *)arg2;
- (void)_isURLWellFormed;
- (void)_isAppInstalled;
- (void)_isUserSignedInToiCloudDrive;
- (void)_isAppProfileEnabled;
- (void)_fetchShareInfo;
- (void)_showSharingOpenDialog;
- (void)_acceptShareURL;
- (void)_createNecessaryContainers;
- (void)_waitForSharedItemToSyncDown;
- (void)_waitForFaultToBeOnDisk;
- (void)_downloadDocument;
- (void)_openSharedDocument;

@end
