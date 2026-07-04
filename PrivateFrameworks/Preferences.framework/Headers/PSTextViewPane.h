/* Runtime dump - PSTextViewPane
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTextViewPane : PSEditingPane
{
    UITextView * _textView;
}

- (PSTextViewPane *)initWithFrame:(struct CGRect)arg0;
- (void)setText:(NSString *)arg0;
- (void)setPreferenceSpecifier:(id)arg0;
- (char)handlesDoneButton;

@end
