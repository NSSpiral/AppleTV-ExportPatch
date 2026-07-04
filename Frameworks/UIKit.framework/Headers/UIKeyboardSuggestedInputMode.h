/* Runtime dump - UIKeyboardSuggestedInputMode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSuggestedInputMode : UIKeyboardInputMode
{
    char enabled;
}

@property (nonatomic) char enabled;

- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (UIKeyboardSuggestedInputMode *)initWithIdentifier:(NSString *)arg0 enabled:(char)arg1;

@end
