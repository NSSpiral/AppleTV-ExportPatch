/* Runtime dump - WDFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFont : NSObject <NSCopying>
{
    NSString * mName;
    NSMutableArray * mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)arg0;

- (void)dealloc;
- (WDFont *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned long)hash;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (WDFont *)copyWithZone:(struct _NSZone *)arg0;
- (WDFont *)initWithName:(NSString *)arg0;
- (void)addAlternateName:(NSString *)arg0;
- (void)setCharacterSet:(int)arg0;
- (NSString *)secondName;
- (NSArray *)alternateNames;
- (int)pitch;
- (void)setPitch:(int)arg0;
- (int)fontFamily;
- (void)setFontFamily:(int)arg0;
- (int)characterSet;

@end
