/* Runtime dump - BRWindow
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface BRWindow : NSObject
{
    BRControl * _content;
    BRControl * _plane;
    int _level;
    char _orderedIn;
    char _opaque;
}

@property (retain, nonatomic) UIColor * backgroundColor;

+ (BRWindow *)windowList;
+ (void)adjustToDisplayChange;
+ (BRWindow *)focusedLeafControl;
+ (struct CGRect)interfaceFrame;
+ (void)_establishRootLayerBounds;
+ (void)_establishRootContext;
+ (void)setMaxBounds:(struct CGRect)arg0;
+ (BRWindow *)window;
+ (void)initialize;
+ (CALayer *)rootLayer;
+ (char)dispatchEvent:(NSObject *)arg0;

- (char)acceptsFocus;
- (void)setAcceptsFocus:(char)arg0;
- (void)orderFront;
- (void)setIsOpaque:(char)arg0;
- (void)_orderWindowFront:(id)arg0;
- (void)_orderWindowOut:(id)arg0;
- (void)_orderWindowBack:(id)arg0;
- (void)_orderWindow:(NSObject *)arg0 below:(id)arg1;
- (void)_orderWindow:(NSObject *)arg0 above:(UITextEffectsWindowNoAbove *)arg1;
- (void)_updateRenderedWindows;
- (void)orderBack;
- (char)isOrderedIn;
- (NSObject *)_controlPlane;
- (void)_addWindow:(NSObject *)arg0 atIndex:(long)arg1;
- (void)orderBelow:(id)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (BRWindow *)init;
- (void)orderAbove:(id)arg0;
- (void)setLevel:(int)arg0;
- (char)isOpaque;
- (int)level;
- (BRControl *)content;
- (void)orderOut;
- (void)_updateContent;
- (void)setContent:(BRControl *)arg0;

@end
