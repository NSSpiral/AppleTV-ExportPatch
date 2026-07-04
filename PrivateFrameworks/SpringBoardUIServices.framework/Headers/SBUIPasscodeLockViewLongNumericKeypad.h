/* Runtime dump - SBUIPasscodeLockViewLongNumericKeypad
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewLongNumericKeypad : SBUIPasscodeLockViewWithKeypad

- (void)updateStatusText:(NSString *)arg0 subtitle:(NSString *)arg1 animated:(char)arg2;
- (SBUIPasscodeLockViewLongNumericKeypad *)initWithLightStyle:(char)arg0;
- (char)_includesStatusView;
- (id)_newEntryField;
- (void)_setHasInput:(char)arg0;
- (float)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (char)_showsPromptLabelOnEntryField;
- (id)_longNumericEntryField;

@end
