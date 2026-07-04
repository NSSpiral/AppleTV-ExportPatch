/* Runtime dump - SBUIControlCenterLabel
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIControlCenterLabel : UILabel <SBUIControlCenterControl>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (SBUIControlCenterLabel *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setNumberOfLines:(int)arg0;
- (void)setAttributedText:(NSAttributedString *)arg0;
- (void)setEnabled:(char)arg0;
- (void)setFont:(UIFont *)arg0;
- (void)setText:(NSString *)arg0;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (void)setHighlighted:(char)arg0;
- (int)_currentState;
- (void)_updateAttributedText;
- (void)controlAppearanceDidChangeForState:(int)arg0;
- (void)controlConfigurationDidChangeForState:(int)arg0;

@end
