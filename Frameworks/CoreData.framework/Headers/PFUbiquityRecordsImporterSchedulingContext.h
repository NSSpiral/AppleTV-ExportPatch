/* Runtime dump - PFUbiquityRecordsImporterSchedulingContext
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject
{
    NSMutableSet * _scheduledLogLocations;
    NSMutableSet * _pendingLogLocations;
    NSMutableSet * _failedLogLocations;
    NSMutableSet * _ignoredLogLocations;
    NSMutableDictionary * _logLocationsToEncounteredErrors;
    int _lock;
}

@property (readonly, nonatomic) NSSet * pendingLogLocations;
@property (readonly, nonatomic) NSSet * scheduledLogLocations;
@property (readonly, nonatomic) NSSet * failedLogLocations;
@property (readonly, nonatomic) NSSet * ignoredLogLocations;
@property (readonly, nonatomic) NSDictionary * logLocationsToEncounteredErrors;

- (NSSet *)pendingLogLocations;
- (void)transactionLogAtLocation:(NSObject *)arg0 failedToOpenWithError:(NSError *)arg1;
- (void)transactionLogAtLocationWasIgnored:(id)arg0;
- (void)transactionLogAtLocationWasScheduled:(id)arg0;
- (NSDictionary *)logLocationsToEncounteredErrors;
- (NSSet *)failedLogLocations;
- (NSSet *)scheduledLogLocations;
- (void)addPendingLogLocation:(NSObject *)arg0;
- (void)addPendingLogLocations:(id)arg0;
- (NSSet *)ignoredLogLocations;
- (PFUbiquityRecordsImporterSchedulingContext *)initWithPendingLogLocations:(NSSet *)arg0;
- (void)failedTransactionLogAtLocationRecovered:(id)arg0;
- (void)unionWithSchedulingContext:(PFUbiquityRecordsImporterSchedulingContext *)arg0;
- (void)dealloc;
- (PFUbiquityRecordsImporterSchedulingContext *)init;
- (NSString *)description;

@end
