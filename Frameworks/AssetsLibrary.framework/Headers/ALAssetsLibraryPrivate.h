/* Runtime dump - ALAssetsLibraryPrivate
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsLibraryPrivate : NSObject
{
    ALAssetsLibrary * _assetsLibrary;
    PLPhotoLibrary * _photoLibrary;
    NSHashTable * _assetGroupInternals;
    NSMutableDictionary * _groupURLSByAlbumOID;
    char _isValid;
}

@property (nonatomic) ALAssetsLibrary * assetsLibrary;
@property (readonly, retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (nonatomic) char isValid;

- (void)registerAlbum:(struct NSObject *)arg0 assetGroupPrivate:(id)arg1;
- (void)setAssetsLibrary:(ALAssetsLibrary *)arg0;
- (ALAssetsLibraryPrivate *)initWithAssetsLibrary:(ALAssetsLibrary *)arg0;
- (ALAssetsLibrary *)assetsLibrary;
- (void)dealloc;
- (char)isValid;
- (void)photoLibraryDidChange:(PHChange *)arg0;
- (void)setIsValid:(char)arg0;
- (PLPhotoLibrary *)photoLibrary;

@end
