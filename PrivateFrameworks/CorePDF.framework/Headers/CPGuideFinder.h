/* Runtime dump - CPGuideFinder
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPGuideFinder : NSObject <CPDisposable>
{
    CPZone * contentZone;
    unsigned int countOfWordsInZone;
    double * anchorArray;
    double * rightHandSideArray;
    struct ? * crossingWordArray;
    CPCluster * anchors;
    CPCluster * rightHandSides;
    float medianFontSizeOfFirstCharacter;
    float medianFontSizeOfLastCharacter;
    NSMutableArray * gutters;
    NSMutableArray * leftGuides;
    NSMutableArray * rightGuides;
}

+ (char)gutterSeparates:(id)arg0 from:(NSObject *)arg1;
+ (void)reclusterPreservingAlignment:(id)arg0;
+ (void)reclusterBetweenGuides:(id)arg0;
+ (char)guideSeparates:(id)arg0 from:(NSObject *)arg1;

- (void)dealloc;
- (void)dispose;
- (NSMutableArray *)leftGuides;
- (NSMutableArray *)rightGuides;
- (NSMutableArray *)gutters;
- (CPGuideFinder *)initWithContentZone:(CPZone *)arg0;
- (void)findGutters;
- (void)findGuides;
- (void)markTextLines;
- (void)splitTextLines;
- (char)addStripTo:(id)arg0 bottom:(float)arg1 left:(float)arg2 top:(float)arg3 right:(float)arg4;
- (void)setAlignForWordWithExtent:(struct ? *)arg0 stripArray:(NSArray *)arg1 stripMax:(id)arg2;
- (void)subdivideStripInto:(id)arg0 from:(double)arg1 to:(double)arg2 borderedBy:(struct ? *)arg3 ofCount:(NSObject *)arg4 crossedBy:(unsigned int)arg5 ofCount:(struct ? *)arg6;
- (void)getWordEdges;
- (void)findWordEdgeClusters;
- (void)subdivideGutterFrom:(unsigned int)arg0 to:(unsigned int)arg1;
- (void)subdivideLeftGuideAt:(unsigned int)arg0;
- (void)subdivideRightGuideAt:(unsigned int)arg0;
- (char)hasGutters;
- (char)hasLeftGuides;
- (char)hasRightGuides;
- (void)splitTextLinesAtBorderWords;
- (void)splitTextLinesBetweenBorderWords;
- (float)medianFontSizeOfFirstCharacter;
- (float)medianFontSizeOfLastCharacter;
- (void)finalize;

@end
