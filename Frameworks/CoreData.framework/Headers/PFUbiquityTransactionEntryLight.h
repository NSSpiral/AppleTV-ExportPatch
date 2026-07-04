/* Runtime dump - PFUbiquityTransactionEntryLight
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionEntryLight : NSObject
{
    PFUbiquityGlobalObjectID * _globalID;
    int _transactionType;
    NSString * _actingPeerID;
    NSString * _storeName;
    NSNumber * _transactionNumber;
    PFUbiquityLocation * _transactionLogLocation;
    PFUbiquityKnowledgeVector * _kv;
    NSDate * _transactionDate;
}

@property (retain, nonatomic) PFUbiquityGlobalObjectID * globalID;
@property (nonatomic) int transactionType;
@property (retain, nonatomic) NSString * actingPeerID;
@property (retain, nonatomic) NSString * storeName;
@property (retain, nonatomic) NSNumber * transactionNumber;
@property (retain, nonatomic) PFUbiquityLocation * transactionLogLocation;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * knowledgeVector;
@property (retain, nonatomic) NSDate * transactionDate;

- (NSString *)storeName;
- (PFUbiquityLocation *)transactionLogLocation;
- (PFUbiquityKnowledgeVector *)knowledgeVector;
- (void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (NSNumber *)transactionNumber;
- (void)setTransactionNumber:(NSNumber *)arg0;
- (void)setStoreName:(NSString *)arg0;
- (NSDate *)transactionDate;
- (void)setActingPeerID:(NSString *)arg0;
- (void)setGlobalID:(PFUbiquityGlobalObjectID *)arg0;
- (PFUbiquityGlobalObjectID *)globalID;
- (void)setTransactionLogLocation:(PFUbiquityLocation *)arg0;
- (void)setTransactionDate:(NSDate *)arg0;
- (void)setTransactionType:(int)arg0;
- (int)transactionType;
- (NSString *)actingPeerID;
- (PFUbiquityTransactionEntryLight *)initWithTransactionEntry:(PFUbiquityTransactionEntry *)arg0 ubiquityRootLocation:(PFUbiquityLocation *)arg1 andGlobalIDCache:(NSObject *)arg2;
- (void)dealloc;
- (PFUbiquityTransactionEntryLight *)init;
- (NSString *)description;

@end
