/* Runtime dump - UITextReplacement
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacement : NSObject
{
    UITextRange * _range;
    NSString * _originalText;
    NSString * _replacementText;
    NSString * _menuTitle;
    unsigned int _usageTrackingMask;
}

@property (readonly, nonatomic) UITextRange * range;
@property (readonly, nonatomic) NSString * originalText;
@property (readonly, nonatomic) NSString * replacementText;
@property (readonly, nonatomic) NSString * menuTitle;
@property (nonatomic) unsigned int usageTrackingMask;

+ (NSObject *)replacementWithRange:(UITextRange *)arg0 original:(id)arg1 replacement:(NSString *)arg2 menuTitle:(NSString *)arg3;

- (void)dealloc;
- (NSString *)replacementText;
- (NSString *)originalText;
- (UITextRange *)range;
- (unsigned int)usageTrackingMask;
- (void)setUsageTrackingMask:(unsigned int)arg0;
- (NSString *)menuTitle;

@end
