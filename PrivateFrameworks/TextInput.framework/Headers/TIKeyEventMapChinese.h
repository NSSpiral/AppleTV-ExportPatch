/* Runtime dump - TIKeyEventMapChinese
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMapChinese : TIKeyEventMap

+ (char)supportsSecureCoding;

- (NSString *)remapKeyWithString:(NSString *)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(unsigned int)arg2 keyboardState:(NSObject *)arg3;
- (char)isURLOrEmailKeyboardInKeyboardState:(NSObject *)arg0;

@end
