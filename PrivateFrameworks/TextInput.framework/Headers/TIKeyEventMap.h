/* Runtime dump - TIKeyEventMap
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMap : NSObject <NSSecureCoding>

+ (char)supportsSecureCoding;

- (TIKeyEventMap *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)remapKeyWithString:(NSString *)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(unsigned int)arg2 keyboardState:(NSObject *)arg3;

@end
