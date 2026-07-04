/* Runtime dump - PLDisconnectedManagedObjectContext
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext

+ (char)useModelMigratorToCreateDatabase;
+ (char)canMergeRemoteChanges;

- (void)connectToChangeHub;
- (void)disconnectFromChangeHub;

@end
