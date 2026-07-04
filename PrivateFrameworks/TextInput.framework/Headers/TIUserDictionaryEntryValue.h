/* Runtime dump - TIUserDictionaryEntryValue
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry>
{
    NSString * _phrase;
    NSString * _shortcut;
    NSNumber * _timestamp;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * phrase;
@property (copy, nonatomic) NSString * shortcut;
@property (retain, nonatomic) NSNumber * timestamp;

+ (char)supportsSecureCoding;
+ (TIUserDictionaryEntryValue *)valueWithEntry:(struct archive_entry *)arg0;

- (void)dealloc;
- (TIUserDictionaryEntryValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSNumber *)timestamp;
- (void)setTimestamp:(NSNumber *)arg0;
- (NSString *)phrase;
- (void)setPhrase:(NSString *)arg0;
- (NSString *)shortcut;
- (void)setShortcut:(NSString *)arg0;
- (char)matchesEntry:(id)arg0;
- (id)shortcutForSorting;

@end
