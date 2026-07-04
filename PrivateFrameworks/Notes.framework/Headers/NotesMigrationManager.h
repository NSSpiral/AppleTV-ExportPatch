/* Runtime dump - NotesMigrationManager
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesMigrationManager : NSObject

- (char)migrateNotesStoreAtURL:(NSURL *)arg0 storeType:(NSString *)arg1 managedObjectModel:(NSManagedObjectModel *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (char)areStoreMetadata:(NSDictionary *)arg0 matchingEntityVersionsInModel:(NSObject *)arg1;
- (char)migrateNotesStoreAtURL:(NSURL *)arg0 storeType:(NSString *)arg1 options:(NSDictionary *)arg2 sourceModel:(NSManagedObjectModel *)arg3 destinationModel:(NSManagedObjectModel *)arg4 mappingModel:(NSMappingModel *)arg5 error:(id *)arg6;

@end
