/* Runtime dump - PHChangeValidationController
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChangeValidationController : NSObject
{
    char _didPrepare;
    char _confirmationRequired;
    NSSet * _insertRequests;
    NSSet * _updateRequests;
    NSSet * _deleteRequests;
    NSManagedObjectContext * _managedObjectContext;
    PLPhotoLibrary * _photoLibrary;
    NSArray * _renderedContentURLs;
    NSArray * _assetsToChangeContent;
    NSArray * _assetsToRevert;
    NSArray * _assetsToHide;
    NSArray * _assetsToDelete;
    NSArray * _albumsToDelete;
    NSArray * _foldersToDelete;
    NSString * _clientName;
}

@property (readonly, nonatomic) NSSet * insertRequests;
@property (readonly, nonatomic) NSSet * updateRequests;
@property (readonly, nonatomic) NSSet * deleteRequests;
@property (readonly, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (readonly, nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, nonatomic) NSArray * renderedContentURLs;
@property (readonly, nonatomic) NSArray * assetsToChangeContent;
@property (readonly, nonatomic) NSArray * assetsToRevert;
@property (readonly, nonatomic) NSArray * assetsToHide;
@property (readonly, nonatomic) NSArray * assetsToDelete;
@property (readonly, nonatomic) NSArray * albumsToDelete;
@property (readonly, nonatomic) NSArray * foldersToDelete;
@property (readonly, copy, nonatomic) NSString * clientName;
@property (readonly, nonatomic) char confirmationRequired;

- (NSSet *)insertRequests;
- (NSSet *)updateRequests;
- (NSSet *)deleteRequests;
- (char)_prepareWithError:(id *)arg0;
- (NSArray *)renderedContentURLs;
- (NSArray *)assetsToChangeContent;
- (NSArray *)assetsToRevert;
- (NSArray *)assetsToHide;
- (NSArray *)assetsToDelete;
- (NSArray *)albumsToDelete;
- (NSArray *)foldersToDelete;
- (PHChangeValidationController *)initWithInsertRequests:(NSSet *)arg0 updateRequests:(NSSet *)arg1 deleteRequests:(NSSet *)arg2 context:(NSObject *)arg3 photoLibrary:(PLPhotoLibrary *)arg4;
- (char)validateWithError:(id *)arg0;
- (void).cxx_destruct;
- (NSManagedObjectContext *)managedObjectContext;
- (char)confirmationRequired;
- (NSString *)clientName;
- (PLPhotoLibrary *)photoLibrary;

@end
