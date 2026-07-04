/* Runtime dump - TSDConnectionLineLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout
{
    float mStartClipT;
    float mEndClipT;
}

- (struct CGPoint)getControlKnobPosition:(unsigned int)arg0;
- (id)quadraticCurve:(id)arg0;
- (NSObject *)createConnectedPathFrom:(NSObject *)arg0 to:(NSObject *)arg1 withControlPoints:(void *)arg2;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg0 pointB:(struct CGPoint)arg1 andOriginalA:(struct CGPoint)arg2 originalB:(struct CGPoint)arg3;

@end
