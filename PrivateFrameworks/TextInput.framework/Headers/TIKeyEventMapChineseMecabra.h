/* Runtime dump - TIKeyEventMapChineseMecabra
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyEventMapChineseMecabra : TIKeyEventMapChinese

+ (char)supportsSecureCoding;
+ (NSSet *)inlineNumbersAndPunctuationSet;

- (NSString *)remapKeyWithString:(NSString *)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(unsigned int)arg2 keyboardState:(NSObject *)arg3;

@end
