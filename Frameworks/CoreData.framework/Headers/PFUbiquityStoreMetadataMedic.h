/* Runtime dump - PFUbiquityStoreMetadataMedic
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityStoreMetadataMedic : NSObject
{
    NSString * _localPeerID;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _storeName;
    NSPersistentStore * _store;
    NSSQLiteConnection * _connection;
}

@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) NSPersistentStore * store;
@property (readonly, nonatomic) NSSQLiteConnection * connection;

- (NSPersistentStore *)store;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (PFUbiquityStoreMetadataMedic *)initWithStore:(NSPersistentStore *)arg0 localPeerID:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (char)recoverMetadataWithError:(id *)arg0;
- (char)recoverBaselineMetadataWithImportContext:(PFUbiquityImportContext *)arg0 error:(id *)arg1;
- (char)recoverTransactionLogMetadataWithImportContext:(PFUbiquityImportContext *)arg0 error:(id *)arg1;
- (char)addTransactionHistoryEntriesForObjectIDs:(id)arg0 withImportContext:(PFUbiquityImportContext *)arg1 error:(id *)arg2;
- (char)cacheMetadataForTransactionLog:(id)arg0 withImportContext:(PFUbiquityImportContext *)arg1 error:(id *)arg2;
- (void)dealloc;
- (NSSQLiteConnection *)connection;

@end
