/* Runtime dump - TPFootnoteContainerLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider>
{
    float _width;
    float _maxFootnoteHeight;
    float _footnoteSpacing;
    char _includeFootnoteSeparatorLine;
    <TSWPFootnoteMarkProvider> * _footnoteMarkProvider;
}

@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) float height;
@property (nonatomic) char includeFootnoteSeparatorLine;
@property (readonly, nonatomic) struct CGRect footnoteSeparatorLineFrame;
@property (readonly, nonatomic) TSWPPadding * layoutMargins;
@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) float textScaleFactor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (Class)repClassOverride;
- (NSObject *)computeLayoutGeometry;
- (char)shouldProvideSizingGuides;
- (char)textIsVertical;
- (struct CGSize)adjustedInsetsForTarget:(NSObject *)arg0;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 target:(NSObject *)arg2 outWidth:(float *)arg3 outGap:(float *)arg4;
- (char)alwaysStartsNewTarget;
- (char)shrinkTextToFit;
- (char)columnsAreLeftToRight;
- (unsigned int)autosizeFlagsForTextLayout:(NSObject *)arg0;
- (int)verticalAlignmentForTextLayout:(NSObject *)arg0;
- (void)invalidateForAutosizingTextLayout:(NSObject *)arg0;
- (struct CGRect)nonAutosizedFrameForTextLayout:(NSObject *)arg0;
- (struct CGRect)autosizedFrameForTextLayout:(NSObject *)arg0 textSize:(SEL)arg1;
- (NSObject *)dependentsOfTextLayout:(NSObject *)arg0;
- (Class)repClassForTextLayout:(NSObject *)arg0;
- (float)maxAutoGrowHeightForTextLayout:(NSObject *)arg0;
- (id)markStringForFootnoteReferenceStorage:(id)arg0;
- (void)trimFootnoteLayoutsFromIndex:(unsigned int)arg0;
- (void)setIncludeFootnoteSeparatorLine:(char)arg0;
- (void)setFootnoteSpacing:(int)arg0;
- (void)removeAllFootnoteLayouts;
- (TPFootnoteContainerLayout *)initWithFootnoteMarkProvider:(<TSWPFootnoteMarkProvider> *)arg0 width:(float)arg1 maxFootnoteHeight:(float)arg2 footnoteSpacing:(float)arg3;
- (void)removeFootnoteLayout:(NSObject *)arg0;
- (void)addFootnoteLayout:(NSObject *)arg0;
- (void)removeFootnoteLayoutWithInfo:(NSDictionary *)arg0;
- (struct CGRect)footnoteSeparatorLineFrame;
- (char)includeFootnoteSeparatorLine;
- (void)validate;
- (char)isEmpty;
- (TSWPPadding *)layoutMargins;
- (float)height;
- (void)setWidth:(float)arg0;
- (unsigned int)columnCount;

@end
