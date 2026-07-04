/* Runtime dump - CPColumn
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPColumn : CPRegion
{
    char hasCentredParagraph;
    char hasColumnBreak;
    float maxLeftPad;
    float maxRightPad;
    float maxRight;
    float minLeft;
    char complete;
}

@property char complete;

- (void)dealloc;
- (CPColumn *)init;
- (NSString *)description;
- (CPColumn *)copyWithZone:(struct _NSZone *)arg0;
- (void)setComplete:(char)arg0;
- (char)complete;
- (void)accept:(id)arg0;
- (struct CGRect)columnBounds;
- (float)leftPad;
- (float)rightPad;
- (float)selectionBottom;
- (void)setHasColumnBreak:(char)arg0;
- (char)isBoxRegion;
- (char)isGraphicalRegion;
- (char)isRowRegion;
- (void)setIsImageRegion:(char)arg0;
- (char)isImageRegion;
- (char)isShapeRegion;
- (float)bottomBaseline;
- (char)hasCentredParagraph;
- (void)setHasCentredParagraph:(char)arg0;
- (float)maxLeftPad;
- (void)setMaxLeftPad:(float)arg0;
- (float)maxRightPad;
- (void)setMaxRightPad:(float)arg0;
- (struct CGRect)paddedBounds;
- (int)outOrder;
- (int)inOrder;

@end
