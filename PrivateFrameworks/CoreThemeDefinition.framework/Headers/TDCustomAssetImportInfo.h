/* Runtime dump - TDCustomAssetImportInfo
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDCustomAssetImportInfo : NSObject
{
    CUIRenditionKey * _renditionKey;
    NSString * _elementName;
    NSString * _partName;
    NSObject<TDCustomAssetSource> * _customAsset;
    NSDate * _modificationDate;
    int _renditionType;
    int _resizingMode;
    int _templateRenderingMode;
    NSString * _name;
    struct CGSize _resizableSliceSize;
    struct ? _sliceInsets;
    struct CGRect _alignmentRect;
}

@property (copy, nonatomic) CUIRenditionKey * renditionKey;
@property (copy, nonatomic) NSString * elementName;
@property (copy, nonatomic) NSString * partName;
@property (retain) NSObject<TDCustomAssetSource> * customAsset;
@property (copy, nonatomic) NSDate * modificationDate;
@property (nonatomic) struct ? sliceInsets;
@property (nonatomic) int renditionType;
@property (nonatomic) int resizingMode;
@property (nonatomic) struct CGSize resizableSliceSize;
@property (nonatomic) char isTemplate;
@property (nonatomic) int templateRenderingMode;
@property (nonatomic) struct CGRect alignmentRect;
@property (copy, nonatomic) NSString * name;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)resizingMode;
- (int)templateRenderingMode;
- (NSDate *)modificationDate;
- (void)setTemplateRenderingMode:(int)arg0;
- (void)setResizingMode:(int)arg0;
- (NSString *)elementName;
- (void)setRenditionType:(int)arg0;
- (int)renditionSubtype;
- (struct ?)sliceInsets;
- (struct CGSize)resizableSliceSize;
- (void)setAlignmentRect:(struct CGRect)arg0;
- (NSObject<TDCustomAssetSource> *)customAsset;
- (void)setSliceInsets:(struct ?)arg0;
- (void)setResizableSliceSize:(struct CGSize)arg0;
- (void)setRenditionKey:(CUIRenditionKey *)arg0;
- (void)setElementName:(NSString *)arg0;
- (void)setCustomAsset:(NSObject<TDCustomAssetSource> *)arg0;
- (CUIRenditionKey *)renditionKey;
- (int)renditionType;
- (void)setIsTemplate:(char)arg0;
- (char)isTemplate;
- (struct CGRect)alignmentRect;
- (NSString *)partName;
- (void)setPartName:(NSString *)arg0;
- (void)setModificationDate:(NSDate *)arg0;

@end
