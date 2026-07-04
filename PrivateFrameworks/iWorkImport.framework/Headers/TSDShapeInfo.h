/* Runtime dump - TSDShapeInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeInfo : TSDStyledInfo <TSDMixing, TSDReducableInfo, TSKSearchable, TSDInfoWithPathSource>
{
    TSDPathSource * mPathSource;
    TSDShapeStyle * mStyle;
}

@property (retain, nonatomic) TSDPathSource * pathSource;
@property (readonly, nonatomic) TSDShapeStyle * shapeStyle;
@property (copy, nonatomic) TSDFill * fill;
@property (copy, nonatomic) TSDLineEnd * headLineEnd;
@property (copy, nonatomic) TSDLineEnd * tailLineEnd;
@property (readonly, nonatomic) char supportsTextInset;
@property (readonly, nonatomic) char supportsShrinkTextToFit;
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

- (TSDShapeInfo *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct ShapeArchive *)arg0 archiver:(NSObject *)arg1;
- (void)loadFromArchive:(struct ShapeArchive *)arg0 unarchiver:(struct ShapeArchive)arg1;
- (Class)styleClass;
- (Class)repClass;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (Class)layoutClass;
- (id)animationFilters;
- (int)elementKind;
- (void)setValuesForProperties:(NSDictionary *)arg0;
- (TSDShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (struct CGSize)targetSizeForImageData:(NSData *)arg0 associatedHint:(id)arg1;
- (TSDShapeInfo *)subclassInitFromUnarchiver:(NSObject *)arg0;
- (TSDLineEnd *)headLineEnd;
- (TSDLineEnd *)tailLineEnd;
- (void)setPathSource:(TSDPathSource *)arg0;
- (TSDShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 pathSource:(TSDPathSource *)arg3;
- (TSDPathSource *)pathSource;
- (char)isTailEndOnLeftFromTemporaryLayoutForPasteboard;
- (TSDShapeInfo *)initWithContext:(NSObject *)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2;
- (char)supportsTextInset;
- (char)supportsShrinkTextToFit;
- (void)setHeadLineEnd:(TSDLineEnd *)arg0;
- (void)setTailLineEnd:(TSDLineEnd *)arg0;
- (char)pathIsOpen;
- (char)shouldFlipLineEndsForStyle:(NSObject *)arg0 isStyleTailEndOnLeft:(int)arg1;
- (void)p_correctLineSegmentGeometry;
- (void)p_correctNearZeroWidthLines;
- (void)dealloc;
- (NSObject *)objectForProperty:(int)arg0;
- (TSDFill *)fill;
- (NSDictionary *)style;
- (void)setStyle:(TSSStyle *)arg0;
- (void)setFill:(TSDFill *)arg0;
- (TSDShapeStyle *)shapeStyle;

@end
