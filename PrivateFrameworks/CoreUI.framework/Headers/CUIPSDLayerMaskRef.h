/* Runtime dump - CUIPSDLayerMaskRef
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef * _layerRef;
    char _isVectorMask;
}

- (void)dealloc;
- (struct CGRect)bounds;
- (char)isEnabled;
- (CUIPSDLayerMaskRef *)initLayerMaskWithLayerRef:(CUIPSDLayerRef *)arg0;
- (CUIPSDLayerMaskRef *)initVectorMaskWithLayerRef:(CUIPSDLayerRef *)arg0;
- (struct CGPath *)newBezierPathAtScale:(float)arg0;
- (CUIPSDLayerRef *)layerRef;
- (char)isLinked;
- (char)isInvertedWhenBlending;
- (struct CGPath *)newBezierPath;
- (struct CGImage *)createCGImageMask;

@end
