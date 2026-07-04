/* Runtime dump - KNMasterSlide
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNMasterSlide : KNAbstractSlide <TSKTransformableObject>
{
    NSString * mName;
    struct CGRect mObjectRect;
    KNClassicStylesheetRecord * mClassicStylesheetRecord;
    NSArray * mBodyParagraphStyles;
    NSArray * mBodyListStyles;
    NSString * mThumbnailTextForTitlePlaceholder;
    NSString * mThumbnailTextForBodyPlaceholder;
    char mSlideObjectsLayerWithMaster;
    char mHasBug16580905;
    char mCalculatedHasBug16580905;
}

@property (retain, nonatomic) NSString * name;
@property (nonatomic) struct CGRect objectRect;
@property (readonly, nonatomic) KNClassicStylesheetRecord * classicStylesheetRecord;
@property (copy, nonatomic) NSArray * bodyParagraphStyles;
@property (copy, nonatomic) NSArray * bodyListStyles;
@property (retain, nonatomic) NSString * thumbnailTextForTitlePlaceholder;
@property (retain, nonatomic) NSString * thumbnailTextForBodyPlaceholder;
@property (nonatomic) char slideObjectsLayerWithMaster;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIColor *)p_defaultMasterGuideColor;
+ (UIColor *)masterGuideColor;
+ (void)setMasterGuideColor:(UIColor *)arg0;
+ (void)initialize;

- (NSString *)packageLocator;
- (KNMasterSlide *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (int)intValueForProperty:(int)arg0;
- (char)containsProperty:(int)arg0;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (char)isThemeContent;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (char)isObjectVisible;
- (NSSet *)builds;
- (NSArray *)buildChunks;
- (KNMasterSlide *)initWithSlideNode:(KNSlideNode *)arg0 context:(NSObject *)arg1;
- (unsigned int)buildCount;
- (void)addBuild:(PDBuild *)arg0;
- (void)removeBuild:(PDBuild *)arg0;
- (unsigned int)buildChunkCount;
- (void)insertBuildChunk:(id)arg0 afterChunk:(id)arg1 generateIdentifier:(char)arg2;
- (void)removeBuildChunk:(KNBuildChunk *)arg0 rollbackGeneratedIdentifier:(char)arg1;
- (void)generateObjectPlaceholderIfNecessary;
- (struct CGRect)objectRect;
- (void)setObjectRect:(struct CGRect)arg0;
- (NSArray *)bodyListStyles;
- (NSArray *)bodyParagraphStyles;
- (void)setBodyListStyles:(NSArray *)arg0;
- (void)setBodyParagraphStyles:(NSArray *)arg0;
- (NSString *)thumbnailTextForTitlePlaceholder;
- (void)setThumbnailTextForTitlePlaceholder:(NSString *)arg0;
- (NSString *)thumbnailTextForBodyPlaceholder;
- (void)setThumbnailTextForBodyPlaceholder:(NSString *)arg0;
- (char)slideObjectsLayerWithMaster;
- (void)setSlideObjectsLayerWithMaster:(char)arg0;
- (id)tagsforNewPlaceholderInfos:(id)arg0;
- (id)p_defaultTagForDrawable:(id)arg0;
- (NSString *)p_defaultThumbnailTextForPlaceholder:(id)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0 andSlideNode:(NSObject *)arg1;
- (NSDictionary *)tagforNewPlaceholderInfo:(NSDictionary *)arg0;
- (NSString *)thumbnailTextForPlaceholder:(id)arg0;
- (id)imagePlaceholders;
- (NSArray *)nonPlaceholderObjects;
- (void)willBeAddedToTheme:(id)arg0;
- (void)wasAddedToTheme:(id)arg0;
- (void)updatePlaceholderText;
- (KNClassicStylesheetRecord *)classicStylesheetRecord;
- (char)hasBug16580905;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSObject *)objectForProperty:(int)arg0;

@end
