/* Runtime dump - PLStorageOperator
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLStorageOperator : PLOperator

+ (id)entryEventPointDefinitionOTA;
+ (PLStorageOperator *)entryEventPointDefinitionArchive;
+ (PLStorageOperator *)entryEventPointDefinitionMerge;
+ (NSDictionary *)entryEventForwardDefinitionSchemaChange;
+ (NSDictionary *)entryEventForwardDefinitionConfiguration;
+ (NSSet *)entryEventForwardDefinitionTimeOffset;
+ (NSArray *)entryEventPointDefinitions;
+ (NSArray *)entryEventForwardDefinitions;

- (void)log;
- (void)logEventForwardTimeOffset:(NSSet *)arg0;
- (void)logEventPointMerge:(id)arg0;
- (void)logEventNoneConfiguration:(NSDictionary *)arg0;
- (void)logEventForwardSchemaChange:(NSDictionary *)arg0;
- (void)logEventPointOTA:(id)arg0;
- (void)logEventPointArchive:(id)arg0;
- (void)initOperatorDependancies;
- (NSDate *)trimmingConditionsForRolloverAtDate:(NSDate *)arg0;

@end
