/* Runtime dump - PFUbiquityMigrationAssistant
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMigrationAssistant : NSObject
{
    NSString * _ubiquityName;
    NSString * _localPeerID;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSMutableDictionary * _baselineLocationsByVersionHash;
    NSMutableDictionary * _logLocationsByVersionHash;
    NSMutableArray * _receiptLocations;
    NSMutableArray * _orderedReceipts;
    NSString * _previousModelVersionHash;
    NSString * _currentModelVersionHash;
}

@property (readonly, nonatomic) NSString * previousModelVersionHash;
@property (readonly, nonatomic) NSString * currentModelVersionHash;

- (PFUbiquityMigrationAssistant *)initWithUbiquityRootLocation:(PFUbiquityLocation *)arg0 peerID:(NSObject *)arg1 ubiquityName:(NSString *)arg2 modelVersionHash:(NSString *)arg3;
- (id)transactionLogLocationsForModelVersionHash:(id)arg0;
- (id)transactionLogLocationsByModelVersionHash;
- (id)baselineLocationsByModelVersionHash;
- (id)latestBaselineLocationSkipModelVersionHash:(id)arg0;
- (void)_populateBaselineAndTransactionLogLocations;
- (NSMutableArray *)receiptLocations;
- (char)canUseReceipts;
- (NSMutableArray *)orderedReceipts;
- (id)latestTransactionLogForModelVersionHash:(id)arg0;
- (char)electPreviousModelVersionHashFromTransactionLogsError:(id *)arg0;
- (NSString *)previousModelVersionHash;
- (NSString *)currentModelVersionHash;
- (void)dealloc;

@end
