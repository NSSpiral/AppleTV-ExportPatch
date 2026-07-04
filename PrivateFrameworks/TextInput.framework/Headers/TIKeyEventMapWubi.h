/* Runtime dump - TIKeyEventMapWubi
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMapWubi : TIKeyEventMapChinese

+ (char)supportsSecureCoding;

- (NSString *)remapKeyWithString:(NSString *)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(unsigned int)arg2 keyboardState:(NSObject *)arg3;
- (id)wubiFromASCII:(id)arg0;
- (char)isNumericWubi:(id)arg0;

@end
