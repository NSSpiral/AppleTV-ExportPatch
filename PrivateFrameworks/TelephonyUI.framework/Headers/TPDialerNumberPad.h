/* Runtime dump - TPDialerNumberPad
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>
{
    char _playsSounds;
    <TPDialerKeypadDelegate> * _delegate;
    TPDialerSoundController * _soundController;
}

@property (nonatomic) char playsSounds;
@property <TPDialerKeypadDelegate> * delegate;
@property (retain) TPDialerSoundController * soundController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TPDialerNumberPad *)dialerNumberPadFullCharacters;
+ (TPDialerNumberPad *)dialerNumberPadNumericCharacters;

- (void)buttonDown:(id)arg0;
- (void)buttonUp:(id)arg0;
- (void)dealloc;
- (void)setDelegate:(<TPDialerKeypadDelegate> *)arg0;
- (<TPDialerKeypadDelegate> *)delegate;
- (void)buttonTapped:(id)arg0;
- (void)buttonLongPressed:(id)arg0;
- (void)setPlaysSounds:(char)arg0;
- (char)supportsHardPause;
- (void)setSupportsHardPause:(char)arg0;
- (void)highlightKeyAtIndex:(int)arg0;
- (int)indexForHighlightedKey;
- (TPDialerSoundController *)soundController;
- (void)setSoundController:(TPDialerSoundController *)arg0;
- (char)playsSounds;

@end
