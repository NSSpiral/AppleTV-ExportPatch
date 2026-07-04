/* Runtime dump - TPPasscodeView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPasscodeView : UIView
{
    NSMutableString * _passcodeMutableString;
}

@property (readonly) NSString * passcodeString;
@property (retain) NSMutableString * passcodeMutableString;

- (TPPasscodeView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)deleteLastCharacter;
- (void)clear;
- (void)appendCharacter:(id)arg0;
- (NSString *)passcodeString;
- (void)setPasscodeMutableString:(NSMutableString *)arg0;
- (NSMutableString *)passcodeMutableString;

@end
