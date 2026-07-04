/* Runtime dump - NSLocalizableString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLocalizableString : NSString
{
    NSString * _stringsFileKey;
    NSString * _developmentLanguageString;
}

@property (readonly, copy) NSString * stringsFileKey;
@property (readonly, copy) NSString * developmentLanguageString;

+ (NSLocalizableString *)localizableStringWithStringsFileKey:(NSString *)arg0 developmentLanguageString:(NSString *)arg1;

- (NSLocalizableString *)initWithStringsFileKey:(NSString *)arg0 developmentLanguageString:(NSString *)arg1;
- (NSString *)stringsFileKey;
- (void)setStringsFileKey:(NSString *)arg0;
- (NSString *)developmentLanguageString;
- (void)setDevelopmentLanguageString:(NSString *)arg0;
- (void)dealloc;
- (NSLocalizableString *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)length;
- (NSLocalizableString *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (NSLocalizableString *)awakeAfterUsingCoder:(NSCoder *)arg0;

@end
