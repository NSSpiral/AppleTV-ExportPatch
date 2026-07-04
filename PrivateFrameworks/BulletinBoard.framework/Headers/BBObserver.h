/* Runtime dump - BBObserver
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserver : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    struct ? _delegateFlags;
    NSMutableDictionary * _bulletinLifeAssertions;
    NSMutableDictionary * _sectionParameters;
    NSMutableDictionary * _attachmentInfoByBulletinID;
    NSMutableDictionary * _remainingFeedsByBulletinID;
    unsigned int _numberOfBulletinFetchesUnderway;
    NSMutableSet * _sectionIDsWithUpdatesUnderway;
    NSMutableDictionary * _bulletinUpdateQueuesBySectionID;
    BBObserverServerProxy * _serverProxy;
    char _isGateway;
    <BBObserverDelegate> * _delegate;
    unsigned int _observerFeed;
    NSString * _gatewayName;
    unsigned int _gatewayPriority;
}

@property (nonatomic) <BBObserverDelegate> * delegate;
@property (nonatomic) unsigned int observerFeed;
@property (readonly, copy, nonatomic) NSString * gatewayName;
@property (readonly, nonatomic) unsigned int gatewayPriority;

+ (void)initialize;

- (void)_commonInit:(CXCommon *)arg0;
- (void)dealloc;
- (void)setDelegate:(<BBObserverDelegate> *)arg0;
- (BBObserver *)init;
- (NSString *)description;
- (<BBObserverDelegate> *)delegate;
- (void)invalidate;
- (void)sendResponse:(NSURLResponse *)arg0;
- (BBObserver *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)isValid;
- (void)_invalidate;
- (BBObserver *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 forGateway:(BBSettingsGateway *)arg1;
- (void)getSectionInfoForCategory:(int)arg0 withCompletion:(id /* block */)arg1;
- (void)requestNoticesBulletinsForSectionID:(NSObject *)arg0;
- (void)requestTodayBulletinsForSectionID:(NSObject *)arg0;
- (void)requestFutureBulletinsForSectionID:(NSObject *)arg0;
- (void)_getAttachmentImagesIfPossibleForBulletin:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)clearSection:(id)arg0;
- (void)removeBulletins:(id)arg0 inSection:(UITableViewSection *)arg1 fromFeed:(unsigned int)arg2;
- (void)_getParametersIfNecessaryForSectionID:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (NSObject *)parametersForSectionID:(NSObject *)arg0;
- (NSObject *)_attachmentInfoForBulletinID:(NSObject *)arg0 create:(char)arg1;
- (void)_setAttachmentImage:(UIImage *)arg0 forKey:(NSString *)arg1 forBulletinID:(NSObject *)arg2;
- (char)_attachmentImagesFetchedForBulletin:(id)arg0;
- (NSObject *)_reasonableConstraintsForAttachmentType:(int)arg0;
- (void)_fetchAndProcessImageForBulletinID:(NSObject *)arg0 withKey:(NSString *)arg1 constraints:(NSArray *)arg2 attachmentType:(int)arg3 completion:(id /* block */)arg4;
- (void)_noteAttachmentImagesFetchedForBulletin:(id)arg0;
- (char)_attachmentSizesFetchedForBulletin:(id)arg0;
- (void)_setAttachmentSize:(struct CGSize)arg0 forKey:(NSString *)arg1 forBulletinID:(NSObject *)arg2;
- (void)_noteAttachmentSizesFetchedForBulletin:(id)arg0;
- (void)_getAttachmentSizesIfPossibleForBulletin:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)_getAttachmentImagesIfPossibleForBulletins:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)_getAttachmentSizesIfPossibleForBulletins:(id)arg0 withCompletion:(id /* block */)arg1;
- (NSObject *)_lifeAssertionForBulletinID:(NSObject *)arg0;
- (void)setObserverFeed:(unsigned int)arg0;
- (void)_dequeueBulletinUpdateIfPossibleForSection:(id)arg0;
- (void)_registerBulletin:(id)arg0 withTransactionID:(unsigned int)arg1;
- (void)_noteCompletedBulletinUpdateForSection:(id)arg0;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)_performOrEnqueueBulletinUpdate:(NSDate *)arg0 forSection:(/* block */ id)arg1;
- (BBObserver *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 asGateway:(id)arg1 priority:(unsigned int)arg2;
- (void)getSectionOrderRuleWithCompletion:(id /* block */)arg0;
- (void)requestListBulletinsForSectionID:(NSObject *)arg0;
- (void)getSortDescriptorsForSectionID:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)getAlertBehaviorOverridesWithCompletion:(id /* block */)arg0;
- (void)getPrivilegedSenderTypesWithCompletion:(id /* block */)arg0;
- (void)getPrivilegedAddressBookGroupRecordIDAndNameWithCompletion:(id /* block */)arg0;
- (void)getUniversalSectionIDForSectionID:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)getAttachmentImageForBulletin:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)getPrimaryAttachmentDataForBulletin:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg0 sectionID:(NSString *)arg1 withCompletion:(id /* block */)arg2;
- (void)clearBulletins:(id)arg0 inSection:(UITableViewSection *)arg1;
- (void)removeBulletins:(id)arg0 inSection:(UITableViewSection *)arg1;
- (void)_getParametersIfNecessaryForSectionIDs:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)getParametersForSectionID:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (NSString *)attachmentImageForKey:(NSString *)arg0 forBulletinID:(NSObject *)arg1;
- (struct CGSize)attachmentSizeForKey:(NSString *)arg0 forBulletinID:(NSObject *)arg1;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)assertionExpired:(id)arg0 transactionID:(unsigned int)arg1;
- (void)serverProxy:(BBObserverServerProxy *)arg0 connectionStateDidChange:(char)arg1;
- (void)_performBulletinFetch:(id)arg0;
- (void)_noteCompletedBulletinFetch;
- (void)updateBulletin:(id)arg0 forFeeds:(unsigned int)arg1 withReply:(id /* block */)arg2;
- (void)updateSectionOrderRule:(NSObject *)arg0;
- (void)updateSectionOrder:(id)arg0 forCategory:(int)arg1;
- (void)updateSectionInfo:(NSDictionary *)arg0 inCategory:(int)arg1;
- (void)updateSectionParameters:(NSDictionary *)arg0 forSectionID:(NSObject *)arg1;
- (void)noteAlertBehaviorOverridesChanged:(NSNotification *)arg0;
- (void)noteAlertBehaviorOverrideStateChanged:(NSNotification *)arg0;
- (void)noteServerReceivedResponseForBulletin:(id)arg0;
- (unsigned int)observerFeed;
- (NSString *)gatewayName;
- (unsigned int)gatewayPriority;
- (void)getSectionInfoWithCompletion:(id /* block */)arg0;

@end
