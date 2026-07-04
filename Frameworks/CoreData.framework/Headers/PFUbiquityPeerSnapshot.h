/* Runtime dump - PFUbiquityPeerSnapshot
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerSnapshot : NSObject
{
    NSDictionary * _logSnapshot;
    NSMutableDictionary * _diffFromPrevious;
    PFUbiquityKnowledgeVector * _kv;
    NSNumber * _transactionNumber;
    NSDate * _transactionDate;
    NSString * _exportingPeerID;
}

@property (readonly, nonatomic) NSDictionary * logSnapshot;
@property (readonly, nonatomic) NSDictionary * diffFromPrevious;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector * knowledgeVector;
@property (readonly, nonatomic) NSNumber * transactionNumber;
@property (readonly, nonatomic) NSDate * transactionDate;
@property (readonly, nonatomic) NSString * exportingPeerID;

- (NSString *)exportingPeerID;
- (PFUbiquityKnowledgeVector *)knowledgeVector;
- (NSNumber *)transactionNumber;
- (NSDate *)transactionDate;
- (PFUbiquityPeerSnapshot *)initWithTranasctionEntry:(id)arg0 andLogSnapshot:(NSObject *)arg1;
- (NSDictionary *)logSnapshot;
- (NSDictionary *)diffFromPrevious;
- (PFUbiquityPeerSnapshot *)initWithExportingPeerID:(NSString *)arg0 logSnapshot:(NSDictionary *)arg1 transactionNumber:(NSNumber *)arg2 transactionDate:(NSDate *)arg3 andKnowledgeVector:(id)arg4;
- (void)computeDiffToPreviousSnapshot:(NSObject *)arg0;
- (void)removeValuesChangedByPeerSnapshot:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;

@end
