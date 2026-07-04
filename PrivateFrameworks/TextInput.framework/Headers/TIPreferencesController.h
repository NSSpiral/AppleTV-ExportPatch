/* Runtime dump - TIPreferencesController
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIPreferencesController : NSObject
{
    NSTimer * _synchronizePreferencesTimer;
    char dontSynchronizePreferences;
    char isInternalInstall;
}

@property (nonatomic) char dontSynchronizePreferences;
@property (nonatomic) char isInternalInstall;

+ (TIPreferencesController *)sharedPreferencesController;

- (char)boolForKey:(int)arg0;
- (NSString *)valueForKey:(int)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(int)arg1;
- (void)dealloc;
- (TIPreferencesController *)init;
- (void)setAutocorrectionEnabled:(char)arg0;
- (struct ? *)preferences;
- (char)isKeyLockedDown:(int)arg0;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)touchSynchronizePreferencesTimer;
- (void)setIsInternalInstall:(char)arg0;
- (struct ? *)domains;
- (char)dontSynchronizePreferences;
- (void)managedKeyboardSettingDidChange:(NSDictionary *)arg0;
- (NSString *)valueForManagedKey:(int)arg0;
- (NSString *)defaultForKey:(int)arg0;
- (struct ? *)domainForType:(int)arg0;
- (void)setDontSynchronizePreferences:(char)arg0;
- (void)clearSynchronizePreferencesTimer;
- (void)setValue:(NSObject *)arg0 forManagedKey:(int)arg1;
- (void)setPredictionEnabled:(char)arg0;
- (void)setCheckSpellingEnabled:(char)arg0;
- (void)preferencesChangedCallback:(id /* block */)arg0;
- (char)isInternalInstall;

@end
