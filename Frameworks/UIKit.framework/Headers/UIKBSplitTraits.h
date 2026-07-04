/* Runtime dump - UIKBSplitTraits
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBSplitTraits : NSObject
{
    int _corners;
    struct CGRect _leftFrame;
    struct CGRect _rightFrame;
}

@property (readonly, nonatomic) struct CGRect leftFrame;
@property (readonly, nonatomic) struct CGRect rightFrame;
@property (readonly, nonatomic) int corners;

+ (NSObject *)traitsWithLeftFrame:(struct CGRect)arg0 rightFrame:(struct CGSize)arg1 corners:(int)arg2;

- (UIKBSplitTraits *)initWithLeftFrame:(struct CGRect)arg0 rightFrame:(struct CGSize)arg1 corners:(int)arg2;
- (struct CGRect)leftFrame;
- (struct CGRect)rightFrame;
- (int)corners;

@end
