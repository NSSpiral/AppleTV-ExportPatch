/* Runtime dump - NSOrthography
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOrthography : NSObject <NSCopying, NSCoding>

@property (readonly, copy) NSString * dominantScript;
@property (readonly, copy) NSDictionary * languageMap;

+ (NSOrthography *)orthographyWithDominantScript:(NSString *)arg0 languageMap:(NSDictionary *)arg1;
+ (void)initialize;
+ (NSOrthography *)allocWithZone:(struct _NSZone *)arg0;

- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSOrthography *)initWithDominantScript:(NSString *)arg0 languageMap:(NSDictionary *)arg1;
- (unsigned int)orthographyFlags;
- (NSString *)dominantScript;
- (NSDictionary *)languageMap;
- (NSString *)dominantLanguage;
- (id)allScripts;
- (id)languagesForScript:(id)arg0;
- (id)dominantLanguageForScript:(id)arg0;
- (NSArray *)allLanguages;
- (NSOrthography *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSOrthography *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;

@end
