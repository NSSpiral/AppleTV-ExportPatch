/* Runtime dump - WebDatabaseManager
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDatabaseManager : NSObject

+ (void)removeEmptyDatabaseFiles;
+ (WebDatabaseManager *)sharedWebDatabaseManager;
+ (void)scheduleEmptyDatabaseRemoval;
+ (void)startBackgroundTask;
+ (void)endBackgroundTask;
+ (void)willBeginFirstTransaction;
+ (void)didFinishLastTransaction;

- (WebDatabaseManager *)init;
- (id)origins;
- (id)databasesWithOrigin:(id)arg0;
- (id)detailsForDatabase:(id)arg0 withOrigin:(_WKSecurityOrigin *)arg1;
- (void)deleteAllDatabases;
- (char)deleteOrigin:(id)arg0;
- (char)deleteDatabase:(id)arg0 withOrigin:(_WKSecurityOrigin *)arg1;

@end
