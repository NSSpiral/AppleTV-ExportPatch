/* Runtime dump - ATVPINController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol SettingsPINEntryViewDelegate;

@class SettingsPINEntryView;
@interface ATVPINController : BRViewController <SettingsPINEntryViewDelegate>
{
    id _pinEntryCompleteBlock;
    id _pinVerifiedByUserBlock;
    SettingsPINEntryView * _pinView;
}

@property (copy, nonatomic) id pinEntryCompleteBlock;
@property (copy, nonatomic) id pinVerifiedByUserBlock;
@property (retain, nonatomic) SettingsPINEntryView * pinView;

- (void)wasPushed;
- (void)pinEntryComplete:(NSString *)arg0;
- (void)pinVerifiedByUser;
- (void)pinFailedTryAgainWithTitle:(NSString *)arg0 prompt:(NSString *)arg1;
- (ATVPINController *)initWithNumDigits:(unsigned int)arg0 userEditable:(char)arg1 title:(NSString *)arg2 prompt:(NSString *)arg3 initialPINCode:(NSString *)arg4 hideDigits:(char)arg5;
- (void)setPinEntryCompleteBlock:(id /* block */)arg0;
- (void)setPinVerifiedByUserBlock:(id /* block */)arg0;
- (id /* block */)pinEntryCompleteBlock;
- (id /* block */)pinVerifiedByUserBlock;
- (void).cxx_destruct;
- (SettingsPINEntryView *)pinView;
- (void)setPinView:(SettingsPINEntryView *)arg0;

@end
