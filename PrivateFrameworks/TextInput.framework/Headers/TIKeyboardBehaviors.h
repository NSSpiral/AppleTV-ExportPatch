/* Runtime dump - TIKeyboardBehaviors
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardBehaviors : NSObject <NSCopying, NSSecureCoding>

+ (char)supportsSecureCoding;

- (TIKeyboardBehaviors *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TIKeyboardBehaviors *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)keyBehaviorsForState:(NSObject *)arg0;

@end
