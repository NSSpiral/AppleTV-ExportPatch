/* Runtime dump - EKSideTableContext
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSideTableContext : NSManagedObjectContext
{
    NSString * _path;
}

- (NSString *)settingForKey:(NSString *)arg0;
- (id)delayedProximityAlarms;
- (void)deleteAllAlarms;
- (id)insertNewAlarm;
- (void)setSetting:(SASettingEntity *)arg0 forKey:(NSString *)arg1;
- (id)nextAlarmFireTime;
- (NSDate *)alarmsBetweenStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
- (NSPersistentStoreCoordinator *)_persistentStoreCoordinator;
- (NSPredicate *)_alarmsMatchingPredicate:(NSPredicate *)arg0;
- (NSString *)_settingForKey:(NSString *)arg0;
- (id)rootDirectory;
- (NSObject *)_pathForPersistentStore;
- (NSManagedObjectModel *)_managedObjectModel;
- (NSObject *)_urlForPersistentStore;
- (void)_removeSqliteFiles;
- (EKSideTableContext *)init;
- (EKSideTableContext *)initWithPath:(NSString *)arg0;

@end
