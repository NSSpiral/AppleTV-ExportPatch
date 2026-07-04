/* Runtime dump - WAKWindow
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKWindow : WAKResponder
{
    CALayer * _hostLayer;
    struct LegacyTileCache * _tileCache;
    struct CGRect _frozenVisibleRect;
    CALayer * _rootLayer;
    struct CGSize _screenSize;
    struct CGSize _availableScreenSize;
    float _screenScale;
    struct CGRect _frame;
    WAKView * _contentView;
    WAKView * _responderView;
    WAKView * _nextResponder;
    char _visible;
    char _useOrientationDependentFontAntialiasing;
    char _entireWindowVisibleForTesting;
    struct TCMalloc_SpinLock _exposedScrollViewRectLock;
    struct CGRect _exposedScrollViewRect;
}

@property (nonatomic) char useOrientationDependentFontAntialiasing;
@property (nonatomic) struct CGImage * contentReplacementImage;

+ (void)setOrientationProvider:(NSObject *)arg0;
+ (char)hasLandscapeOrientation;
+ (WAKWindow *)currentEvent;

- (WAKWindow *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (struct CGRect)frame;
- (NSString *)description;
- (AXElement *)firstResponder;
- (void)sendEvent:(NSObject *)arg0;
- (char)isKeyWindow;
- (void)makeKeyWindow;
- (WAKView *)contentView;
- (void)setContentView:(WAKView *)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (NSString *)recursiveDescription;
- (void)setVisible:(char)arg0;
- (struct CGRect)visibleRect;
- (void)layoutTilesNow;
- (void)willRotate;
- (void)didRotate;
- (char)isVisible;
- (void)close;
- (void)setContentRect:(struct CGRect)arg0;
- (void)setCurrentTileScale:(float)arg0;
- (void)setZoomedOutTileScale:(float)arg0;
- (void)removeAllNonVisibleTiles;
- (void)setTilesOpaque:(char)arg0;
- (void)removeAllTiles;
- (void)setUseOrientationDependentFontAntialiasing:(char)arg0;
- (void)setTilingDirection:(int)arg0;
- (void)setExposedScrollViewRect:(struct CGRect)arg0;
- (void)displayRect:(struct CGRect)arg0;
- (void)removeForegroundTiles;
- (char)makeFirstResponder:(NSObject *)arg0;
- (void)setAcceleratedDrawingEnabled:(char)arg0;
- (struct CGRect)exposedScrollViewRect;
- (void)sendEventSynchronously:(id)arg0;
- (void)sendMouseMoveEvent:(NSObject *)arg0 contentChange:(int *)arg1;
- (void)setRootLayer:(CALayer *)arg0;
- (void).cxx_construct;
- (void)setScreenSize:(struct CGSize)arg0;
- (void)setAvailableScreenSize:(struct CGSize)arg0;
- (float)screenScale;
- (void)setScreenScale:(float)arg0;
- (WAKWindow *)initWithLayer:(CALayer *)arg0;
- (void)layoutTilesNowForRect:(struct CGRect)arg0;
- (void)setContentReplacementImage:(struct CGImage *)arg0;
- (void)layoutTiles;
- (CALayer *)rootLayer;
- (void)setTilingMode:(int)arg0;
- (char)tilesOpaque;
- (void)setKeepsZoomedOutTiles:(char)arg0;
- (char)keepsZoomedOutTiles;
- (void)dumpTiles;
- (struct CGSize)screenSize;
- (struct CGSize)availableScreenSize;
- (struct LegacyTileCache *)tileCache;
- (struct CGPoint)convertBaseToScreen:(struct CGPoint)arg0;
- (struct CGPoint)convertScreenToBase:(struct CGPoint)arg0;
- (CALayer *)hostLayer;
- (struct CGRect)extendedVisibleRect;
- (char)useOrientationDependentFontAntialiasing;
- (struct CGRect)_visibleRectRespectingMasksToBounds:(id)arg0;
- (void)freezeVisibleRect;
- (void)unfreezeVisibleRect;
- (id)_newFirstResponderAfterResigning;
- (int)keyViewSelectionDirection;
- (void)setFrame:(struct CGRect)arg0 display:(struct CGSize)arg1;
- (void)setEntireWindowVisibleForTesting:(char)arg0;
- (int)tilingMode;
- (int)tilingDirection;
- (float)zoomedOutTileScale;
- (float)currentTileScale;
- (char)hasPendingDraw;
- (struct CGImage *)contentReplacementImage;
- (void)setTileBordersVisible:(char)arg0;
- (void)setTilePaintCountsVisible:(char)arg0;
- (void)setTileControllerShouldUseLowScaleTiles:(char)arg0;

@end
