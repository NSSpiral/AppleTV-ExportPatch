/* Runtime dump - UILocalizedIndexedCollation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILocalizedIndexedCollation : NSObject
{
    NSLocale * _locale;
    NSArray * _sectionTitles;
    NSArray * _sectionStartStrings;
    NSArray * _sectionIndexTitles;
    NSArray * _sectionIndexMapping;
    NSString * _transform;
    NSString * _firstSectionStartString;
    NSString * _lastSectionStartString;
    struct __CFStringTokenizer * _tokenizer;
}

@property (readonly, nonatomic) NSArray * sectionTitles;
@property (readonly, nonatomic) NSArray * sectionIndexTitles;

+ (NSDictionary *)collationWithDictionary:(NSDictionary *)arg0;
+ (UILocalizedIndexedCollation *)currentCollation;

- (void)dealloc;
- (UILocalizedIndexedCollation *)initWithDictionary:(NSDictionary *)arg0;
- (struct __CFStringTokenizer *)tokenizer;
- (NSString *)transformedCollationStringForString:(NSString *)arg0;
- (NSArray *)sectionTitles;
- (NSArray *)sectionIndexTitles;
- (int)sectionForSectionIndexTitleAtIndex:(int)arg0;
- (int)sectionForObject:(NSObject *)arg0 collationStringSelector:(SEL)arg1;
- (NSArray *)sortedArrayFromArray:(NSArray *)arg0 collationStringSelector:(SEL)arg1;

@end
