/* Runtime dump - CPLayoutArea
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPLayoutArea : CPRegion
{
    char isFirstLayout;
}

- (CPLayoutArea *)init;
- (NSString *)description;
- (NSDictionary *)properties;
- (void)accept:(id)arg0;
- (float)selectionBottom;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isRowRegion;
- (void)setIsImageRegion:(char)arg0;
- (char)isImageRegion;
- (char)isShapeRegion;
- (struct CGRect)layoutAreaBounds;
- (char)isSimilarTo:(id)arg0;
- (char)isFirstLayout;
- (void)setIsFirstLayout:(char)arg0;
- (void)addColumnBreaks;

@end
