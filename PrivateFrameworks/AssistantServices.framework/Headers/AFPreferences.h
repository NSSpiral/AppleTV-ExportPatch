/* Runtime dump - AFPreferences
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPreferences : NSObject
{
    char _registeredForInternalPrefs;
    char _registeredForLanguageCode;
    char _registeredForOutputVoice;
    NSObject<OS_dispatch_queue> * _navTokenQueue;
    char _navTokenIsValid;
    int _navToken;
}

+ (AFPreferences *)sharedPreferences;

- (void)dealloc;
- (AFPreferences *)init;
- (void)synchronize;
- (void).cxx_destruct;
- (char)ignoreServerManualEndpointingThreshold;
- (id)manualEndpointingThreshold;
- (char)dictationIsEnabled;
- (NSString *)languageCode;
- (id)birthCertificateDataForLanguageCode:(id)arg0;
- (id)outputVoice;
- (void)setOutputVoice:(id)arg0;
- (void)_registerForInteralPrefs;
- (void)_registerForLanguageCode;
- (char)assistantIsEnabled;
- (void)_registerForOutputVoice;
- (void)_registerForNavStatusIfNeeded;
- (void)setBirthCertificateData:(NSData *)arg0 forLanguageCode:(id)arg1;
- (NSArray *)whitelistedLanguages;
- (void)_setLoggingDefaultValue:(id)arg0 forKey:(NSString *)arg1;
- (void)_preferencesDidChangeExternally;
- (void)_internalPreferencesDidChangeExternally;
- (void)_languageCodeDidChangeExternally;
- (void)_ouputVoiceDidChangeExternally;
- (void)_setAssistantIsEnabledLocal:(char)arg0;
- (void)_setDictationIsEnabledLocal:(char)arg0;
- (void)setAssistantIsEnabled:(char)arg0;
- (void)setDictationIsEnabled:(char)arg0;
- (int)bugReportingMode;
- (void)setBugReportingMode:(int)arg0;
- (char)debugButtonIsEnabled;
- (void)setDebugButtonIsEnabled:(char)arg0;
- (int)handsFreeMode;
- (void)setHandsFreeMode:(int)arg0;
- (void)setIgnoreServerManualEndpointingThreshold:(char)arg0;
- (void)setManualEndpointingThreshold:(id)arg0;
- (char)streamingDictationEnabled;
- (void)setStreamingDictationEnabled:(char)arg0;
- (char)disableAssistantWhilePasscodeLocked;
- (void)setDisableAssistantWhilePasscodeLocked:(char)arg0;
- (char)shouldShowReadyForLanguageCode:(id)arg0;
- (void)didShowReadyForLanguageCode:(id)arg0;
- (void)setShouldShowReadyForLanguageCode:(id)arg0;
- (void)synchronizeVoiceServicesLanguageCode;
- (NSString *)valueForSessionContextPreferenceKey:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forSessionContextKey:(NSString *)arg1;
- (id)languagesMissingBirthCertificates;
- (void)setFileLoggingIsEnabled:(char)arg0;
- (char)fileLoggingIsEnabled;
- (void)setLanguageCode:(NSString *)arg0;

@end
