/* Runtime dump - TPBodyLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPBodyLayout : TSDLayout <TSWPLayoutTarget, TPAttachmentLayoutParent>
{
    NSMutableArray * _columns;
    TPFootnoteHeightMeasurer * _footnoteHeightMeasurer;
    NSMutableArray * _anchoredDrawablesForRelayout;
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

+ (struct CGSize)minimumBodySize;

- (void)invalidateSize;
- (NSObject *)computeLayoutGeometry;
- (float)viewScaleForZoomingToSelectionPath:(NSString *)arg0 targetPointSize:(float)arg1;
- (void)parentWillChangeTo:(id)arg0;
- (struct CGPoint)capturedInfoPositionForAttachment;
- (struct CGSize)maximumFrameSizeForChild:(NSObject *)arg0;
- (struct CGRect)rectInRootForSelectionPath:(NSString *)arg0;
- (struct CGPoint)calculatePointFromSearchReference:(NSObject *)arg0;
- (char)shouldProvideSizingGuides;
- (struct CGRect)rectInRootOfAutoZoomContextOfSelectionPath:(NSString *)arg0;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(NSString *)arg0;
- (char)textIsVertical;
- (NSObject *)columnMetricsForCharIndex:(unsigned int)arg0 outRange:(struct _NSRange *)arg1;
- (void)setAnchoredDrawablesForRelayout:(NSMutableArray *)arg0;
- (id)currentAnchoredDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg0;
- (NSMutableArray *)anchoredDrawablesForRelayout;
- (unsigned int)autosizeFlags;
- (id)validatedLayoutForInlineDrawable:(id)arg0;
- (<TSWPOffscreenColumn> *)previousTargetLastColumn;
- (<TSWPFootnoteHeightMeasurer> *)footnoteHeightMeasurer;
- (<TSWPFootnoteMarkProvider> *)footnoteMarkProvider;
- (id)currentInlineDrawableLayouts;
- (float)maxAnchorY;
- (TSPObject<TSDHint> *)nextTargetFirstChildHint;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg0;
- (struct TSWPTopicNumberHints *)nextTargetTopicNumbers;
- (<TSWPOffscreenColumn> *)nextTargetFirstColumn;
- (char)siblingTargetIsManipulatingDrawable:(id)arg0;
- (TSDLayout *)parentLayoutForInlineAttachments;
- (void)addAttachmentLayout:(NSObject *)arg0;
- (struct TSWPTopicNumberHints *)previousTargetTopicNumbers;
- (struct CGPoint)anchoredAttachmentPositionFromLayoutPosition:(struct CGPoint)arg0;
- (struct CGPoint)layoutPositionFromAnchoredAttachmentPosition:(struct CGPoint)arg0;
- (char)isLastTarget;
- (int)naturalAlignment;
- (char)isLayoutOffscreen;
- (struct CGRect)targetRectForCanvasRect:(NSObject *)arg0;
- (char)invalidateForPageCountChange;
- (int)naturalDirection;
- (char)wantsLineFragments;
- (char)layoutIsValid;
- (struct CGRect)p_rectForSelection:(id)arg0 useParagraphModeRects:(SEL)arg1;
- (struct CGRect)rectForPresentingAnnotationPopoverForSelectionPath:(NSString *)arg0;
- (void)p_killDrawableLayouts:(id)arg0;
- (char)needsInflation;
- (NSDictionary *)existingAttachmentLayoutForInfo:(NSDictionary *)arg0;
- (id)p_validatedLayoutForDrawable:(id)arg0 inContainingLayout:(NSObject *)arg1;
- (NSObject *)p_attachedLayoutsInLayout:(NSObject *)arg0;
- (void)killColumns;
- (void)updateStartCharIndex;
- (char)processWidowAndInflation;
- (struct CGSize)currentSize;
- (float)contentHeight;
- (void)dealloc;
- (void)validate;
- (struct CGSize)maxSize;
- (struct CGPoint)position;
- (struct CGPoint)anchorPoint;
- (struct CGSize)minSize;
- (struct CGRect)rectForSelection:(id)arg0;
- (unsigned int)pageCount;
- (unsigned int)pageNumber;
- (NSMutableArray *)columns;
- (int)verticalAlignment;
- (TSDCanvas *)canvas;

@end
