/* Runtime dump - AVFlashlight_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlight_FigRecorder : NSObject
{
    AVFlashlightInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) char available;
@property (readonly, nonatomic) char overheated;
@property (readonly, nonatomic) float flashlightLevel;

+ (char)hasFlashlight;
+ (void)initialize;

- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (float)flashlightLevel;
- (void)_refreshIsAvailable;
- (char)bringupFigRecorderWithError:(id *)arg0;
- (void)teardownFigRecorder;
- (char)ensureFigRecorderWithError:(id *)arg0;
- (char)turnPowerOnWithError:(id *)arg0;
- (char)setFlashlightLevel:(float)arg0 withError:(id *)arg1;
- (char)isOverheated;
- (void)turnPowerOff;
- (void)dealloc;
- (AVFlashlight_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (char)isAvailable;

@end
