/* Runtime dump - PUIProgressWindow
 * Image: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
 */

@interface PUIProgressWindow : NSObject
{
    char _weCreatedTheContext;
    CAContext * _context;
    struct CGSize _displaySize;
    float _displayScale;
    float _displayOrientation;
    char _sideways;
    float _currentProgress;
    struct CGImage * _appleLogo;
    float _progressXDelta;
    float _progressYDelta;
    float _progressWidth;
    char _forceInverted;
    char _white;
    char _showsProgressBar;
    CALayer * _progressLayer;
    char _showPluginName;
    CALayer * _pluginNameLayer;
    NSString * _pluginName;
    CALayer * _layer;
}

@property (readonly, nonatomic) CALayer * layer;

+ (char)_usesPreBoardAppearance;
+ (void)setUsesPreBoardAppearance;

- (void)dealloc;
- (CALayer *)layer;
- (PUIProgressWindow *)init;
- (void)_createContext;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)setVisible:(char)arg0;
- (void).cxx_destruct;
- (PUIProgressWindow *)initWithProgressBarVisibility:(char)arg0 level:(float)arg1 forceInverted:(char)arg2;
- (PUIProgressWindow *)initWithOptions:(unsigned int)arg0 contextLevel:(float)arg1 appearance:(int)arg2;
- (void)_collectDisplayInfo;
- (void)_createLayer;
- (void)_layoutScreen;
- (unsigned int)_nanoDeviceType;
- (struct CGImage *)_createImageWithName:(char *)arg0 scale:(int)arg1 displayHeight:(int)arg2;
- (char)_isNano;
- (void)_drawProgressLayerInContext:(struct CGContext *)arg0;
- (void)_drawPluginNameLayerInContext:(struct CGContext *)arg0;
- (char *)_productSuffix;
- (char *)_appleTVProductSuffix;
- (PUIProgressWindow *)initWithForceInverted:(char)arg0;
- (PUIProgressWindow *)initWithProgressBarVisibility:(char)arg0;
- (PUIProgressWindow *)initWithProgressBarVisibility:(char)arg0 level:(float)arg1;
- (PUIProgressWindow *)initWithProgressBarVisibility:(char)arg0 context:(CAContext *)arg1;
- (void)setProgressValue:(float)arg0;
- (void)setPluginName:(NSString *)arg0;
- (int)_nanoMaterial;
- (PUIProgressWindow *)initWithProgressBarVisibility:(char)arg0 createContext:(char)arg1 contextLevel:(float)arg2 appearance:(int)arg3;

@end
