/* Runtime dump - UITextInputMode
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInputMode : NSObject <NSSecureCoding>

@property (readonly, retain, nonatomic) NSString * primaryLanguage;

+ (char)supportsSecureCoding;
+ (UITextInputMode *)currentInputMode;
+ (NSArray *)activeInputModes;

- (UITextInputMode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)primaryLanguage;

@end
