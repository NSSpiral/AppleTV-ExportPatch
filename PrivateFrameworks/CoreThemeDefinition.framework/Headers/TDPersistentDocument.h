/* Runtime dump - TDPersistentDocument
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPersistentDocument : NSObject
{
    NSManagedObjectModel * _managedObjectModel;
    NSManagedObjectContext * _managedObjectContext;
    id _store;
    NSURL * _fileURL;
    NSString * _fileType;
    NSURL * _temporaryFileURL;
}

@property (copy, nonatomic) NSURL * fileURL;
@property (copy, nonatomic) NSString * fileType;
@property (copy, nonatomic) NSURL * temporaryFileURL;

+ (NSURL *)_fileModificationDateForURL:(NSURL *)arg0;

- (NSPersistentStoreCoordinator *)_persistentStoreCoordinator;
- (void)dealloc;
- (NSUndoManager *)undoManager;
- (void)close;
- (NSString *)displayName;
- (NSURL *)fileURL;
- (NSString *)fileType;
- (void)setFileType:(NSString *)arg0;
- (NSManagedObjectModel *)managedObjectModel;
- (NSObject *)persistentStoreTypeForFileType:(NSObject *)arg0;
- (char)configurePersistentStoreCoordinatorForURL:(NSURL *)arg0 ofType:(NSString *)arg1 modelConfiguration:(NSString *)arg2 storeOptions:(NSDictionary *)arg3 error:(id *)arg4;
- (NSManagedObjectContext *)managedObjectContext;
- (TDPersistentDocument *)initWithType:(NSString *)arg0 error:(id *)arg1;
- (TDPersistentDocument *)initWithContentsOfURL:(NSURL *)arg0 ofType:(NSString *)arg1 error:(id *)arg2;
- (char)readFromURL:(NSURL *)arg0 ofType:(NSString *)arg1 error:(id *)arg2;
- (void)saveDocument:(NSObject *)arg0;
- (void)setTemporaryFileURL:(NSURL *)arg0;
- (NSURL *)temporaryFileURL;
- (void)setManagedObjectContext:(NSManagedObjectContext *)arg0;
- (void)setFileURL:(NSURL *)arg0;

@end
