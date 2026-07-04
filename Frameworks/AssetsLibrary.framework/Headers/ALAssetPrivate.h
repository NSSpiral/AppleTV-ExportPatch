/* Runtime dump - ALAssetPrivate
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary * _library;
    char _isValid;
    PLManagedAsset * _photo;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic) ALAssetsLibrary * library;
@property (nonatomic) char isValid;
@property (readonly, nonatomic) char deletable;
@property (retain, nonatomic) PLManagedAsset * photo;
@property (retain, nonatomic) PLPhotoLibrary * _photoLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ALAssetPrivate *)initWithManagedAsset:(char)arg0 library:(ALAssetsLibrary *)arg1;
- (void)libraryDidChange;
- (PLPhotoLibrary *)_photoLibrary;
- (void)set_photoLibrary:(PLPhotoLibrary *)arg0;
- (void)dealloc;
- (char)isValid;
- (void)setIsValid:(char)arg0;
- (PLManagedAsset *)photo;
- (void)setPhoto:(PLManagedAsset *)arg0;
- (ALAssetsLibrary *)library;
- (void)setLibrary:(ALAssetsLibrary *)arg0;
- (void)_performBlockAndWait:(id)arg0;
- (char)isDeletable;

@end
