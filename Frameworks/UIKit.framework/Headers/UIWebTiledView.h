/* Runtime dump - UIWebTiledView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebTiledView : UIView
{
    WAKWindow * _wakWindow;
    int _inGestureType;
    int _tilingArea;
    char _didFirstTileLayout;
    char _layoutTilesInMainThread;
    char _tilingModeIsLocked;
    char _allowsPaintingAndScriptsWhilePanning;
    char _editingTilingModeEnabled;
}

- (UIWebTiledView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (void)willMoveToWindow:(NSObject *)arg0;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (void)_didScroll;
- (struct CGRect)visibleRect;
- (void)setTileSize:(struct CGSize)arg0;
- (void)setMaxTileCount:(unsigned int)arg0;
- (void)setTilingEnabled:(char)arg0;
- (void)setLayoutTilesInMainThread:(char)arg0;
- (void)layoutTilesNow;
- (void)setEditingTilingModeEnabled:(char)arg0;
- (void)removeAllNonVisibleTiles;
- (void)setTilingArea:(int)arg0;
- (void)setTilesOpaque:(char)arg0;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)setInGesture:(int)arg0;
- (int)tilingArea;
- (void)_updateForScreen:(NSObject *)arg0;
- (void)_screenChanged:(NSNotification *)arg0;
- (void)layoutTilesNowForRect:(struct CGRect)arg0;
- (void)updateTilingMode;
- (char)tilesOpaque;
- (void)setKeepsZoomedOutTiles:(char)arg0;
- (char)keepsZoomedOutTiles;
- (void)dumpTiles;
- (void)setWAKWindow:(NSObject *)arg0;
- (void)layoutTilesNowOnWebThread;
- (void)drawImageIntoTiles:(struct CGImage *)arg0;
- (void)lockTilingMode;
- (void)unlockTilingMode;
- (char)allowsPaintingAndScriptsWhilePanning;
- (void)setAllowsPaintingAndScriptsWhilePanning:(char)arg0;
- (struct CGSize)tileSize;
- (void)setDrawsGrid:(char)arg0;
- (char)drawsGrid;
- (unsigned int)maxTileCount;
- (unsigned int)adjustedMaxTileCount;
- (char)isTilingEnabled;
- (void)setLogsTilingChanges:(char)arg0;
- (char)logsTilingChanges;
- (void)setTileDrawingEnabled:(char)arg0;
- (char)editingTilingModeEnabled;
- (char)tileDrawingEnabled;
- (char)layoutTilesInMainThread;
- (WAKWindow *)wakWindow;

@end
