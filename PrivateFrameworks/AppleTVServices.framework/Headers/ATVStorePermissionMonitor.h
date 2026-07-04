/* Runtime dump - ATVStorePermissionMonitor
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStorePermissionMonitor : NSObject <PRRequestDelegate>
{
    id _permissionResponseBlock;
}

@property (copy, nonatomic) id permissionResponseBlock;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVStorePermissionMonitor *)sharedInstance;

- (void).cxx_destruct;
- (void)_registerDelegate;
- (NSOperationQueue *)atvRequestQueue;
- (NSURLRequest *)_pendingRequestInfoForRequest:(NSURLRequest *)arg0;
- (double)_maxTimeIntervalForNotification;
- (char)_shouldDoPurchaseForApprovedRequest:(NSURLRequest *)arg0;
- (void)_updatePendingInfo:(NSDictionary *)arg0 forRequest:(NSURLRequest *)arg1;
- (void)_prunePendingRequests;
- (char)_shouldNotifyUserAboutRequest:(NSURLRequest *)arg0;
- (void)_doPurchaseWithBuyParams:(NSString *)arg0 forRequest:(NSURLRequest *)arg1;
- (void)didCreateNewPermissionRequest:(NSURLRequest *)arg0;
- (void)permissionRequest:(NSURLRequest *)arg0 didChangeStatusTo:(unsigned int)arg1;
- (void)_willPerformStorePurchaseWithBuyParameters:(NSString *)arg0 forApprovedRequest:(NSURLRequest *)arg1 withHandler:(<BRSelectionHandler> *)arg2;
- (void)_shouldDownloadAssetsFromPurchaseWithBuyParameters:(NSString *)arg0 forApprovedRequest:(NSURLRequest *)arg1 withHandler:(<BRSelectionHandler> *)arg2;
- (void)performAuthorizationForApprovedRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)performCancellationForDeclinedRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)attemptLocalApprovalForRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (NSURLRequest *)requestStringForRequest:(NSURLRequest *)arg0 fromFamilyMember:(AAFamilyMember *)arg1 shownInNotification:(char)arg2;
- (NSURLRequest *)requestNotificationStringForRequest:(NSURLRequest *)arg0 fromFamilyMember:(AAFamilyMember *)arg1;
- (NSURLRequest *)responseNotificationStringForRequest:(NSURLRequest *)arg0 fromFamilyMember:(AAFamilyMember *)arg1;
- (void)fetchFamilyMembersForRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)_stringForStatus:(unsigned int)arg0;
- (id /* block */)permissionResponseBlock;
- (void)setPermissionResponseBlock:(id /* block */)arg0;

@end
