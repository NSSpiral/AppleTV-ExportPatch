/* Runtime dump - ALAssetsGroupList
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsGroupList : ALAssetsGroup
{
    <PLAssetContainerList> * _containerList;
}

@property (readonly, retain, nonatomic) <PLAssetContainerList> * containerList;

- (<PLAssetContainerList> *)containerList;
- (ALAssetsGroupList *)initWithContainerList:(<PLAssetContainerList> *)arg0 library:(NSObject *)arg1 type:(unsigned int)arg2;
- (void)_enumerateAssetsAtIndexes:(NSArray *)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (void *)valueForProperty:(NSString *)arg0;

@end
