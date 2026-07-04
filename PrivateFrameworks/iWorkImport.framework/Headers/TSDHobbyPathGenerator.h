/* Runtime dump - TSDHobbyPathGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDHobbyPathGenerator : NSObject
{
    char mClosed;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > * mPoints;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > * mMorphedPoints;
}

- (void)calculateClosings;
- (void)adjustNodeTypes:(NSArray *)arg0;
- (void)adjustStraightenUp:(id)arg0;
- (void)adjustRemoveStraightNodes:(id)arg0;
- (void)morphPointsTo:(id)arg0;
- (void)adjustStraightEdges:(id)arg0;
- (void)adjustRatio:(id)arg0;
- (void)adjustRotationalSymmetry:(id)arg0;
- (float)distanceForSegment:(unsigned int)arg0 overRange:(struct _NSRange)arg1 furthestNode:(unsigned int *)arg2 inSubpath:(TSDBezierSubpath *)arg3;
- (char)pathWillClose:(id)arg0;
- (NSObject *)hobbyPathFrom:(NSObject *)arg0 morphedPath:(id *)arg1;
- (NSString *)calculateHobbyPath;
- (void)dealloc;
- (TSDHobbyPathGenerator *)init;

@end
