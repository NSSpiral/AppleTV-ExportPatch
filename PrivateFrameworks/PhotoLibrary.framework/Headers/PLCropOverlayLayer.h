/* Runtime dump - PLCropOverlayLayer
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayLayer : UIView
{
    struct CGRect _cropRect;
    UIView * _topOpaqueLayer;
    UIView * _bottomOpaqueLayer;
    UIView * _rightOpaqueLayer;
    UIView * _leftOpaqueLayer;
    UIView * _topEdgeLayer;
    UIView * _bottomEdgeLayer;
    UIView * _rightEdgeLayer;
    UIView * _leftEdgeLayer;
    UIView * _topLeftCornerLayer;
    UIView * _topRightCornerLayer;
    UIView * _bottomRightCornerLayer;
    UIView * _bottomLeftCornerLayer;
    UIView * _topThirdLayer;
    UIView * _bottomThirdLayer;
    UIView * _rightThirdLayer;
    UIView * _leftThirdLayer;
    id _straightenHorizontalLayers;
    id _straightenVerticalLayers;
    id _showsCropRect;
    id _showThirdsGrid;
    id _showsStraightenGrid;
    id _thirdsVisible;
    id _highlighted;
}

- (PLCropOverlayLayer *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setHighlighted:(char)arg0;
- (char)isHighlighted;
- (void)setCropRect:(struct CGRect)arg0;
- (struct CGRect)cropRect;
- (void)_updateCropRectVisibility;
- (void)_updateLayout;
- (void)setShowsCropRect:(char)arg0;
- (char)showsCropRect;
- (void)showThirdsGrid:(char)arg0;
- (char)showsThirdsGrid;
- (void)showStraightenGrid:(char)arg0;
- (char)showsStraightenGrid;

@end
