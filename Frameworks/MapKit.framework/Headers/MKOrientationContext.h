/* Runtime dump - MKOrientationContext
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOrientationContext : NSObject
{
    NSMutableArray * orientViews;
    NSArray * relativeViews;
    struct UIView * projectionView;
    struct CGRect * relativeViewFrames;
}

- (void)_computeRelativeViewFrames;
- (void)_computeRelativeViewFrame:(NSObject *)arg0;
- (MKOrientationContext *)initWithViewsToOrient:(id)arg0 relativeViews:(NSArray *)arg1 projectionView:(struct UIView *)arg2;
- (void)invalidateView:(NSObject *)arg0;
- (void)dealloc;
- (void).cxx_destruct;

@end
