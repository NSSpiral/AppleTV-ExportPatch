/* Runtime dump - PTXParallaxSettings
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxSettings : _UISettings
{
    char _slideEnabled;
    char _tiltEnabled;
    char _increaseEnabled;
    char _alphaEnabled;
    int _slideDirectionX;
    int _slideDirectionY;
    float _slidePixelsX;
    float _slidePixelsY;
    int _tiltDirectionX;
    int _tiltDirectionY;
    float _tiltDegreesX;
    float _tiltDegreesY;
    int _distanceFromScreen;
    float _perspectiveTransform;
    float _slideIncreaseX;
    float _slideIncreaseY;
    float _tiltIncreaseX;
    float _tiltIncreaseY;
    float _minAlpha;
    float _maxAlpha;
}

@property char slideEnabled;
@property int slideDirectionX;
@property int slideDirectionY;
@property float slidePixelsX;
@property float slidePixelsY;
@property char tiltEnabled;
@property int tiltDirectionX;
@property int tiltDirectionY;
@property float tiltDegreesX;
@property float tiltDegreesY;
@property int distanceFromScreen;
@property float perspectiveTransform;
@property char increaseEnabled;
@property float slideIncreaseX;
@property float slideIncreaseY;
@property float tiltIncreaseX;
@property float tiltIncreaseY;
@property char alphaEnabled;
@property float minAlpha;
@property float maxAlpha;

+ (PTXParallaxSettings *)settingsControllerModule;

- (void)setTiltEnabled:(char)arg0;
- (void)setDefaultValues;
- (float)perspectiveTransform;
- (void)setPerspectiveTransform:(float)arg0;
- (void)setTiltIncreaseX:(float)arg0;
- (void)setTiltIncreaseY:(float)arg0;
- (void)setAlphaEnabled:(char)arg0;
- (void)setMinAlpha:(float)arg0;
- (void)setMaxAlpha:(float)arg0;
- (float)maxAlpha;
- (float)minAlpha;
- (float)tiltIncreaseX;
- (float)tiltIncreaseY;
- (char)alphaEnabled;
- (void)setSlideEnabled:(char)arg0;
- (void)setSlideDirectionX:(int)arg0;
- (void)setSlideDirectionY:(int)arg0;
- (void)setSlidePixelsX:(float)arg0;
- (void)setSlidePixelsY:(float)arg0;
- (void)setTiltDirectionX:(int)arg0;
- (void)setTiltDirectionY:(int)arg0;
- (void)setTiltDegreesX:(float)arg0;
- (void)setTiltDegreesY:(float)arg0;
- (void)setDistanceFromScreen:(int)arg0;
- (void)setIncreaseEnabled:(char)arg0;
- (void)setSlideIncreaseX:(float)arg0;
- (void)setSlideIncreaseY:(float)arg0;
- (char)slideEnabled;
- (int)slideDirectionX;
- (int)slideDirectionY;
- (float)slidePixelsX;
- (float)slidePixelsY;
- (char)tiltEnabled;
- (int)tiltDirectionX;
- (int)tiltDirectionY;
- (float)tiltDegreesX;
- (float)tiltDegreesY;
- (int)distanceFromScreen;
- (char)increaseEnabled;
- (float)slideIncreaseX;
- (float)slideIncreaseY;

@end
