/* Runtime dump - TSDConnectionLineRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineRep : TSDShapeRep
{
    TSDPathSource * mLastPathSource;
}

- (void)updateFromLayout;
- (float)shortestDistanceToPoint:(struct CGPoint)arg0 countAsHit:(char *)arg1;
- (NSObject *)connectionLineLayout;
- (void)dealloc;
- (char)containsPoint:(struct CGPoint)arg0;

@end
