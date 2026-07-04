/* Runtime dump - DMLogGatherer
 * Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@interface DMLogGatherer : NSObject

+ (DMLogGatherer *)gatherLogs:(id)arg0;
+ (void)gatherItemsFromDirectory:(id)arg0 destPath:(NSString *)arg1 prefixFilter:(NSObject *)arg2;
+ (void)gatherSystemLog:(id)arg0;
+ (char)zipDirectory:(id)arg0 zipPath:(NSString *)arg1;

@end
