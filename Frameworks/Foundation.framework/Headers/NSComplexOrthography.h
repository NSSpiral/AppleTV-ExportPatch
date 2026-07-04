/* Runtime dump - NSComplexOrthography
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComplexOrthography : NSOrthography
{
    NSString * _dominantScript;
    NSDictionary * _languageMap;
    unsigned int _orthographyFlags;
}

+ (void)initialize;

- (NSComplexOrthography *)initWithDominantScript:(NSString *)arg0 languageMap:(NSDictionary *)arg1;
- (unsigned int)orthographyFlags;
- (NSString *)dominantScript;
- (NSDictionary *)languageMap;
- (void)dealloc;

@end
