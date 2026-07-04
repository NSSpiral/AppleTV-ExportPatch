/* Runtime dump - PFUbiquityTransactionEntry
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionEntry : NSManagedObject

@property int transactionType;
@property (readonly) NSURL * transactionLogURL;
@property (retain, nonatomic) NSNumber * transactionTypeNum;
@property (retain, nonatomic) NSString * localIDStr;
@property (retain, nonatomic) NSNumber * transactionNumber;
@property (retain, nonatomic) NSString * globalIDStr;
@property (retain, nonatomic) NSDate * transactionDate;
@property (retain, nonatomic) NSString * transactionLogFilename;
@property (retain, nonatomic) NSString * knowledgeVectorString;
@property (retain, nonatomic) PFUbiquityPeer * actingPeer;
@property (retain, nonatomic) PFUbiquityStoreMetadata * storeMetadata;

+ (NSObject *)newTransactionEntryForObjectWithCompressedGlobalID:(NSObject *)arg0 withTransactionType:(int)arg1 importContext:(PFUbiquityImportContext *)arg2;
+ (PFUbiquityTransactionEntry *)createTransactionEntriesForCompressedObjectIDs:(id)arg0 withTransactionType:(int)arg1 withImportContext:(PFUbiquityImportContext *)arg2;
+ (NSObject *)transactionEntriesMatchingGlobalObjectID:(NSObject *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSObject *)transactionEntriesMatchingLocalObjectID:(NSObject *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSObject *)transactionEntriesAfterPeerState:(NSObject *)arg0 forStoreName:(NSString *)arg1 inManagedObjectContext:(NSObject *)arg2;
+ (NSObject *)deleteTransactionEntriesAfterPeerState:(NSObject *)arg0 forStoreName:(NSString *)arg1 inManagedObjectContext:(NSObject *)arg2;
+ (NSObject *)transactionEntriesForPeerID:(NSObject *)arg0 withTransactionNumber:(NSNumber *)arg1 inManagedObjectContext:(NSObject *)arg2;
+ (NSObject *)transactionEntriesForPeerID:(NSObject *)arg0 beforeTransacationNumber:(NSNumber *)arg1 forStoreNamed:(id)arg2 inManagedObjectContext:(NSObject *)arg3;
+ (NSString *)transactionEntryForGlobalIDString:(NSString *)arg0 withActingPeerID:(NSString *)arg1 atTransactionNumber:(NSNumber *)arg2 inManagedObjectContext:(NSObject *)arg3;

- (void)setTransactionType:(int)arg0;
- (int)transactionType;
- (PFUbiquityTransactionEntry *)initAndInsertIntoManagedObjectContext:(NSObject *)arg0;
- (NSURL *)transactionLogURL;

@end
