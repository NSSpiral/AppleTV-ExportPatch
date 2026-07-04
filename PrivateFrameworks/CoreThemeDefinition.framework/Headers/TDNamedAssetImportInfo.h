/* Runtime dump - TDNamedAssetImportInfo
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDNamedAssetImportInfo : NSObject
{
    NSString * _name;
    int _nameIdentifier;
    NSURL * _fileURL;
    NSDate * _modificationDate;
    int _idiom;
    int _subtype;
    unsigned int _scaleFactor;
    int _renditionType;
    int _resizingMode;
    int _templateRenderingMode;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    unsigned int _memoryClass;
    unsigned int _graphicsClass;
    struct CGSize _resizableSliceSize;
    struct ? _sliceInsets;
    struct CGRect _alignmentRect;
}

@property (copy, nonatomic) NSString * name;
@property (nonatomic) int nameIdentifier;
@property (copy, nonatomic) NSURL * fileURL;
@property (copy, nonatomic) NSDate * modificationDate;
@property (nonatomic) int idiom;
@property (nonatomic) int subtype;
@property (nonatomic) unsigned int scaleFactor;
@property (nonatomic) struct ? sliceInsets;
@property (nonatomic) int renditionType;
@property (nonatomic) int resizingMode;
@property (nonatomic) struct CGSize resizableSliceSize;
@property (nonatomic) char isTemplate;
@property (nonatomic) int templateRenderingMode;
@property (nonatomic) struct CGRect alignmentRect;
@property (nonatomic) int sizeClassHorizontal;
@property (nonatomic) int sizeClassVertical;
@property (nonatomic) unsigned int memoryClass;
@property (nonatomic) unsigned int graphicsClass;

- (void)setScaleFactor:(unsigned int)arg0;
- (void)dealloc;
- (TDNamedAssetImportInfo *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)subtype;
- (int)resizingMode;
- (int)templateRenderingMode;
- (void)setSubtype:(int)arg0;
- (NSDate *)modificationDate;
- (int)idiom;
- (unsigned int)scaleFactor;
- (void)setIdiom:(int)arg0;
- (NSURL *)fileURL;
- (void)setSizeClassHorizontal:(int)arg0;
- (void)setSizeClassVertical:(int)arg0;
- (void)setTemplateRenderingMode:(int)arg0;
- (void)setResizingMode:(int)arg0;
- (void)setRenditionType:(int)arg0;
- (int)renditionSubtype;
- (int)nameIdentifier;
- (void)setNameIdentifier:(int)arg0;
- (void)setMemoryClass:(unsigned int)arg0;
- (void)setGraphicsClass:(unsigned int)arg0;
- (struct ?)sliceInsets;
- (struct CGSize)resizableSliceSize;
- (void)setAlignmentRect:(struct CGRect)arg0;
- (void)setSliceInsets:(struct ?)arg0;
- (void)setResizableSliceSize:(struct CGSize)arg0;
- (int)sizeClassHorizontal;
- (int)sizeClassVertical;
- (int)renditionType;
- (void)setIsTemplate:(char)arg0;
- (char)isTemplate;
- (unsigned int)memoryClass;
- (unsigned int)graphicsClass;
- (struct CGRect)alignmentRect;
- (void)setModificationDate:(NSDate *)arg0;
- (void)setFileURL:(NSURL *)arg0;

@end
