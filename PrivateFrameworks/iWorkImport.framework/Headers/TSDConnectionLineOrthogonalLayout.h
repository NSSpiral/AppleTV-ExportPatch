/* Runtime dump - TSDConnectionLineOrthogonalLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout

- (NSObject *)createConnectedPathFrom:(NSObject *)arg0 to:(NSObject *)arg1 withControlPoints:(void *)arg2;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg0 pointB:(struct CGPoint)arg1 andOriginalA:(struct CGPoint)arg2 originalB:(struct CGPoint)arg3;
- (char)canEndpointsCoincide;
- (struct CGRect)orthoRectOfLayout:(NSObject *)arg0 outset:(SEL)arg1;
- (struct CGPoint)axisSnapPoint:(struct CGPoint)arg0 toXs:(struct vector<float, std::__1::allocator<float> >)arg1 toYs:(id)arg2 withThreshold:(struct vector<float, std::__1::allocator<float> >)arg3;

@end
