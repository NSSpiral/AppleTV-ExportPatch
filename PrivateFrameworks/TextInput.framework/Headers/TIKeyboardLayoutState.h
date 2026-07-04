/* Runtime dump - TIKeyboardLayoutState
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>
{
    char _hasCandidateKey;
    char _hasAccentKey;
    char _canMultitap;
    char _isAlphabeticPlane;
    char _interfaceIdiomIsPad;
    NSString * _inputMode;
    NSString * _layoutTag;
}

@property (copy, nonatomic) NSString * inputMode;
@property (nonatomic) char hasCandidateKey;
@property (nonatomic) char hasAccentKey;
@property (nonatomic) char canMultitap;
@property (nonatomic) char isAlphabeticPlane;
@property (copy, nonatomic) NSString * layoutTag;
@property (nonatomic) char interfaceIdiomIsPad;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIKeyboardLayoutState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TIKeyboardLayoutState *)copyWithZone:(struct _NSZone *)arg0;
- (void)setInputMode:(NSString *)arg0;
- (void)setHasCandidateKey:(char)arg0;
- (char)hasAccentKey;
- (void)setHasAccentKey:(char)arg0;
- (char)canMultitap;
- (void)setCanMultitap:(char)arg0;
- (char)isAlphabeticPlane;
- (void)setIsAlphabeticPlane:(char)arg0;
- (NSString *)layoutTag;
- (void)setLayoutTag:(NSString *)arg0;
- (void)setInterfaceIdiomIsPad:(char)arg0;
- (NSString *)inputMode;
- (char)hasCandidateKey;
- (char)interfaceIdiomIsPad;

@end
