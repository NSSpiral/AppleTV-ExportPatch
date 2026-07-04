/* Runtime dump - BBObserverServerProxy
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface>
{
    char _isValid;
    char _isEstablished;
    BBObserver * _observerWeak;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) BBObserver * observerWeak;
@property (retain, nonatomic) NSXPCConnection * connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;

+ (BBObserverServerProxy *)xpcInterface;

- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (MCResourceProgressObserver *)observer;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (void)setObserverFeed:(unsigned int)arg0 asLightsAndSirensGateway:(id)arg1 priority:(unsigned int)arg2;
- (void)setObserverFeed:(unsigned int)arg0 attachToLightsAndSirensGateway:(id)arg1;
- (void)getSectionOrderRuleWithHandler:(id /* block */)arg0;
- (void)getSectionInfoForCategory:(int)arg0 withHandler:(id /* block */)arg1;
- (void)requestNoticesBulletinsForSectionID:(NSObject *)arg0;
- (void)requestTodayBulletinsForSectionID:(NSObject *)arg0;
- (void)requestFutureBulletinsForSectionID:(NSObject *)arg0;
- (void)getSortDescriptorsForSectionID:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)getActiveAlertBehaviorOverridesWithHandler:(id /* block */)arg0;
- (void)getPrivilegedSenderTypesWithHandler:(id /* block */)arg0;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id /* block */)arg0;
- (void)getUniversalSectionIDForSectionID:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)getPrimaryAttachmentDataForBulletinID:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg0 sectionID:(NSString *)arg1 withHandler:(id /* block */)arg2;
- (void)handleResponse:(NSURLResponse *)arg0;
- (void)clearSection:(id)arg0;
- (void)clearBulletinIDs:(id)arg0 inSection:(UITableViewSection *)arg1;
- (void)removeBulletins:(id)arg0 inSection:(UITableViewSection *)arg1 fromFeeds:(unsigned int)arg2;
- (void)getSectionParametersForSectionID:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)getAttachmentPNGDataForBulletinID:(NSObject *)arg0 sizeConstraints:(NSArray *)arg1 withHandler:(id /* block */)arg2;
- (void)getAttachmentAspectRatioForBulletinID:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)finishedWithBulletinID:(NSString *)arg0 transactionID:(unsigned int)arg1;
- (void)updateSectionOrderRule:(NSObject *)arg0;
- (void)updateSectionOrder:(id)arg0 forCategory:(int)arg1;
- (void)updateSectionInfo:(NSDictionary *)arg0 inCategory:(int)arg1;
- (void)updateSectionParameters:(NSDictionary *)arg0 forSectionID:(NSObject *)arg1;
- (void)noteAlertBehaviorOverridesChanged:(NSNotification *)arg0;
- (void)noteAlertBehaviorOverrideStateChanged:(NSNotification *)arg0;
- (void)noteServerReceivedResponseForBulletin:(id)arg0;
- (void)updateBulletin:(id)arg0 forFeeds:(unsigned int)arg1;
- (void)updateBulletin:(id)arg0 forFeeds:(unsigned int)arg1 withHandler:(id /* block */)arg2;
- (void)getObserverDebugInfo:(NSDictionary *)arg0;
- (char)established;
- (BBObserver *)observerWeak;
- (void)setObserverWeak:(BBObserver *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (BBObserverServerProxy *)initWithObserver:(NSObject *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;

@end
