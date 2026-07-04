/* Runtime dump - TITextInputTraits
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding>
{
    id _mask;
}

@property (nonatomic) unsigned int autocapitalizationType;
@property (nonatomic) unsigned int autocorrectionType;
@property (nonatomic) unsigned int spellCheckingType;
@property (nonatomic) unsigned int keyboardType;
@property (nonatomic) unsigned int keyboardAppearance;
@property (nonatomic) unsigned int returnKeyType;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char secureTextEntry;

+ (NSArray *)traitsForUITextInputTraits:(NSArray *)arg0;
+ (unsigned int)translateToTextInputAutocapitalizationType:(int)arg0;
+ (unsigned int)translateToTextInputAutocorrectionType:(int)arg0;
+ (unsigned int)translateToTextInputSpellCheckingType:(int)arg0;
+ (unsigned int)translateToTextInputKeyboardType:(int)arg0;
+ (unsigned int)translateToTextInputKeyboardAppearance:(int)arg0;
+ (unsigned int)translateToTextInputReturnKeyType:(int)arg0;
+ (char)supportsSecureCoding;

- (TITextInputTraits *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TITextInputTraits *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)keyboardAppearance;
- (void)setSecureTextEntry:(char)arg0;
- (unsigned int)autocapitalizationType;
- (void)setAutocapitalizationType:(unsigned int)arg0;
- (unsigned int)autocorrectionType;
- (void)setAutocorrectionType:(unsigned int)arg0;
- (unsigned int)spellCheckingType;
- (void)setSpellCheckingType:(unsigned int)arg0;
- (unsigned int)keyboardType;
- (void)setKeyboardType:(unsigned int)arg0;
- (void)setKeyboardAppearance:(unsigned int)arg0;
- (unsigned int)returnKeyType;
- (void)setReturnKeyType:(unsigned int)arg0;
- (char)enablesReturnKeyAutomatically;
- (void)setEnablesReturnKeyAutomatically:(char)arg0;
- (char)secureTextEntry;

@end
