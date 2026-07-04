/* Runtime dump - CPColumnMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPColumnMaker : NSObject
{
    NSMutableArray * columns;
    CPZone * currentZone;
    NSMutableArray * allParagraphs;
    NSMutableArray * thinHorizontalShapes;
    NSMutableArray * otherShapes;
    NSMutableArray * images;
    NSMutableArray * paragraphWrappers;
    struct CGRect pageBounds;
    float maxParagraphDistance;
}

@property struct CGRect pageBounds;

- (void)dealloc;
- (CPColumnMaker *)init;
- (NSMutableArray *)columns;
- (void)setPageBounds:(struct CGRect)arg0;
- (void)makeColumnsFrom:(NSObject *)arg0 zone:(NSObject *)arg1;
- (char)paragraph:(CPParagraph *)arg0 isAbove:(UITextEffectsWindowNoAbove *)arg1;
- (char)paragraph:(CPParagraph *)arg0 isBelow:(id)arg1;
- (id)paragraphAbove:(id)arg0 in:(id)arg1;
- (char)paragraph:(CPParagraph *)arg0 isLinkedBelowTo:(id)arg1;
- (void)intersectionCallout:(id)arg0;
- (float)averageSpacing:(id)arg0;
- (char)closeImagesBetween:(id)arg0 and:(id)arg1 bounds:(struct CGRect)arg2;
- (void)partitionShapes:(id)arg0;
- (void)callOuts;
- (char)canSafelyAdd:(id)arg0 to:(NSObject *)arg1;
- (void)splitColumns:(NSArray *)arg0;
- (void)anchorImages;
- (char)intervalOverlapLeft:(float)arg0 right:(float)arg1 paragraphs:(id)arg2;
- (char)cuttingShapeBetween:(id)arg0 and:(id)arg1;
- (char)paragraph:(CPParagraph *)arg0 notOnSameShapeAs:(id)arg1;
- (id)paragraphBelow:(id)arg0 in:(id)arg1;
- (id)chunkAbove:(id)arg0 in:(id)arg1;
- (char)column:(TSWPColumn *)arg0 isLinkedBelowTo:(id)arg1;
- (struct CGRect)pageBounds;

@end
