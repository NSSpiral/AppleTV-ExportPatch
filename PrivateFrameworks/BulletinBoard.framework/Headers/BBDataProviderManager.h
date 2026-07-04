/* Runtime dump - BBDataProviderManager
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate>
{
    <BBDataProviderManagerDelegate> * _delegate;
    BBLocalDataProviderStore * _localDataProviderStore;
    BBRemoteDataProviderConnectionResolver * _remoteDataProviderResolver;
    NSObject<OS_dispatch_queue> * _queue;
    char _loadQueueSuspended;
    NSObject<OS_dispatch_queue> * _loadDataProviderQueue;
    NSMutableDictionary * _parentFactoriesBySectionID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)debugDescription;
- (NSArray *)debugDescriptionWithChildren:(unsigned int)arg0;
- (void)dataProviderStore:(NSObject *)arg0 didRemoveDataProvider:(NSObject *)arg1;
- (NSObject *)dataProviderForSectionID:(NSObject *)arg0;
- (void)dataProviderStore:(NSObject *)arg0 didAddDataProvider:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)dataProviderStore:(NSObject *)arg0 didAddParentSectionFactory:(NSObject *)arg1;
- (void)performBlockOnDataProviders:(id)arg0;
- (void)loadAllDataProviders;
- (NSObject *)universalSectionIDForSectionID:(NSObject *)arg0;
- (NSString *)localSectionIdentifierFromDismissalSectionIdentifer:(id)arg0;
- (void)noteSettingsChanged:(id)arg0 forSectionID:(NSObject *)arg1;
- (void)reloadIdentityForSectionID:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (NSDictionary *)rebuildSectionInfo:(NSDictionary *)arg0 forSectionID:(NSObject *)arg1;
- (NSObject *)_queue_getSectionInfoForSectionID:(NSObject *)arg0;
- (NSDictionary *)_configureSectionInfo:(NSDictionary *)arg0 forDataProvider:(NSObject *)arg1;
- (NSObject *)_queue_dataProviderForUniversalSectionID:(NSObject *)arg0;
- (NSObject *)parentSectionDataProviderFactoryForSectionID:(NSObject *)arg0;
- (NSObject *)_configureDataProvider:(NSObject *)arg0;
- (BBDataProviderManager *)initWithDelegate:(<BBDataProviderManagerDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;

@end
