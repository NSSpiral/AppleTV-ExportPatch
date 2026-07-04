/* Runtime dump - CPZone
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZone : CPRegion <CPGraphicUser>
{
    NSMutableArray * zoneBorders;
    struct CGPoint * outerVertices;
    struct CGPoint * swollenOuterVertices;
    double area;
    char isStraddleZone;
    CPZoneProfile * zoneProfile;
    NSArray * leftGuides;
    NSArray * rightGuides;
    NSArray * gutters;
    NSArray * spacers;
    CPCharSequence * charactersInZone;
    NSMutableArray * textLinesInZone;
    NSArray * graphicsInZone;
    NSMutableArray * backgroundGraphics;
    unsigned int usedGraphicCount;
}

- (void)dealloc;
- (CPZone *)init;
- (CPZone *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableArray *)textLinesInZone;
- (void)accept:(id)arg0;
- (struct CGPoint *)outerVertices;
- (void)incrementUsedGraphicCount;
- (char)isZone;
- (unsigned int)usedGraphicCount;
- (struct CGRect)zoneBounds;
- (struct CGColor *)newBackgroundColor;
- (NSMutableArray *)backgroundGraphics;
- (char)mapToWordsWithIndex:(/* block */ id *)arg0 passing:(void *)arg1;
- (char)mapToWords:(/* block */ id *)arg0 passing:(void *)arg1;
- (char)mapToWordPairs:(/* block */ id *)arg0 passing:(void *)arg1;
- (char)mapToWordPairsWithIndex:(/* block */ id *)arg0 passing:(void *)arg1;
- (char)bordersWindClockwise;
- (char)hasNeighborShape:(id)arg0;
- (long)borderZOrder;
- (long)neighborZOrder;
- (struct CGPoint *)swollenOuterVertices;
- (char)hasBorders;
- (NSMutableArray *)zoneBorders;
- (NSArray *)graphicsInZone;
- (void)setZoneBorders:(NSMutableArray *)arg0;
- (void)removeUnfilledNeighborShapes;
- (struct CGRect)swollenZoneBounds;
- (char)rectangleBordersAtLeft:(id *)arg0 top:(id *)arg1 right:(id *)arg2 bottom:(id *)arg3;
- (char)canContain:(struct CGRect)arg0;
- (void)addPDFChar:(void *)arg0;
- (void)setCharactersInZone:(CPCharSequence *)arg0;
- (CPCharSequence *)charactersInZone;
- (void)addContentFrom:(NSObject *)arg0;
- (int)compareArea:(id)arg0;
- (char)isStraddleZone;
- (void)setIsStraddleZone:(char)arg0;
- (CPZoneProfile *)zoneProfile;
- (void)setZoneProfile:(CPZoneProfile *)arg0;
- (void)setLeftGuides:(NSArray *)arg0;
- (NSArray *)leftGuides;
- (void)setRightGuides:(NSArray *)arg0;
- (NSArray *)rightGuides;
- (void)setGutters:(NSArray *)arg0;
- (NSArray *)gutters;
- (void)setSpacers:(NSArray *)arg0;
- (NSArray *)spacers;
- (double)area;
- (char)isRectangular;
- (unsigned int)vertexCount;
- (char)contains:(id)arg0;
- (unsigned int)wordCount;

@end
