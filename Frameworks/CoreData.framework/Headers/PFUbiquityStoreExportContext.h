/* Runtime dump - PFUbiquityStoreExportContext
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityStoreExportContext : NSObject
{
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _localPeerID;
    NSString * _storeName;
    NSMutableSet * _transactionEntries;
    NSSQLCore * _store;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
}

@property (readonly, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) NSSet * transactionEntries;
@property (retain, nonatomic) NSSQLCore * store;
@property (retain, nonatomic) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;

- (NSSQLCore *)store;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (PFUbiquitySwitchboardCacheWrapper *)cacheWrapper;
- (void)setCacheWrapper:(PFUbiquitySwitchboardCacheWrapper *)arg0;
- (NSSet *)transactionEntries;
- (PFUbiquityStoreExportContext *)initWithStoreName:(NSString *)arg0 andUbiquityRootLocation:(NSObject *)arg1 forLocalPeerID:(NSObject *)arg2;
- (void)setStore:(NSSQLCore *)arg0;
- (NSObject *)addTransactionEntryForGlobalID:(NSObject *)arg0 andTransactionType:(int)arg1;
- (void)dealloc;
- (NSString *)description;

@end
