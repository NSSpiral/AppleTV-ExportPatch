/* Runtime dump - ALAssetsGroup
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsGroup : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) char editable;
@property (retain, nonatomic) ALAssetsGroupPrivate * internal;

- (NSString *)_typeAsString;
- (void)_enumerateAssetsAtIndexes:(NSArray *)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)setAssetsFilter:(ALAssetsFilter *)arg0;
- (ALAssetsGroup *)initWithPhotoAlbum:(struct NSObject *)arg0 library:(NSObject *)arg1 type:(unsigned int)arg2;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg0;
- (void)enumerateAssetsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (void)enumerateAssetsAtIndexes:(NSArray *)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (ALAssetsGroupPrivate *)internal;
- (char)addAsset:(NSSet *)arg0;
- (void)dealloc;
- (NSString *)description;
- (char)isValid;
- (char)isEditable;
- (NSString *)_uuid;
- (void *)valueForProperty:(NSString *)arg0;
- (void)setInternal:(ALAssetsGroupPrivate *)arg0;
- (struct CGImage *)posterImage;
- (int)numberOfAssets;

@end
