/* Runtime dump - RadiosPreferences
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface RadiosPreferences : NSObject
{
    struct __SCPreferences * _prefs;
    int _applySkipCount;
    <RadiosPreferencesDelegate> * _delegate;
    char _isCachedAirplaneModeValid;
    char _cachedAirplaneMode;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    char notifyForExternalChangeOnly;
}

@property (nonatomic) char airplaneMode;
@property (nonatomic) <RadiosPreferencesDelegate> * delegate;
@property (nonatomic) char notifyForExternalChangeOnly;

+ (char)shouldMirrorAirplaneMode;

- (void)refresh;
- (void *)getValueForKey:(NSString *)arg0;
- (void)release;
- (void)setValue:(void *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)setDelegate:(<RadiosPreferencesDelegate> *)arg0;
- (RadiosPreferences *)init;
- (<RadiosPreferencesDelegate> *)delegate;
- (void)synchronize;
- (RadiosPreferences *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)notifyTarget:(unsigned int)arg0;
- (void)initializeSCPrefs:(id)arg0;
- (void)setAirplaneModeWithoutMirroring:(char)arg0;
- (void)setCallback:(/* block */ id *)arg0 withContext:(struct ? *)arg1;
- (char)notifyForExternalChangeOnly;
- (void)setNotifyForExternalChangeOnly:(char)arg0;
- (char)airplaneMode;
- (void)setAirplaneMode:(char)arg0;

@end
