/* Runtime dump - SBFParallaxSettings
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFParallaxSettings : _UISettings
{
    char _slideEnabled;
    char _tiltEnabled;
    char _increaseEnabled;
    int _slideDirectionX;
    int _slideDirectionY;
    float _slidePixelsX;
    float _slidePixelsY;
    int _tiltDirectionX;
    int _tiltDirectionY;
    float _tiltDegreesX;
    float _tiltDegreesY;
    int _distanceFromScreen;
    float _slideIncreaseX;
    float _slideIncreaseY;
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
@property char increaseEnabled;
@property float slideIncreaseX;
@property float slideIncreaseY;

+ (SBFParallaxSettings *)settingsControllerModule;

- (void)setTiltEnabled:(char)arg0;
- (void)setDefaultValues;
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
