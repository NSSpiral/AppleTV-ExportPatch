/* Runtime dump - SCROBrailleClient
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleClient : NSObject
{
    SCROConnection * _connection;
    NSLock * _lock;
    id _delegate;
    NSMutableAttributedString * _mainStringPending;
    NSMutableAttributedString * _mainStringCache;
    NSData * _aggregatedStatusPending;
    NSData * _aggregatedStatusCache;
    SCRCTargetSelectorTimer * _deathTimer;
    char _isReady;
    char _needsDisplay;
    char _keepConnectionAlive;
    char _delegateWantsKeypresses;
    char _wantsDisconnectMessage;
    char _wantsReconnectMessage;
    char _wantsDisplayConfigurationChanged;
    char _displayDescriptorCallbackEnabled;
}

@property (nonatomic) char inputEightDotBraille;
@property (nonatomic) int inputContractionMode;

+ (NSString *)statusAttributeDotText;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (SCROBrailleClient *)init;
- (NSObject *)delegate;
- (void)display;
- (char)needsDisplay;
- (void)displayIfNeeded;
- (int)displayMode;
- (void)_registerDelegate;
- (SCROBrailleClient *)initWithDelegate:(NSObject *)arg0;
- (char)isConnected;
- (void)_deathTimerHandler;
- (NSURLConnection *)_lazyConnection;
- (NSString *)_getWorkingString;
- (void)_refreshAfterReconnect;
- (void)setDisplayDescriptorCallbackEnabled:(char)arg0;
- (void)_setupDeviceDetection;
- (void)_deviceConnected:(id)arg0;
- (void)setKeepConnectionAlive:(char)arg0;
- (char)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(NSString *)arg0;
- (void)removeDisplayWithBluetoothDeviceAddress:(NSString *)arg0;
- (void)setTableIdentifier:(NSString *)arg0;
- (NSString *)pendingMainAttributedString;
- (void)setAnnouncementString:(NSString *)arg0;
- (void)setAlertString:(NSString *)arg0 timeout:(double)arg1 priority:(int)arg2;
- (id)pendingAggregatedStatus;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg0;
- (char)displayDescriptorCallbackEnabled;
- (NSArray *)tokenArray;
- (void)setSelection:(struct _NSRange)arg0 forToken:(int)arg1;
- (void)selectAllForToken:(int)arg0;
- (void)unselectAllForToken:(int)arg0;
- (void)setFocused:(char)arg0 forToken:(int)arg1;
- (int)contractionMode;
- (void)setMasterStatusCellIndex:(long)arg0;
- (void)setAggregatedStatus:(id)arg0;
- (id)aggregatedStatus;
- (void)setVirtualStatusAlignment:(int)arg0;
- (int)virtualStatusAlignment;
- (long)masterStatusCellIndex;
- (void)simulateKeypress:(id)arg0;
- (char)automaticBrailleTranslationEnabled;
- (void)setAutomaticBrailleTranslationEnabled:(char)arg0;
- (int)inputContractionMode;
- (void)setInputContractionMode:(int)arg0;
- (NSDictionary *)driverConfiguration;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(char)arg0;
- (char)alwaysUsesNemethCodeForTechnicalText;
- (char)isConfigured;
- (void)setPrimaryBrailleDisplay:(long)arg0;
- (NSString *)mainAttributedString;
- (void)setMainAttributedString:(NSString *)arg0;
- (void)panDisplayLeft:(long)arg0;
- (void)panDisplayRight:(long)arg0;
- (void)setAnnouncementsDisplayMode;
- (void)exitCurrentDisplayMode;
- (NSString *)tableIdentifier;
- (void)setContractionMode:(int)arg0;
- (char)showEightDotBraille;
- (void)setShowEightDotBraille:(char)arg0;
- (char)inputEightDotBraille;
- (void)setInputEightDotBraille:(char)arg0;
- (void)setShowDotsSevenAndEight:(char)arg0;
- (char)showDotsSevenAndEight;
- (void)showPreviousAnnouncement;
- (void)showNextAnnouncement;
- (int)tokenForRouterIndex:(int)arg0 location:(int *)arg1 appToken:(id *)arg2 forDisplayWithToken:(long)arg3;
- (void)setPrepareToMemorizeNextKey:(char)arg0 immediate:(char)arg1 forDisplayWithToken:(long)arg2;
- (void)handleCallback:(id /* block */)arg0;

@end
