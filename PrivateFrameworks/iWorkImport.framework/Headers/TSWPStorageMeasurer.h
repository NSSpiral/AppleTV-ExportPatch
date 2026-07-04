/* Runtime dump - TSWPStorageMeasurer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>
{
    TSWPStorage * _storage;
    NSMutableArray * _columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned int _flags;
    struct CGPoint _anchor;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, retain, nonatomic) NSMutableArray * columns;
@property (readonly, retain, nonatomic) <TSWPOffscreenColumn> * previousTargetLastColumn;
@property (readonly, nonatomic) struct TSWPTopicNumberHints * previousTargetTopicNumbers;
@property (readonly, retain, nonatomic) <TSWPOffscreenColumn> * nextTargetFirstColumn;
@property (readonly, nonatomic) struct TSWPTopicNumberHints * nextTargetTopicNumbers;
@property (readonly, nonatomic) <TSWPFootnoteHeightMeasurer> * footnoteHeightMeasurer;
@property (readonly, nonatomic) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;
@property (readonly, nonatomic) TSPObject<TSDHint> * nextTargetFirstChildHint;
@property (readonly, nonatomic) struct CGSize minSize;
@property (readonly, nonatomic) struct CGSize maxSize;
@property (readonly, nonatomic) struct CGSize currentSize;
@property (readonly, nonatomic) struct CGPoint position;
@property (readonly, nonatomic) struct CGPoint anchorPoint;
@property (readonly, nonatomic) unsigned int autosizeFlags;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) int naturalAlignment;
@property (readonly, nonatomic) int naturalDirection;
@property (readonly, nonatomic) char wantsLineFragments;
@property (readonly, nonatomic) unsigned int pageNumber;
@property (readonly, nonatomic) unsigned int pageCount;
@property (readonly, nonatomic) char textIsVertical;
@property (readonly, nonatomic) char layoutIsValid;
@property (readonly, nonatomic) float maxAnchorY;
@property (readonly, nonatomic) struct CGRect maskRect;
@property (retain, nonatomic) NSMutableArray * anchoredDrawablesForRelayout;
@property (readonly, nonatomic) TSDCanvas * canvas;
@property (readonly, nonatomic) TSDLayout * parentLayoutForInlineAttachments;
@property (readonly, nonatomic) char shouldHyphenate;
@property (readonly, nonatomic) struct __CFLocale * hyphenationLocale;
@property (readonly, nonatomic) TSWPPadding * layoutMargins;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) float textScaleFactor;

- (TSWPStorageMeasurer *)initWithStorage:(TSWPStorage *)arg0;
- (char)textIsVertical;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (char)columnsAreLeftToRight;
- (NSObject *)columnMetricsForCharIndex:(unsigned int)arg0 outRange:(struct _NSRange *)arg1;
- (char)caresAboutStorageChanges;
- (void)layoutManagerNeedsLayout:(NSObject *)arg0;
- (void)layoutManager:(_UIFieldEditorLayoutManager *)arg0 didClearDirtyRangeWithDelta:(int)arg1 afterCharIndex:(unsigned int)arg2;
- (id)currentAnchoredDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg0;
- (unsigned int)autosizeFlags;
- (id)validatedLayoutForInlineDrawable:(id)arg0;
- (<TSWPOffscreenColumn> *)previousTargetLastColumn;
- (<TSWPFootnoteHeightMeasurer> *)footnoteHeightMeasurer;
- (<TSWPFootnoteMarkProvider> *)footnoteMarkProvider;
- (NSObject *)textWrapper;
- (id)currentInlineDrawableLayouts;
- (float)maxAnchorY;
- (TSPObject<TSDHint> *)nextTargetFirstChildHint;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg0;
- (struct TSWPTopicNumberHints *)nextTargetTopicNumbers;
- (<TSWPOffscreenColumn> *)nextTargetFirstColumn;
- (void)addAttachmentLayout:(NSObject *)arg0;
- (struct TSWPTopicNumberHints *)previousTargetTopicNumbers;
- (char)isLastTarget;
- (int)naturalAlignment;
- (char)isLayoutOffscreen;
- (struct CGRect)targetRectForCanvasRect:(NSObject *)arg0;
- (int)naturalDirection;
- (char)wantsLineFragments;
- (char)layoutIsValid;
- (NSObject *)pLayoutWithMinSize:(struct CGSize)arg0 maxSize:(struct CGSize)arg1 anchor:(struct CGPoint)arg2 flags:(unsigned int)arg3;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg0;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg0 minSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (struct CGSize)currentSize;
- (void)dealloc;
- (struct CGSize)maxSize;
- (struct CGPoint)position;
- (TSWPPadding *)layoutMargins;
- (struct CGPoint)anchorPoint;
- (struct CGSize)minSize;
- (unsigned int)pageCount;
- (void).cxx_construct;
- (unsigned int)columnCount;
- (unsigned int)pageNumber;
- (NSMutableArray *)columns;
- (int)verticalAlignment;

@end
