/* Runtime dump - OITSUDateFormatCategoryEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatCategoryEntry : NSObject
{
    unsigned short mSeparator;
    struct __CFArray * mFormatters;
    NSMutableSet * mFormatStrings;
}

- (void)dealloc;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg0 forceAllowAMPM:(char)arg1 successfulFormatString:(struct __CFString * *)arg2 perfect:(struct __CFString *)arg3;
- (OITSUDateFormatCategoryEntry *)initWithSeparator:(unsigned short)arg0;
- (void)addFormat:(NSString *)arg0 locale:(struct __CFLocale *)arg1;
- (unsigned short)separator;

@end
