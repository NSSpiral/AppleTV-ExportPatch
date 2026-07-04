/* Runtime dump - CPZoneBorder
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorder : NSObject <NSCopying, CPCopying>
{
    struct CGRect bounds;
    CPPage * page;
    NSMutableArray * ownerArray;
    NSMutableArray * graphicObjects;
    NSMutableArray * neighbors;
    NSMutableArray * intersections;
    char isHorizontal;
    char hasForwardVector;
    char hasBackwardVector;
    float overhangMin;
    float overhangMax;
}

+ (void)outerVertices:(struct CGPoint *)arg0 fromBorders:(EBBorders *)arg1 swollenBy:(float)arg2;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(EDBorders *)arg0;
+ (void)addIntersectionBetweenBorder:(id)arg0 andBorder:(id)arg1 atRect:(struct CGRect)arg2;
+ (struct CGRect)extendRect:(NSObject *)arg0;
+ (void)removeIntersectionBetweenBorder:(id)arg0 andBorder:(id)arg1;

- (void)dealloc;
- (struct CGRect)bounds;
- (CPZoneBorder *)init;
- (void)setBounds:(struct CGRect)arg0;
- (CPZoneBorder *)copyWithZone:(struct _NSZone *)arg0;
- (char)isVertical;
- (CPPage *)page;
- (char)isHorizontal;
- (long)zOrder;
- (int)compareXBounds:(id)arg0;
- (int)compareYBounds:(id)arg0;
- (CPZoneBorder *)initSuper;
- (unsigned int)graphicObjectCount;
- (NSObject *)graphicObjectAtIndex:(unsigned int)arg0;
- (char)hasNeighborShape:(id)arg0;
- (unsigned int)indexOfIntersectionWith:(id)arg0;
- (unsigned int)neighborCount;
- (NSObject *)neighborAtIndex:(unsigned int)arg0;
- (char)hasNeighborShape:(id)arg0 atSide:(int)arg1;
- (NSMutableArray *)graphicObjects;
- (void)addGraphicObject:(NSObject *)arg0;
- (unsigned int)intersectionCount;
- (char)windsClockwiseOnto:(id)arg0;
- (char)continues:(id)arg0;
- (char)extractCycleTo:(id)arg0 goingForward:(char)arg1 throughIntersectionIndex:(unsigned int)arg2 returningTo:(id)arg3 atRect:(struct CGRect *)arg4;
- (NSArray *)copyWithoutIntersections;
- (char)hasClockwiseVectorAtIndex:(unsigned int)arg0 startingForward:(char)arg1;
- (char)hasCounterclockwiseVectorAtIndex:(unsigned int)arg0 startingForward:(char)arg1;
- (void)addToArray:(NSArray *)arg0;
- (void)trimToLastIntersections;
- (void)addNeighbor:(CPZoneBorderNeighbor *)arg0;
- (void)removeFromArray;
- (void)removeLooseThreadsStartingFrom:(NSObject *)arg0;
- (CPZoneBorder *)initWithGraphicObject:(NSObject *)arg0;
- (void)addToArray:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)removeFromArrayAtIndex:(unsigned int)arg0;
- (NSMutableArray *)ownerArray;
- (void)removeGraphicObjectAtIndex:(unsigned int)arg0;
- (void)removeNeighborAtIndex:(unsigned int)arg0;
- (void)setHasForwardVector:(char)arg0;
- (char)hasForwardVector;
- (void)setHasBackwardVector:(char)arg0;
- (char)hasBackwardVector;
- (void)setSide:(int)arg0 ofPage:(RUIPage *)arg1;
- (char)intersectsWith:(id)arg0 atRect:(struct CGRect *)arg1;
- (void)instantiateVectors;
- (char)hasVectorGoingForward:(char)arg0 startingAtIndex:(unsigned int *)arg1;
- (char)extractCycleTo:(id)arg0 goingForward:(char)arg1 startingAtIndex:(unsigned int)arg2;
- (char)crosses:(id)arg0;
- (void)combine:(id)arg0;

@end
