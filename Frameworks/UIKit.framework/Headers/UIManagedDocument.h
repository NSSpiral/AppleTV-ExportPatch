/* Runtime dump - UIManagedDocument
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIManagedDocument : UIDocument
{
    NSManagedObjectContext * _managedObjectContext;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSManagedObjectModel * _managedObjectModel;
    NSDictionary * _documentMetadata;
    struct __mdocFlags _mdocFlags;
    NSDictionary * persistentStoreOptions;
    NSString * modelConfiguration;
}

@property (readonly, retain, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (readonly, retain, nonatomic) NSManagedObjectModel * managedObjectModel;
@property (copy, nonatomic) NSDictionary * persistentStoreOptions;
@property (copy, nonatomic) NSString * modelConfiguration;

+ (void)initialize;
+ (char)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(NSDictionary *)arg0;
+ (NSString *)persistentStoreName;
+ (UIManagedDocument *)additionalContentPathComponent;

- (void)dealloc;
- (char)readFromURL:(NSURL *)arg0 error:(id *)arg1;
- (char)writeContents:(id)arg0 toURL:(NSURL *)arg1 forSaveOperation:(int)arg2 originalContentsURL:(NSURL *)arg3 error:(id *)arg4;
- (NSObject *)contentsForType:(NSObject *)arg0 error:(id *)arg1;
- (char)writeContents:(id)arg0 andAttributes:(NSDictionary *)arg1 safelyToURL:(NSURL *)arg2 forSaveOperation:(int)arg3 error:(id *)arg4;
- (void)revertToContentsOfURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (UIManagedDocument *)initWithFileURL:(NSURL *)arg0;
- (NSManagedObjectModel *)managedObjectModel;
- (char)writeAdditionalContent:(NSObject *)arg0 toURL:(NSURL *)arg1 originalContentsURL:(NSURL *)arg2 error:(id *)arg3;
- (NSObject *)persistentStoreTypeForFileType:(NSObject *)arg0;
- (NSDictionary *)persistentStoreOptions;
- (NSString *)modelConfiguration;
- (NSURL *)_readMetadataFromDocumentURL:(NSURL *)arg0;
- (char)_writeMetadataToDocumentURL:(NSURL *)arg0;
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(NSURL *)arg0 toSyncedURL:(NSURL *)arg1;
- (char)configurePersistentStoreCoordinatorForURL:(NSURL *)arg0 ofType:(NSString *)arg1 modelConfiguration:(NSString *)arg2 storeOptions:(NSDictionary *)arg3 error:(id *)arg4;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(NSURL *)arg0 toNonSyncedURL:(NSURL *)arg1;
- (NSManagedObjectContext *)managedObjectContext;
- (char)readAdditionalContentFromURL:(NSURL *)arg0 error:(id *)arg1;
- (NSURL *)additionalContentForURL:(NSURL *)arg0 error:(id *)arg1;
- (void)setPersistentStoreOptions:(NSDictionary *)arg0;
- (void)setModelConfiguration:(NSString *)arg0;

@end
