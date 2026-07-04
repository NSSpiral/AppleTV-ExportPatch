/* Runtime dump - BRBlueGlowSelectionLozengeLayerBacking
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSelectionLozengeLayer.h>
@interface BRBlueGlowSelectionLozengeLayerBacking : BRSelectionLozengeLayer
{
    char _isFocused;
    char _usesDimmedUnfocusedBackground;
}

@property (nonatomic) char usesDimmedUnfocusedBackground;

- (void)setUsesDimmedUnfocusedBackground:(char)arg0;
- (NSString *)preferredActionForKey:(NSString *)arg0;
- (char)usesDimmedUnfocusedBackground;
- (void)setFocused:(char)arg0;
- (float)bottomGlowHeight;
- (float)topGlowHeight;
- (float)edgeGlowWidth;
- (CAMediaTimingFunction *)animationTimingFunction;
- (BRBlueGlowSelectionLozengeLayerBacking *)init;
- (void)_updateBackgroundColor;
- (float)animationDuration;
- (float)edgeInset;

@end
