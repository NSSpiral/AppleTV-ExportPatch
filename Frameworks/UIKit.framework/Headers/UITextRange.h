/* Runtime dump - UITextRange
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextRange : NSObject

@property (readonly, nonatomic) char isCaret;
@property (readonly, nonatomic) char isRanged;
@property (readonly, nonatomic) UITextRangeImpl * isImpl;
@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) UITextPosition * start;
@property (readonly, nonatomic) UITextPosition * end;

- (char)isEmpty;
- (UITextPosition *)start;
- (UITextPosition *)end;
- (char)_isRanged;
- (char)_isCaret;
- (UITextRangeImpl *)_isImpl;

@end
