/* Runtime dump - PLWallpaperImporter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWallpaperImporter : NSObject
{
    NSData * _wallpaperFileHash;
    NSArray * _allWallpaperURLs;
    PLPhotoLibrary * photoLibrary;
}

@property (readonly, retain, nonatomic) NSArray * allWallpaperURLs;
@property (retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, retain, nonatomic) PLManagedObjectContext * managedObjectContext;

+ (NSURL *)posterImageURL;
+ (void)importWallpaperAssetsIntoPhotoLibrary:(NSObject *)arg0;

- (void)dealloc;
- (PLWallpaperImporter *)init;
- (PLManagedObjectContext *)managedObjectContext;
- (PLPhotoLibrary *)photoLibrary;
- (PLWallpaperImporter *)initWithPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)updateAsNeeded;
- (NSArray *)allWallpaperURLs;
- (NSData *)wallpaperFileHash;
- (void)deleteAll;
- (void)importAll;
- (NSArray *)allExistingWallpaperAssets;
- (void)addWallpaperURLsForModel:(NSObject *)arg0 toURLs:(id)arg1;

@end
