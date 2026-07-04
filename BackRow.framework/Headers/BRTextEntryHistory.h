/* Runtime dump - BRTextEntryHistory
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol ATVSettingsSaver;
@interface BRTextEntryHistory : BRSingleton <ATVSettingsSaver>
{
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSArray * _clientIdentifiers;
    NSArray * _behaviorIdentifiers;
    NSArray * _behaviorsCache;
    NSArray * _historyItemStringsCache;
    char _allClientsCached;
    char _allBehaviorsCached;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BRTextEntryHistory *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)addPathsToSaveTo:(NSMutableSet *)arg0;
- (void)registerClient:(NSObject *)arg0 withTextEntryBehaviors:(id)arg1 maxItemsPerBehavior:(id)arg2;
- (void)setHistoryItem:(RadioHistoryItem *)arg0 forClients:(id)arg1 textEntryBehaviors:(NSArray *)arg2;
- (void)deleteAllHistoryItemsForClients:(id)arg0;
- (id)historyForClients:(id)arg0 textEntryBehaviors:(NSArray *)arg1;
- (void)deleteHistoryItem:(NSObject *)arg0 forClients:(id)arg1 textEntryBehaviors:(NSArray *)arg2;
- (void)deleteAllHistoryItemsForClients:(id)arg0 textEntryBehaviors:(NSArray *)arg1;
- (void)_addClient:(NSObject *)arg0 behaviors:(NSArray *)arg1 maxItemsPerBehavior:(id)arg2;
- (void)_validateCacheAgainstClientIdentifiers:(id)arg0 behaviorIdentifiers:(NSArray *)arg1;
- (void)_performAction:(int)arg0 withHistoryItem:(RadioHistoryItem *)arg1 forClients:(id)arg2 textEntryBehaviors:(NSArray *)arg3;
- (void)_saveContext;
- (void)_refreshDataCacheForClients:(id)arg0 behaviors:(NSArray *)arg1;
- (void)deleteTextEntryBehaviors:(id)arg0 forClients:(id)arg1;
- (void)_addHistoryItem:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_deleteHistoryItem:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1;
- (void)_deleteAllHistoryItemsForClient:(NSObject *)arg0;
- (void)_deleteAllTextEntryHistory;
- (void)_displayAllTextEntryHistory;
- (void)dealloc;
- (BRTextEntryHistory *)init;
- (NSManagedObjectModel *)managedObjectModel;
- (NSManagedObjectContext *)managedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
