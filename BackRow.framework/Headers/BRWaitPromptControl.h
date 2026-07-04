/* Runtime dump - BRWaitPromptControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRTextControl, BRWaitSpinnerControl;
@interface BRWaitPromptControl : BRControl
{
    BRWaitSpinnerControl * _spinner;
    BRTextControl * _prompt;
}

+ (NSDictionary *)themeAttributes;

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (char)accessibilityOutputsRange;
- (void)setPromptText:(NSString *)arg0;
- (NSString *)promptText;
- (void)dealloc;
- (BRWaitPromptControl *)init;
- (NSString *)accessibilityLabel;
- (BRTextControl *)prompt;
- (void)setPrompt:(BRTextControl *)arg0;
- (char)isAccessibilityElement;

@end
