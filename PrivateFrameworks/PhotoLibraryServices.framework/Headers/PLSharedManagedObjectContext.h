/* Runtime dump - PLSharedManagedObjectContext
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSharedManagedObjectContext : PLManagedObjectContext

- (char)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (void)_mergeChangesFromDidSaveDictionary:(NSDictionary *)arg0 usingObjectIDs:(char)arg1;

@end
