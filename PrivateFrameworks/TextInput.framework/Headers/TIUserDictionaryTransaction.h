/* Runtime dump - TIUserDictionaryTransaction
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding>
{
    TIUserDictionaryEntryValue * _valueToDelete;
    TIUserDictionaryEntryValue * _valueToInsert;
}

@property (retain, nonatomic) TIUserDictionaryEntryValue * valueToDelete;
@property (retain, nonatomic) TIUserDictionaryEntryValue * valueToInsert;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (TIUserDictionaryTransaction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (TIUserDictionaryEntryValue *)valueToDelete;
- (TIUserDictionaryEntryValue *)valueToInsert;
- (void)setValueToDelete:(TIUserDictionaryEntryValue *)arg0;
- (void)setValueToInsert:(TIUserDictionaryEntryValue *)arg0;

@end
