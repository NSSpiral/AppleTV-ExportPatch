/* Runtime dump - TSPDatabaseArchiveManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseArchiveManager : NSObject

+ (char)populateDistributableArchiveEntry:(id)arg0 database:(SSAppPurchaseHistoryDatabase *)arg1 fileManager:(TSPDistributableFileManager *)arg2;
+ (char)_processDistributableArchiveEntry:(id)arg0 database:(SSAppPurchaseHistoryDatabase *)arg1 fileManager:(TSPDistributableFileManager *)arg2 error:(id *)arg3;
+ (char)_processLoad:(id)arg0 classType:(int *)arg1 database:(SSAppPurchaseHistoryDatabase *)arg2 fileManager:(TSPDistributableFileManager *)arg3 error:(id *)arg4;
+ (char)_processGetRelationships:(id)arg0 database:(SSAppPurchaseHistoryDatabase *)arg1 error:(id *)arg2;

@end
