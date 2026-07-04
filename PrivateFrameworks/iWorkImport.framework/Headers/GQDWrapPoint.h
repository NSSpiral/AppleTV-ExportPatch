/* Runtime dump - GQDWrapPoint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWrapPoint : NSObject
{
    struct CGPoint mPoint;
    float mDistance;
    GQDDrawable * mDrawable;
    int mFlowType;
    int mZIndex;
}

- (int)comparePoint:(NSObject *)arg0;
- (GQDWrapPoint *)initWithX:(float)arg0 y:(float)arg1 flowType:(int)arg2 drawable:(TSDDrawableInfo *)arg3;
- (void).cxx_construct;
- (int)zIndex;

@end
