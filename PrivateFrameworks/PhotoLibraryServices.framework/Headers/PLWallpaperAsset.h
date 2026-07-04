/* Runtime dump - PLWallpaperAsset
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLWallpaperAsset : PLManagedAsset

@property (retain, nonatomic) NSURL * imageURL;
@property (retain, nonatomic) NSURL * thumbnailURL;
@property (readonly, nonatomic) NSString * imageName;
@property (retain, nonatomic) NSDictionary * wallpaperOptions;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSObject *)insertIntoPhotoLibrary:(NSObject *)arg0 withImageURL:(NSURL *)arg1 thumbnailURL:(NSURL *)arg2;

- (UIImage *)_image;
- (NSString *)imageWithFormat:(int)arg0;
- (UIImage *)indexSheetImage;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (UIImage *)newFullScreenImage:(struct __CFDictionary * *)arg0;
- (char)allowsWallpaperEditing;
- (char)isIncludedInMoments;
- (NSString *)imageWithFormat:(int)arg0 outImageProperties:(struct __CFDictionary * *)arg1;
- (UIImage *)wallpaperFullScreenImage;
- (void)setImageURL:(NSURL *)arg0;
- (void)setThumbnailURL:(NSURL *)arg0;
- (NSString *)urlForKey:(NSString *)arg0;
- (void)setURL:(NSString *)arg0 forKey:(NSString *)arg1;
- (NSURL *)imageURL;
- (UIImage *)_thumbnailImage;
- (NSURL *)thumbnailURL;
- (NSString *)imageName;
- (NSDictionary *)wallpaperOptions;
- (void)setWallpaperOptions:(NSDictionary *)arg0;

@end
