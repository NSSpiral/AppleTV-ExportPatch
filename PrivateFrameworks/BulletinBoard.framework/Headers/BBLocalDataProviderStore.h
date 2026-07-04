/* Runtime dump - BBLocalDataProviderStore
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBLocalDataProviderStore : NSObject <BBLocalDataProviderFactoryStore, BBDataProviderStore>
{
    <BBDataProviderStoreDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _dataProvidersBySectionID;
    NSMutableDictionary * _dataProvidersByUniversalSectionID;
    NSMutableArray * _localFactories;
}

@property (retain, nonatomic) NSMutableDictionary * dataProvidersBySectionID;
@property (retain, nonatomic) NSMutableDictionary * dataProvidersByUniversalSectionID;
@property (retain, nonatomic) NSMutableArray * localFactories;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)localDataProviderStoreWithDelegate:(<BBDataProviderStoreDelegate> *)arg0 dataProviderQueue:(NSObject *)arg1;

- (void)dealloc;
- (NSString *)debugDescription;
- (void)removeDataProviderWithSectionID:(NSString *)arg0;
- (void)addParentSectionInfo:(NSDictionary *)arg0 displayName:(NSString *)arg1 icon:(UIImage *)arg2 unversalSectionID:(NSObject *)arg3;
- (void)addDataProvider:(NSObject *)arg0;
- (void)addParentSectionInfo:(NSDictionary *)arg0 displayName:(NSString *)arg1 icon:(UIImage *)arg2;
- (NSArray *)debugDescriptionWithChildren:(unsigned int)arg0;
- (NSObject *)dataProviderForSectionID:(NSObject *)arg0;
- (void)_queue_removeDataProvider:(NSObject *)arg0;
- (NSObject *)dataProviderForUniversalSectionID:(NSObject *)arg0;
- (void)removeDataProvider:(NSObject *)arg0;
- (void)performBlockOnDataProviders:(id)arg0;
- (void)loadAllDataProviders;
- (BBLocalDataProviderStore *)initWithDelegate:(<BBDataProviderStoreDelegate> *)arg0 dataProviderQueue:(NSObject *)arg1;
- (void)_loadDataProviderPluginBundle:(NSObject *)arg0;
- (void)_addDataProviderClass:(Class)arg0;
- (void)_addLocalDataProviderFactoryOfClass:(Class)arg0;
- (void)_queue_addDataProvider:(NSObject *)arg0;
- (NSMutableDictionary *)dataProvidersBySectionID;
- (void)setDataProvidersBySectionID:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)dataProvidersByUniversalSectionID;
- (void)setDataProvidersByUniversalSectionID:(NSMutableDictionary *)arg0;
- (NSMutableArray *)localFactories;
- (void)setLocalFactories:(NSMutableArray *)arg0;

@end
