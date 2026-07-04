/* Runtime dump - PFUbiquityMetadataFactoryEntry
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMetadataFactoryEntry : NSObject
{
    PFUbiquityLocation * _metadataStoreFileLocation;
    NSPersistentStoreCoordinator * _psc;
    NSPersistentStore * _store;
    PFUbiquityMetadataFactoryFilePresenter * _filePresenter;
}

@property (readonly, nonatomic) PFUbiquityLocation * metadataStoreFileLocation;
@property (readonly, nonatomic) PFUbiquityMetadataFactoryFilePresenter * filePresenter;
@property (readonly, nonatomic) NSPersistentStoreCoordinator * psc;
@property (readonly, nonatomic) NSPersistentStore * store;

- (NSPersistentStore *)store;
- (PFUbiquityMetadataFactoryFilePresenter *)filePresenter;
- (NSPersistentStoreCoordinator *)psc;
- (PFUbiquityLocation *)metadataStoreFileLocation;
- (PFUbiquityMetadataFactoryEntry *)initWithMetadataStoreFileLocation:(PFUbiquityLocation *)arg0;
- (char)initializePersistentStoreCoordinator:(id *)arg0;
- (void)dealloc;
- (PFUbiquityMetadataFactoryEntry *)init;
- (NSString *)description;

@end
