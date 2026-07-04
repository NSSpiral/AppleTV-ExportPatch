/* Runtime dump - PFUbiquitySaveSnapshot
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySaveSnapshot : NSObject
{
    NSDate * _transactionDate;
    NSString * _modelVersionHash;
    NSString * _exportingPeerID;
    NSString * _localPeerID;
    NSMutableDictionary * _storeNameToStoreSaveSnapshots;
}

@property (retain, nonatomic) NSDate * transactionDate;
@property (readonly, nonatomic) NSString * modelVersionHash;
@property (readonly, nonatomic) NSString * exportingPeerID;
@property (readonly, nonatomic) NSArray * storeNames;
@property (readonly, nonatomic) NSString * localPeerID;

- (NSString *)modelVersionHash;
- (NSString *)localPeerID;
- (NSString *)exportingPeerID;
- (NSString *)storeSaveSnapshotForStoreName:(NSString *)arg0;
- (NSDate *)transactionDate;
- (void)setTransactionDate:(NSDate *)arg0;
- (PFUbiquitySaveSnapshot *)initWithSaveNotification:(NSNotification *)arg0 withLocalPeerID:(NSString *)arg1;
- (NSArray *)storeNames;
- (NSObject *)storeSaveSnapshotForStore:(NSObject *)arg0;
- (PFUbiquitySaveSnapshot *)initWithTransactionLog:(PFUbiquityTransactionLog *)arg0;
- (void)dealloc;
- (NSString *)description;

@end
