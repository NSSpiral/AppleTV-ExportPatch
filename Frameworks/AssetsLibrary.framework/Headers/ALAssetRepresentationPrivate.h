/* Runtime dump - ALAssetRepresentationPrivate
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary * _library;
    char _isValid;
    PLManagedAsset * _photo;
    PLSidecarFile * _sidecar;
    NSString * _extension;
    PLPhotoLibrary * _photoLibrary;
}

@property (retain, nonatomic) PLSidecarFile * sidecar;
@property (copy, nonatomic) NSString * extension;
@property (nonatomic) ALAssetsLibrary * library;
@property (nonatomic) char isValid;
@property (retain, nonatomic) PLManagedAsset * photo;
@property (retain, nonatomic) PLPhotoLibrary * _photoLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)_fileDescriptorForPersistentURL:(NSURL *)arg0;
+ (int)_updateFileDescriptor:(int)arg0 forPersistentURL:(NSURL *)arg1;
+ (void)_clearFileDescriptorQueue;
+ (void)_setupFileDescriptorQueue;

- (ALAssetRepresentationPrivate *)initWithManagedAsset:(char)arg0 sidecar:(PLSidecarFile *)arg1 extension:(NSString *)arg2 library:(ALAssetsLibrary *)arg3;
- (PLSidecarFile *)sidecar;
- (void)libraryDidChange;
- (PLPhotoLibrary *)_photoLibrary;
- (void)setSidecar:(PLSidecarFile *)arg0;
- (void)set_photoLibrary:(PLPhotoLibrary *)arg0;
- (void)dealloc;
- (char)isValid;
- (void)setExtension:(NSString *)arg0;
- (NSString *)extension;
- (char)_isVideo;
- (char)_isImage;
- (void)setIsValid:(char)arg0;
- (PLManagedAsset *)photo;
- (void)setPhoto:(PLManagedAsset *)arg0;
- (ALAssetsLibrary *)library;
- (void)setLibrary:(ALAssetsLibrary *)arg0;
- (void)_performBlockAndWait:(id)arg0;

@end
