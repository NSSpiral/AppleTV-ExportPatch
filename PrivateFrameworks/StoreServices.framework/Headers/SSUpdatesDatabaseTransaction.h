/* Runtime dump - SSUpdatesDatabaseTransaction
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatesDatabaseTransaction : SSUpdatesDatabaseSession

- (char)deleteUpdatesInstalledBefore:(double)arg0;
- (NSDate *)_newUpdateEntityPropertiesWithUpdate:(NSDate *)arg0;
- (char)mergeAvailableUpdates:(id)arg0 availableCount:(int *)arg1;

@end
