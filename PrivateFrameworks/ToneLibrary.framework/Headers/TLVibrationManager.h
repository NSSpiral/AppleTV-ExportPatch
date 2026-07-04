/* Runtime dump - TLVibrationManager
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationManager : NSObject
{
    char _needsRefresh;
    char _allowsAutoRefresh;
    unsigned int _specialBehaviors;
    NSDictionary * _cachedSystemVibrationPatterns;
    NSDictionary * _cachedUserGeneratedVibrationPatterns;
    NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;
    TLAccessQueue * _accessQueue;
}

@property (nonatomic) char needsRefresh;
@property (nonatomic) char allowsAutoRefresh;
@property (readonly, nonatomic) char shouldVibrateForCurrentRingerSwitchState;
@property (readonly, nonatomic) char shouldVibrateOnRing;
@property (readonly, nonatomic) char shouldVibrateOnSilent;
@property (nonatomic) char _allowsAutoRefresh;
@property (nonatomic) unsigned int _specialBehaviors;
@property (readonly, nonatomic) char _unitTestingModeEnabled;
@property (readonly, nonatomic) NSDictionary * _systemVibrationPatterns;
@property (retain, nonatomic) NSDictionary * _cachedSystemVibrationPatterns;
@property (readonly, nonatomic) NSDictionary * _userGeneratedVibrationPatterns;
@property (retain, nonatomic) NSDictionary * _cachedUserGeneratedVibrationPatterns;
@property (retain) TLAccessQueue * _accessQueue;
@property (retain, nonatomic) NPSDomainAccessor * _transientNanoPreferencesDomainAccessor;

+ (TLVibrationManager *)sharedVibrationManager;
+ (void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned int)arg0 atInitiativeOfVibrationManager:(NSObject *)arg1;
+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;

- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (char)vibrationWithIdentifierIsValid:(id)arg0;
- (void)setAllowsAutoRefresh:(char)arg0;
- (NSString *)nameOfVibrationWithIdentifier:(NSString *)arg0;
- (char)refresh;
- (void)dealloc;
- (TLVibrationManager *)init;
- (TLAccessQueue *)_accessQueue;
- (void)_setAccessQueue:(NSObject *)arg0;
- (void)_performBlockInAccessQueue:(NSObject *)arg0;
- (void)_setTransientNanoPreferencesDomainAccessor:(NSObject *)arg0;
- (NSURLConnection *)_newServiceConnection;
- (NPSDomainAccessor *)_transientNanoPreferencesDomainAccessor;
- (TLVibrationManager *)_initWithSpecialBehaviors:(unsigned int)arg0;
- (void)_setSpecialBehaviors:(unsigned int)arg0;
- (void)_setAllowsAutoRefresh:(char)arg0;
- (char)_isUnitTestingModeEnabled;
- (void)_setCachedSystemVibrationPatterns:(id)arg0;
- (void)_setCachedUserGeneratedVibrationPatterns:(id)arg0;
- (char)_allowsAutoRefresh;
- (unsigned int)_specialBehaviors;
- (char)needsRefresh;
- (NSDictionary *)_cachedUserGeneratedVibrationPatterns;
- (void)_setNeedsRefresh:(char)arg0;
- (NSDictionary *)_userGeneratedVibrationPatterns;
- (NSObject *)currentVibrationIdentifierForAlertType:(int)arg0 accountIdentifier:(NSString *)arg1;
- (void)setCurrentVibrationIdentifier:(NSString *)arg0 forAlertType:(int)arg1 accountIdentifier:(NSString *)arg2;
- (NSObject *)_systemWideVibrationPatternPreferenceKeyForAlertType:(int)arg0;
- (NSObject *)defaultVibrationIdentifierForAlertType:(int)arg0;
- (NSObject *)_currentVibrationIdentifierForAlertType:(int)arg0 accountIdentifier:(NSString *)arg1;
- (void)_didSetVibrationPreferenceSuccessfullyWithKey:(NSString *)arg0 inDomain:(NSString *)arg1 usingPreferencesOfKind:(unsigned int)arg2;
- (NSObject *)currentVibrationIdentifierForAlertType:(int)arg0;
- (NSString *)patternForVibrationWithIdentifier:(NSString *)arg0 repeating:(char)arg1;
- (NSString *)_patternForSystemVibrationWithIdentifier:(NSString *)arg0;
- (NSObject *)noneVibrationPattern;
- (NSDictionary *)_cachedSystemVibrationPatterns;
- (NSDictionary *)_systemVibrationPatterns;
- (NSString *)_localizedNameForVibrationWithIdentifier:(NSString *)arg0;
- (NSString *)patternForVibrationWithIdentifier:(NSString *)arg0;
- (NSString *)_nameOfVibrationWithIdentifier:(NSString *)arg0;
- (NSObject *)_retrieveUserGeneratedVibrationPatternsUsingService;
- (char)_setUserGeneratedVibrationPatternsUsingService:(NSObject *)arg0 error:(id *)arg1;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (char)_saveUserGeneratedVibrationPatterns:(id)arg0 error:(id *)arg1;
- (char)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id *)arg0;
- (char)_booleanPreferenceForKey:(struct __CFString *)arg0 defaultValue:(char)arg1;
- (char)shouldVibrateOnSilent;
- (char)shouldVibrateOnRing;
- (unsigned int)_storedSystemVibrationDataMigrationVersion;
- (void)setCurrentVibrationIdentifier:(NSString *)arg0 forAlertType:(int)arg1;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg0 accountIdentifier:(NSString *)arg1;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg0 accountIdentifier:(NSString *)arg1 didFindPersistedWatchAlertPolicy:(char *)arg2;
- (NSObject *)_currentVibrationWatchAlertPolicyPreferenceKeyForAlertType:(int)arg0 accountIdentifier:(NSString *)arg1;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg0 forAlertType:(int)arg1 accountIdentifier:(NSString *)arg2;
- (char)allowsAutoRefresh;
- (NSObject *)currentVibrationNameForAlertType:(int)arg0;
- (NSObject *)currentVibrationPatternForAlertType:(int)arg0;
- (NSObject *)defaultVibrationNameForAlertType:(int)arg0;
- (NSObject *)defaultVibrationPatternForAlertType:(int)arg0;
- (NSString *)noneVibrationName;
- (NSString *)allUserSelectableSystemVibrationIdentifiers;
- (NSString *)allUserGeneratedVibrationIdentifiers;
- (char)_vibrationIsSettableForAlertType:(int)arg0;
- (NSObject *)addUserGeneratedVibrationPattern:(NSObject *)arg0 name:(NSString *)arg1 error:(id *)arg2;
- (char)setName:(NSString *)arg0 forUserGeneratedVibrationWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)deleteUserGeneratedVibrationPatternWithIdentifier:(NSString *)arg0 error:(id *)arg1;
- (unsigned int)_numberOfUserGeneratedVibrations;
- (char)_removeAllUserGeneratedVibrationsWithError:(id *)arg0;
- (char)shouldVibrateForCurrentRingerSwitchState;
- (char)_migrateLegacySettings;
- (int)_currentVibrationWatchAlertPolicyForAlertType:(int)arg0;
- (void)_setCurrentVibrationWatchAlertPolicy:(int)arg0 forAlertType:(int)arg1;

@end
