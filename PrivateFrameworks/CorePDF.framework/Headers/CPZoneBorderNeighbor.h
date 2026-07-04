/* Runtime dump - CPZoneBorderNeighbor
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying>
{
    CPShape * neighborShape;
    int shapeSide;
}

- (void)dealloc;
- (CPZoneBorderNeighbor *)init;
- (CPZoneBorderNeighbor *)copyWithZone:(struct _NSZone *)arg0;
- (CPZoneBorderNeighbor *)initSuper;
- (CPShape *)neighborShape;
- (int)shapeSide;
- (void)setNeighborShape:(CPShape *)arg0;
- (void)setShapeSide:(int)arg0;

@end
