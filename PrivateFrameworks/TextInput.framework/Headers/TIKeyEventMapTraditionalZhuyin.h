/* Runtime dump - TIKeyEventMapTraditionalZhuyin
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMapTraditionalZhuyin : TIKeyEventMapChineseMecabra

+ (char)supportsSecureCoding;

- (NSString *)remapKeyWithString:(NSString *)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(unsigned int)arg2 keyboardState:(NSObject *)arg3;
- (char)isZhuyinCharacterBeforeInsertionPointOfKeyboardState:(NSObject *)arg0;

@end
