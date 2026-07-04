/* Runtime dump - UIKeyboardEmojiCategoryController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiCategoryController : NSObject
{
    int _currentCategory;
}

+ (Class)classForCategoryControl;

- (UIKeyboardEmojiCategoryController *)initWithCategoryControl:(BRControl *)arg0;
- (void)setCurrentCategory:(int)arg0;
- (int)sectionWithOffsetPercentage:(float)arg0;

@end
