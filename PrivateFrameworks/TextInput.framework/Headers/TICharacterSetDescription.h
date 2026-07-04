/* Runtime dump - TICharacterSetDescription
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSCharacterSet * _characterSet;
    char _inverted;
    long _baseIdentifier;
    NSString * _charactersAddedToBase;
}

@property (readonly, nonatomic) NSCharacterSet * characterSet;
@property (readonly, nonatomic) long baseIdentifier;
@property (copy, nonatomic) NSString * charactersAddedToBase;
@property (readonly, nonatomic) char inverted;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TICharacterSetDescription *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TICharacterSetDescription *)copyWithZone:(struct _NSZone *)arg0;
- (TICharacterSetDescription *)awakeAfterUsingCoder:(NSCoder *)arg0;
- (TICharacterSetDescription *)initWithBase:(long)arg0 additionalCharacters:(id)arg1 inverted:(char)arg2;
- (long)baseIdentifier;
- (char)inverted;
- (NSString *)charactersAddedToBase;
- (NSString *)newCharacterSetFromDescription;
- (TICharacterSetDescription *)initWithBaseCharacterSet:(long)arg0;
- (TICharacterSetDescription *)initWithCharactersInString:(NSString *)arg0;
- (NSString *)invertedSetDescription;
- (void)clearCachedCharacterSet;
- (void)setCharactersAddedToBase:(NSString *)arg0;
- (NSCharacterSet *)characterSet;

@end
