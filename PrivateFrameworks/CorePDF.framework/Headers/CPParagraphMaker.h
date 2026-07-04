/* Runtime dump - CPParagraphMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraphMaker : NSObject
{
    NSMutableArray * avail;
    NSMutableArray * paragraphs;
    NSMutableArray * compoundedShapesOnPage;
    char spacingSet;
    float currentSpacing;
    CPZone * parent;
    CPPage * page;
}

+ (char)line:(id)arg0 alignsWith:(id)arg1;

- (void)dealloc;
- (void)makeParagraphsIn:(id)arg0;
- (NSMutableArray *)paragraphs;
- (char)line:(id)arg0 isDirectlyBelow:(id)arg1;
- (char)line:(id)arg0 isBelow:(id)arg1;
- (int)indexOfUniqueLineBelow:(id)arg0 from:(int)arg1;
- (int)linesThatOverlapLineAt:(int)arg0 between:(float)arg1 and:(float)arg2 from:(int)arg3;
- (char)isGraphicBetween:(id)arg0 and:(id)arg1;
- (unsigned int)alignmentOf:(id)arg0 and:(id)arg1;
- (char)fitsBelow:(id)arg0 alignment:(unsigned int)arg1 spacing:(float)arg2 from:(int)arg3;
- (char)spacingOf:(OADPercentTextSpacing *)arg0 and:(id)arg1 and:(id)arg2 is:(float *)arg3;
- (unsigned int)alignmentOf:(id)arg0 and:(id)arg1 and:(id)arg2;
- (char)styleOf:(TSWPShapeStyle *)arg0 differsFromStyleOf:(id)arg1;
- (char)firstWordOf:(id)arg0 fits:(id)arg1 indent:(float)arg2;
- (char)line:(id)arg0 isAlignedWith:(id)arg1;
- (int)paragraph:(CPParagraph *)arg0 splits:(id)arg1;
- (void)addCompoundedShapesOn:(id)arg0 to:(NSObject *)arg1;
- (id)newInitialParagraph;
- (void)addLinesTo:(id)arg0;

@end
