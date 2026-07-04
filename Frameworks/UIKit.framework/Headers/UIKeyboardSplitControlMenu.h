/* Runtime dump - UIKeyboardSplitControlMenu
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
{
    NSMutableArray * m_menuOptions;
    struct CGSize m_preferredSize;
    id _finishSplitTransitionBlock;
}

@property (copy, nonatomic) id finishSplitTransitionBlock;

+ (UIKeyboardSplitControlMenu *)sharedInstance;
+ (UIKeyboardSplitControlMenu *)activeInstance;

- (UIKeyboardSplitControlMenu *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setSplitAndUndocked:(char)arg0;
- (int)numberOfItems;
- (void)didFinishSplitTransition;
- (struct CGSize)preferredSize;
- (int)defaultSelectedIndex;
- (void)didSelectItemAtIndex:(int)arg0;
- (NSObject *)titleForItemAtIndex:(int)arg0;
- (void)setFinishSplitTransitionBlock:(id /* block */)arg0;
- (id /* block */)finishSplitTransitionBlock;

@end
