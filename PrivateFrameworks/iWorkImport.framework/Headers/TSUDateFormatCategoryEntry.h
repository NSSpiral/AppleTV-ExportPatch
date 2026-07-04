/* Runtime dump - TSUDateFormatCategoryEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short mSeparator;
    struct __CFArray * mFormatters;
    NSMutableSet * mFormatStrings;
}

- (NSArray *)formatStrings;
- (void)dealloc;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg0 forceAllowAMPM:(char)arg1 successfulFormatString:(struct __CFString * *)arg2 perfect:(struct __CFString *)arg3;
- (TSUDateFormatCategoryEntry *)initWithSeparator:(unsigned short)arg0;
- (void)addFormat:(NSString *)arg0 locale:(struct __CFLocale *)arg1;
- (unsigned short)separator;

@end
