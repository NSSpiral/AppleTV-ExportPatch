/* Runtime dump - UIKBKeyInterval
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyInterval : NSObject
{
    UIKBTree * _key;
    double _interval;
}

@property (retain, nonatomic) UIKBTree * key;
@property (nonatomic) double interval;

- (void)dealloc;
- (UIKBTree *)key;
- (void)setKey:(UIKBTree *)arg0;
- (void)setInterval:(double)arg0;
- (UIKBKeyInterval *)initWithKey:(UIKBTree *)arg0 interval:(double)arg1;
- (double)interval;

@end
