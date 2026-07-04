/* Runtime dump - UIKBMergeAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBMergeAction : NSObject <NSCopying>
{
    NSString * _remainingKeyName;
    NSString * _disappearingKeyName;
    NSArray * _orderedKeyList;
    UIKBGeometry * _factors;
}

@property (retain, nonatomic) NSString * remainingKeyName;
@property (retain, nonatomic) NSString * disappearingKeyName;
@property (retain, nonatomic) NSArray * orderedKeyList;
@property (retain, nonatomic) UIKBGeometry * factors;

+ (NSString *)mergeActionWithRemainingKeyName:(NSString *)arg0 disappearingKeyName:(NSString *)arg1 factors:(UIKBGeometry *)arg2;
+ (NSArray *)mergeActionWithOrderedKeyList:(NSArray *)arg0 factors:(UIKBGeometry *)arg1;

- (void)dealloc;
- (UIKBMergeAction *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)orderedKeyList;
- (NSString *)disappearingKeyName;
- (NSString *)remainingKeyName;
- (UIKBGeometry *)factors;
- (void)setRemainingKeyName:(NSString *)arg0;
- (void)setDisappearingKeyName:(NSString *)arg0;
- (void)setOrderedKeyList:(NSArray *)arg0;
- (void)setFactors:(UIKBGeometry *)arg0;

@end
