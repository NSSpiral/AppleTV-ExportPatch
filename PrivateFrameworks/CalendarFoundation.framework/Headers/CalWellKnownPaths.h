/* Runtime dump - CalWellKnownPaths
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalWellKnownPaths : NSObject

+ (void)initialize;
+ (NSString *)mailInvitationDropPath;
+ (NSString *)calendarsFolderPath;
+ (void)resetPaths;
+ (NSString *)realHomeDirectoryPath;
+ (char)checkOrCreatePath:(NSString *)arg0;
+ (NSString *)calendarFileHandlerPath;
+ (NSString *)calendarCachePath;
+ (NSString *)temporaryFilesPath;
+ (NSString *)eventsPendingChangesPath;
+ (NSString *)calendarSyncChangesPath;
+ (NSString *)calendarClientIdConflictsPath;

@end
