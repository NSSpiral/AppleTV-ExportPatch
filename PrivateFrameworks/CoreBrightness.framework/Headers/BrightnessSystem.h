/* Runtime dump - BrightnessSystem
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystem : NSObject
{
    BrightnessSystemInternal * bsi;
}

- (void)dealloc;
- (BrightnessSystem *)init;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)registerNotificationBlock:(id /* block */)arg0;
- (char)isAlsSupported;
- (NSString *)copyPropertyForKey:(NSString *)arg0;

@end
