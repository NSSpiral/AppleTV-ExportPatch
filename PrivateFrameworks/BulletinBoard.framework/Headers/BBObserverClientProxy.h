/* Runtime dump - BBObserverClientProxy
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverClientProxy : NSObject <BBObserverServerInterface, BBObserverClientInterface>
{
    NSXPCConnection * _connection;
    BBServer * _serverWeak;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _bulletinIDsToTransaction;
    NSString * _clientBundleIdentifier;
}

@property (retain, nonatomic) NSXPCConnection * connection;
@property (nonatomic) BBServer * serverWeak;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSMutableDictionary * bulletinIDsToTransaction;
@property (retain, nonatomic) NSString * clientBundleIdentifier;

+ (BBObserverClientProxy *)xpcInterface;

- (void)dealloc;
- (NSString *)description;
- (NSXPCConnection *)server;
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
- (BBObserverClientProxy *)initWithServer:(NSObject *)arg0 connection:(NSXPCConnection *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (NSObject *)currentTransactionForBulletinID:(NSObject *)arg0;
- (void)updateBulletin:(id)arg0 forFeeds:(unsigned int)arg1;
- (void)removeTransaction:(NSObject *)arg0;
- (unsigned int)incrementedTransactionIDForBulletinID:(NSObject *)arg0;
- (id)transactionBulletinIDs;
- (void)updateBulletin:(id)arg0 forFeeds:(unsigned int)arg1 withHandler:(id /* block */)arg2;
- (void)getObserverDebugInfo:(NSDictionary *)arg0;
- (NSString *)clientBundleIdentifier;
- (BBServer *)serverWeak;
- (void)setServerWeak:(BBServer *)arg0;
- (NSMutableDictionary *)bulletinIDsToTransaction;
- (void)setBulletinIDsToTransaction:(NSMutableDictionary *)arg0;
- (void)setClientBundleIdentifier:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
