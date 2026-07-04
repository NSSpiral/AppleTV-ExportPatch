/* Runtime dump - PLWallpaperAlbum
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWallpaperAlbum : PLManagedAlbum

@property (nonatomic) short wallpaperAlbumType;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSObject *)wallpaperAlbumInLibrary:(NSObject *)arg0;

- (NSString *)localizedTitle;
- (UIImage *)posterImage;
- (unsigned int)photosCount;
- (void)awakeFromInsert;
- (NSString *)_kindDescription;

@end
