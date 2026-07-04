/* Runtime dump - PLTextView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTextView : UITextView
{
    UILabel * _placeholder;
    char _showingPlaceholder;
}

- (void)dealloc;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)setContentOffset:(struct CGPoint)arg0;
- (void)setPlaceholderText:(NSAttributedString *)arg0;
- (NSString *)_placeholder;
- (void)updatePlaceholder;

@end
