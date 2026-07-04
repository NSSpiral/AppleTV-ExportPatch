/* Runtime dump - OITSUDateFormatCategory
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateFormatCategory : NSObject
{
    struct __CFDateFormatter * mInitialFormatter;
    NSMutableArray * mEntries;
}

- (void)dealloc;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg0 forceAllowAMPM:(char)arg1 successfulFormatString:(struct __CFString * *)arg2 perfect:(struct __CFString *)arg3;
- (OITSUDateFormatCategory *)initWithInitialPattern:(char)arg0 locale:(struct __CFLocale *)arg1;
- (void)addSeparator:(unsigned short)arg0 format:(NSString *)arg1 locale:(struct __CFLocale *)arg2;
- (NSString *)entryForSeparator:(unsigned short)arg0;

@end
