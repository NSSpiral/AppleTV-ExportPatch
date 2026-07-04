/* Runtime dump - PFUbiquityBaselineHeuristics
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineHeuristics : NSObject
{
    NSString * _localPeerID;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _modelVersionHash;
    int _numRequiredTransactions;
    long long _storeSize;
    long long _logSize;
    id _logToStoreSizeRatio;
    int _minLogBytes;
    PFUbiquityKnowledgeVector * _currentBaselineKV;
    PFUbiquityKnowledgeVector * _currentKV;
}

@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly, nonatomic) NSString * modelVersionHash;
@property (nonatomic) int numRequiredTransactions;
@property (readonly, nonatomic) long long storeSize;
@property (readonly, nonatomic) long long logSize;
@property (nonatomic) id logToStoreSizeRatio;
@property (nonatomic) int minLogBytes;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * currentBaselineKV;
@property (retain, nonatomic) PFUbiquityKnowledgeVector * currentKV;

- (void)setCurrentBaselineKV:(PFUbiquityKnowledgeVector *)arg0;
- (void)setCurrentKV:(PFUbiquityKnowledgeVector *)arg0;
- (PFUbiquityBaselineHeuristics *)initWithLocalPeerID:(NSString *)arg0 storeName:(NSString *)arg1 modelVersionHash:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
- (void)setNumRequiredTransactions:(int)arg0;
- (void)setStoreSize:(long long)arg0;
- (void)setLogSize:(long long)arg0;
- (void)setLogToStoreSizeRatio:(id)arg0;
- (void)setMinLogBytes:(int)arg0;
- (long long)bytesForFileAtPath:(NSString *)arg0;
- (NSString *)modelVersionHash;
- (char)haveEnoughTransactionsToRoll;
- (char)logsConsumeEnoughDiskSpace;
- (void)updateHeuristics;
- (char)canRollBaseline:(id *)arg0;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (int)numRequiredTransactions;
- (long long)storeSize;
- (long long)logSize;
- (id)logToStoreSizeRatio;
- (int)minLogBytes;
- (PFUbiquityKnowledgeVector *)currentBaselineKV;
- (PFUbiquityKnowledgeVector *)currentKV;
- (void)dealloc;
- (PFUbiquityBaselineHeuristics *)init;
- (PFUbiquityBaselineHeuristics *)copy;
- (NSString *)description;

@end
