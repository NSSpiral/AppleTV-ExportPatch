/* Runtime dump - UIImageAsset
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImageAsset : NSObject <NSSecureCoding>
{
    _UIAssetManager * _assetManager;
    char _cacheContents;
    UITraitCollection * _defaultTraitCollection;
    struct ? _assetFlags;
    NSString * _assetName;
    id _creationBlock;
}

@property (copy, nonatomic) NSString * assetName;
@property (readonly, nonatomic) _UIAssetManager * _assetManager;
@property (copy, nonatomic) id creationBlock;

+ (char)supportsSecureCoding;
+ (UIImageAsset *)_assetGeneratingImagesWithDrawingBlock:(id /* block */)arg0;

- (void)dealloc;
- (UIImageAsset *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIImageAsset *)init;
- (char)isEqual:(NSObject *)arg0;
- (UIImage *)imageWithTraitCollection:(UITraitCollection *)arg0;
- (void)_registerImage:(UIImage *)arg0 withTraitCollection:(UITraitCollection *)arg1 cache:(char)arg2;
- (NSString *)assetName;
- (UITraitCollection *)_defaultTraitCollection;
- (NSString *)_initWithAssetName:(NSString *)arg0 forManager:(NSObject *)arg1;
- (void)_clearResolvedImageResources;
- (_UIAssetManager *)_assetManager;
- (void)setCreationBlock:(id /* block */)arg0;
- (id)_mutableCatalog;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(UITraitCollection *)arg0 resolvedCatalogImage:(UIImage *)arg1;
- (id /* block */)creationBlock;
- (void)registerImage:(UIImage *)arg0 withTraitCollection:(UITraitCollection *)arg1;
- (void)unregisterImageWithTraitCollection:(UITraitCollection *)arg0;
- (void)setAssetName:(NSString *)arg0;

@end
