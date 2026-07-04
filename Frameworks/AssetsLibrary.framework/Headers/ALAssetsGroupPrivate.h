/* Runtime dump - ALAssetsGroupPrivate
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset>
{
    char _loadedAssets;
    ALAssetsLibrary * _library;
    char _isValid;
    char _isCloudSharedGroup;
    char _applyHyperionFilter;
    struct NSObject * _album;
    ALAssetsFilter * _assetsFilter;
    unsigned int _groupType;
    NSMutableDictionary * _propertyValues;
    PLPhotoLibrary * _photoLibrary;
}

@property (retain, nonatomic) ALAssetsFilter * assetsFilter;
@property (nonatomic) unsigned int groupType;
@property (nonatomic) char isValid;
@property (nonatomic) ALAssetsLibrary * library;
@property (retain, nonatomic) NSMutableDictionary * propertyValues;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> * album;
@property (retain, nonatomic) PLPhotoLibrary * _photoLibrary;
@property (nonatomic) char isCloudSharedGroup;
@property (nonatomic) char applyHyperionFilter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ALAssetsGroupPrivate *)initWithAlbum:(struct NSObject *)arg0 library:(ALAssetsLibrary *)arg1;
- (void)populateAssets;
- (void)setAssetsFilter:(ALAssetsFilter *)arg0;
- (void)libraryDidChange;
- (PLPhotoLibrary *)_photoLibrary;
- (void)set_photoLibrary:(PLPhotoLibrary *)arg0;
- (void)updateAlbumFiltering;
- (char)isCloudSharedGroup;
- (int)albumFilter;
- (void)resetAssets;
- (ALAssetsFilter *)assetsFilter;
- (void)setPropertyValues:(NSMutableDictionary *)arg0;
- (void)setIsCloudSharedGroup:(char)arg0;
- (char)applyHyperionFilter;
- (void)setApplyHyperionFilter:(char)arg0;
- (void)dealloc;
- (char)isValid;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned int)groupType;
- (void)setGroupType:(unsigned int)arg0;
- (void)setIsValid:(char)arg0;
- (ALAssetsLibrary *)library;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (void)setLibrary:(ALAssetsLibrary *)arg0;
- (void)_performBlockAndWait:(id)arg0;
- (void)setAlbum:(struct NSObject *)arg0;
- (struct NSObject *)album;
- (NSMutableDictionary *)propertyValues;

@end
