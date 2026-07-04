/* Runtime dump - AVFlashlight
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFlashlight : NSObject
{
    AVFlashlightInternal * _internal;
}

@property (readonly, nonatomic) char available;
@property (readonly, nonatomic) char overheated;
@property (readonly, nonatomic) float flashlightLevel;

+ (char)hasFlashlight;
+ (AVFlashlight *)alloc;
+ (void)initialize;

- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (float)flashlightLevel;
- (char)turnPowerOnWithError:(id *)arg0;
- (char)setFlashlightLevel:(float)arg0 withError:(id *)arg1;
- (char)isOverheated;
- (void)turnPowerOff;
- (void)_setupFlashlight;
- (void)_teardownFlashlight;
- (void)dealloc;
- (AVFlashlight *)init;
- (char)isAvailable;

@end
