/* Runtime dump - BrightnessSystemClient
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemClient : NSObject
{
    BrightnessSystemClientInternal * bsci;
}

- (void)dealloc;
- (BrightnessSystemClient *)init;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)registerNotificationBlock:(id /* block */)arg0;
- (char)isAlsSupported;
- (void)registerNotificationBlock:(id /* block */)arg0 forProperties:(/* block */ id)arg1;
- (NSString *)copyPropertyForKey:(NSString *)arg0;

@end
