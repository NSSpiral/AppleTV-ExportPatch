/* Runtime dump - TSWPShapeInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeInfo : TSDShapeInfo <TSDMixing, TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>
{
    TSWPStorage * _containedStorage;
}

@property (retain, nonatomic) TSWPStorage * containedStorage;
@property (readonly, nonatomic) char displaysInstructionalText;
@property (readonly, nonatomic) NSString * instructionalText;
@property (readonly, nonatomic) char isTextBox;
@property (nonatomic) char shrinkTextToFit;
@property (nonatomic) char textIsVertical;
@property (nonatomic) int verticalAlignment;
@property (readonly, nonatomic) int columnDirection;
@property (nonatomic) int contentWritingDirection;
@property (retain, nonatomic) TSWPPadding * padding;
@property (retain, nonatomic) TSWPColumns * columns;
@property (readonly, nonatomic) TSWPShapeStyle * tswpShapeStyle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char matchesObjectPlaceholderGeometry;
@property (copy, nonatomic) TSDInfoGeometry * geometry;
@property (nonatomic) NSObject<TSDContainerInfo> * parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> * owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property (readonly, nonatomic) char floatingAboveText;
@property (readonly, nonatomic) char anchoredToText;
@property (readonly, nonatomic) char inlineWithText;
@property (readonly, nonatomic) char attachedToBodyText;

+ (void)setDefaultInstructionalText:(NSString *)arg0;
+ (NSObject *)textPropertiesNeedingCharacterAnimation;
+ (NSObject *)textPropertiesAffectingVisualStyle;
+ (TSWPShapeInfo *)textPropertiesAffectingTextMorph;
+ (NSObject *)textPropertiesAffectingVisualStyleExceptSize;
+ (char)stylesAreEqualWithOutgoingStorage:(id)arg0 outgoingRange:(struct _NSRange)arg1 incomingStorage:(id)arg2 incomingRange:(struct _NSRange)arg3;
+ (TSWPShapeInfo *)textPropertiesAffectingObjectMatch;
+ (NSObject *)textPropertiesNotAffectingVisualStyle;
+ (char)shouldDisableTextMorphsFromPropertiesBetweenOutgoingStorage:(id)arg0 outgoingRange:(struct _NSRange)arg1 incomingStorage:(id)arg2 incomingRange:(struct _NSRange)arg3;
+ (unsigned int)numberOfDifferencesBetweenStyleProperties:(NSDictionary *)arg0 betweenOutgoingStorage:(id)arg1 outgoingRange:(struct _NSRange)arg2 incomingStorage:(id)arg3 incomingRange:(struct _NSRange)arg4 maxDifferencesBeforeReturning:(unsigned int)arg5;

- (TSWPShapeInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct ShapeInfoArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ShapeInfoArchive *)arg0 unarchiver:(struct ShapeInfoArchive)arg1;
- (NSString *)presetKind;
- (TSWPStorage *)containedStorage;
- (TSWPShapeStyle *)tswpShapeStyle;
- (void)setContentWritingDirection:(int)arg0;
- (Class)styleClass;
- (Class)repClass;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (Class)layoutClass;
- (NSArray *)childInfos;
- (NSArray *)textureDeliveryStylesLocalized:(char)arg0 animationFilter:(NSString *)arg1;
- (TSWPShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (NSObject *)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1 chunkIndex:(unsigned int)arg2;
- (unsigned int)chunkCountForTextureDeliveryStyle:(unsigned int)arg0 byGlyphStyle:(int)arg1 animationFilter:(NSString *)arg2;
- (struct CGPoint)transformableObjectAnchorPoint;
- (void)adoptStylesheet:(NSObject *)arg0 withMapper:(NSObject *)arg1;
- (TSWPShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 pathSource:(TSDPathSource *)arg3;
- (char)supportsTextInset;
- (char)supportsShrinkTextToFit;
- (NSSet *)styleIdentifierTemplateForNewPreset;
- (void)processSelectedStoragesWithStatisticsController:(BRController *)arg0;
- (NSObject *)stylesForCopyStyle;
- (NSSet *)propertyMapForNewPreset;
- (char)autoListRecognition;
- (char)autoListTermination;
- (char)textIsVertical;
- (int)contentWritingDirection;
- (char)shrinkTextToFit;
- (char)shouldHideEmptyBullets;
- (void)setTextIsVertical:(char)arg0;
- (TSWPShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 pathSource:(TSDPathSource *)arg3 wpStorage:(TSPObject *)arg4;
- (void)setContainedStorage:(TSWPStorage *)arg0;
- (char)displaysInstructionalText;
- (float)pOffsetForVerticalAlignment:(struct CGSize)arg0;
- (float)pOffsetForParagraphAlignment:(struct CGSize)arg0;
- (struct CGPoint)autosizePositionOffsetForGeometry:(NSObject *)arg0 size:(struct CGSize)arg1;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(NSObject *)arg0 size:(struct CGSize)arg1;
- (struct CGPoint)autosizePositionOffset;
- (char)p_hasContentForRange:(struct _NSRange)arg0;
- (unsigned int)p_chunkCountForByBulletGroup;
- (unsigned int)p_chunkCountForByBullet;
- (void)setShrinkTextToFit:(char)arg0;
- (int)columnDirection;
- (TSWPShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 wpStorage:(TSPObject *)arg3;
- (NSString *)instructionalText;
- (void)fixPositionOfImportedAutosizedShape;
- (char)p_hasListLabelOrContentForParagraphIndex:(unsigned int)arg0;
- (NSString *)p_chunkTitleByRemovingAdditionalLinesFromTitle:(NSString *)arg0;
- (char)isBulleted;
- (NSObject *)containedTextForRange:(struct _NSRange)arg0;
- (NSString *)containedText;
- (NSString *)defaultBuildChunkTitle;
- (NSObject *)containedTextForDeliveryStyle:(unsigned int)arg0 chunkIndex:(unsigned int)arg1;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;
- (void)setPadding:(TSWPPadding *)arg0;
- (TSWPPadding *)padding;
- (TSWPColumns *)columns;
- (NSEnumerator *)childEnumerator;
- (void)setColumns:(TSWPColumns *)arg0;
- (char)isTextBox;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg0;

@end
