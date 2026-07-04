/* Runtime dump - NSSimpleOrthography
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleOrthography : NSOrthography
{
    unsigned int _orthographyFlags;
}

+ (NSSimpleOrthography *)orthographyWithFlags:(unsigned int)arg0;
+ (void)initialize;

- (NSSimpleOrthography *)initWithDominantScript:(NSString *)arg0 languageMap:(NSDictionary *)arg1;
- (unsigned int)orthographyFlags;
- (NSString *)dominantScript;
- (NSDictionary *)languageMap;
- (NSString *)dominantLanguage;
- (id)allScripts;
- (id)languagesForScript:(id)arg0;
- (id)dominantLanguageForScript:(id)arg0;
- (NSArray *)allLanguages;
- (NSSimpleOrthography *)initWithFlags:(unsigned int)arg0;
- (NSSimpleOrthography *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (Class)classForCoder;

@end
