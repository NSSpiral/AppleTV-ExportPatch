/* Runtime dump - SCROBrailleHandler
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate>
{
    SCROBrailleDisplayManager * _brailleDisplayManager;
    char _wantsInputCallbacks;
    char _wantsDidDisplayCallbacks;
    struct ? _callbacks;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)handleDisplayModeChanged:(NSNumber *)arg0;
- (void)handleBrailleDidDisplay:(NSAttributedString *)arg0;
- (void)handleBrailleDidShowPreviousAnnouncement:(NSNumber *)arg0;
- (void)handleBrailleDidShowNextAnnouncement:(NSNumber *)arg0;
- (void)configurationDidChange;
- (void)handleBrailleTableFailedToLoad:(NSString *)arg0;
- (void)handleFailedToLoadBluetoothDevice:(NSString *)arg0;
- (void)handleBrailleDriverDidLoad;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleKeypress:(NSArray *)arg0;
- (void)handleBrailleKeyWillMemorize:(SCROBrailleKey *)arg0;
- (void)handleBrailleKeyMemorize:(SCROBrailleKey *)arg0;
- (void)handleBrailleDidPanLeft:(NSNumber *)arg0 elementToken:(NSNumber *)arg1 appToken:(id *)arg2;
- (void)handleBrailleDidPanRight:(NSNumber *)arg0 elementToken:(NSNumber *)arg1 appToken:(id *)arg2;
- (void)handlePlayBorderHitSound;
- (void)handlePlayCommandNotSupportedSound;
- (int)handlePerformActionForKey:(int)arg0 trusted:(char)arg1;
- (int)handleRegisterCallbackForKey:(int)arg0 trusted:(char)arg1;
- (int)handleSetValue:(id)arg0 forKey:(int)arg1 trusted:(char)arg2;
- (int)handleGetValue:(id *)arg0 forKey:(int)arg1 withObject:(NSObject *)arg2 trusted:(char)arg3;
- (SCROBrailleHandler *)initWithBrailleDisplayManager:(SCROBrailleDisplayManager *)arg0;

@end
