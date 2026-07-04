/* Runtime dump - PLEntryDefinition
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLEntryDefinition : NSObject

+ (int)cacheCountForEntryKey:(NSString *)arg0;
+ (NSObject *)entryDefinitionsForOperatorClass:(Class)arg0 andOperatorName:(NSString *)arg1;
+ (NSString *)entryDefinitionsForOperatorName:(NSString *)arg0;
+ (NSObject *)configsForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)keyConfigsForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)dynamicKeyConfigsForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)arrayKeysForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)aggregateBucketDefinitionsForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)allKeysForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)allDynamicKeysForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)allAggregateKeysForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)allAggregatePrimaryKeysForEntryDefinition:(NSObject *)arg0;
+ (char)hasDynamicKeysForEntryDefinition:(NSObject *)arg0;
+ (char)hasArrayKeysForEntryDefinition:(NSObject *)arg0;
+ (char)isOnDemandQueryableForEntryDefinition:(NSObject *)arg0;
+ (char)filterEntryLoggingForEntryDefinition:(NSObject *)arg0;
+ (char)isAggregateForEntryDefinition:(NSObject *)arg0;
+ (double)schemaVersionForEntryDefinition:(NSObject *)arg0;
+ (int)cacheCountForEntryDefition:(id)arg0;
+ (char)cacheSQLPrepareStatementForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)manualSortOrderForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)logSelectorStringForEntryDefinition:(NSObject *)arg0;
+ (PLEntryDefinition *)entryDefinitionsForOperator:(id)arg0;
+ (NSObject *)entryDefinitionsForOperatorClass:(Class)arg0;
+ (NSString *)configsForEntryKey:(NSString *)arg0;
+ (NSString *)keyConfigsForEntryKey:(NSString *)arg0;
+ (NSString *)dynamicKeyConfigsForEntryKey:(NSString *)arg0;
+ (NSString *)arrayKeysForEntryKey:(NSString *)arg0;
+ (NSString *)aggregateBucketDefinitionsForEntryKey:(NSString *)arg0;
+ (NSString *)allKeysForEntryKey:(NSString *)arg0;
+ (NSString *)allDynamicKeysForEntryKey:(NSString *)arg0;
+ (NSString *)allAggregateKeysForEntryKey:(NSString *)arg0;
+ (NSString *)allAggregatePrimaryKeysForEntryKey:(NSString *)arg0;
+ (char)hasDynamicKeysForEntryKey:(NSString *)arg0;
+ (char)hasArrayKeysForEntryKey:(NSString *)arg0;
+ (char)filterEntryLoggingForEntryKey:(NSString *)arg0;
+ (char)isAggregateForEntryKey:(NSString *)arg0;
+ (double)schemaVersionForEntryKey:(NSString *)arg0;
+ (char)cacheSQLPrepareStatementForEntryKey:(NSString *)arg0;
+ (NSString *)manualSortOrderForEntryKey:(NSString *)arg0;
+ (NSString *)logSelectorStringForEnteryKey:(NSString *)arg0;
+ (NSObject *)allCoveringIndexesForEntryDefinition:(NSObject *)arg0;
+ (NSObject *)sortedKeysFromEntryDefinition:(NSObject *)arg0;
+ (short)aggregateFunctionForEntryDefinition:(NSObject *)arg0 forKey:(NSString *)arg1;
+ (NSString *)notificationNameForEntryKey:(NSString *)arg0 withFilterDefintion:(id)arg1;
+ (NSString *)definitionForEntryKey:(NSString *)arg0;
+ (char)isOnDemandQueryableForEntryKey:(NSString *)arg0;

@end
