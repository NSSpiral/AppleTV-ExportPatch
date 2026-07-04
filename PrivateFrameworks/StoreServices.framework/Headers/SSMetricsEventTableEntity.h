/* Runtime dump - SSMetricsEventTableEntity
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventTableEntity : SSSQLiteEntity

+ (ML3DatabaseTable *)databaseTable;

- (NSDictionary *)reportingDictionary;
- (id)reportingJSON;

@end
