/* Runtime dump - MKOverlayContainerView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayContainerView : UIView
{
    id _overlays;
    id _overlayToDrawable;
    id _drawables;
    id _vkOverlays;
    id _viewContainers;
    <MKOverlayContainerViewDelegate> * _delegate;
    float _mapZoomScale;
}

@property (weak, nonatomic) <MKOverlayContainerViewDelegate> * delegate;
@property (nonatomic) float mapZoomScale;
@property (readonly, nonatomic) NSArray * overlays;

- (void)addAndRemoveOverlayViews;
- (void)setMapZoomScale:(float)arg0;
- (void)addOverlays:(id)arg0;
- (void)addOverlay:(NSObject *)arg0 level:(int)arg1;
- (void)addOverlays:(id)arg0 level:(int)arg1;
- (void)insertOverlay:(NSObject *)arg0 atIndex:(unsigned int)arg1 level:(int)arg2;
- (void)removeOverlays:(id)arg0;
- (void)exchangeOverlay:(NSObject *)arg0 withOverlay:(NSObject *)arg1;
- (NSObject *)drawableForOverlay:(NSObject *)arg0;
- (id)overlaysInLevel:(int)arg0;
- (int)_drawableIndexForDrawable:(id)arg0 level:(int)arg1;
- (void)_insertDrawable:(id)arg0 forOverlay:(NSObject *)arg1 atIndex:(int)arg2 level:(int)arg3;
- (void)_configureAndAddDrawable:(id)arg0 forOverlay:(NSObject *)arg1 level:(int)arg2;
- (struct ?)_mapRectWithFractionOfVisible:(id)arg0;
- (void)_removeDrawable:(GQHPagesFloatingDrawable *)arg0 forOverlay:(NSObject *)arg1 level:(int)arg2;
- (id)_considerAddingDrawable:(id)arg0 inAddRect:(struct ?)arg1 level:(struct ?)arg2;
- (int)_levelForOverlay:(NSObject *)arg0 exists:(char *)arg1;
- (void)_exchangeOverlayAtIndex:(unsigned int)arg0 withOverlayAtIndex:(unsigned int)arg1 level:(int)arg2;
- (void)_updateContentScale:(id)arg0;
- (id)_viewContainerForLevel:(int)arg0;
- (void)visibleRectChanged;
- (float)mapZoomScale;
- (MKOverlayContainerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<MKOverlayContainerViewDelegate> *)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)didMoveToWindow;
- (<MKOverlayContainerViewDelegate> *)delegate;
- (void).cxx_destruct;
- (NSArray *)overlays;
- (void)removeOverlay:(NSObject *)arg0;
- (void)addOverlay:(NSObject *)arg0;
- (void)insertOverlay:(NSObject *)arg0 aboveOverlay:(NSObject *)arg1;
- (void)insertOverlay:(NSObject *)arg0 belowOverlay:(NSObject *)arg1;
- (void)insertOverlay:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)exchangeOverlayAtIndex:(unsigned int)arg0 withOverlayAtIndex:(unsigned int)arg1;

@end
