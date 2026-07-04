/* Runtime dump - AFSettingsConnection
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _voicesQueue;
    NSArray * _voices;
    AFVoiceInfo * _selectedVoice;
}

- (void)dealloc;
- (AFSettingsConnection *)init;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;
- (void)fetchSupportedLanguageCodes:(id)arg0;
- (void)setLanguage:(NSString *)arg0;
- (void)setOutputVoice:(id)arg0;
- (void)setAssistantEnabled:(char)arg0;
- (void)setDictationEnabled:(char)arg0;
- (void)deleteAccountWithIdentifier:(NSString *)arg0;
- (void)setActiveAccountIdentifier:(NSString *)arg0;
- (void)_fetchPeerData:(NSData *)arg0;
- (void)setOutputVoice:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)setLanguage:(NSString *)arg0 withCompletion:(id /* block */)arg1;
- (id)_settingsServiceWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)_settingsService;
- (void)_setVoices:(id)arg0;
- (NSArray *)_voices;
- (id)_filterVoices:(id)arg0 forLanguage:(NSString *)arg1;
- (void)_updateVoicesWithCompletion:(id /* block */)arg0;
- (void)saveAccount:(NSObject *)arg0 setActive:(char)arg1;
- (void)killDaemon;
- (void)_updateVoicesSync;
- (void)getAvailableVoicesForRecognitionLanguage:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)_syncDataWithAnchorKeys:(NSArray *)arg0 forceReset:(char)arg1 completion:(id /* block */)arg2;
- (void)barrier;
- (NSArray *)accounts;
- (void)_clearConnection;

@end
