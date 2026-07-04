/* Runtime dump - GQHTextStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextStyle : NSObject

+ (void)mapStyle:(NSObject *)arg0 style:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)reduceFontSizeForSuperscriptedText:(NSString *)arg0 style:(NSObject *)arg1 state:(NSObject *)arg2;
+ (char)getDefaultLineHeight:(struct __CFString *)arg0 fontSize:(float)arg1 defLineHeight:(int *)arg2;
+ (void)mapStyle:(NSObject *)arg0 style:(NSObject *)arg1 state:(NSObject *)arg2 isSpan:(char)arg3;
+ (struct __CTFont *)createFontFromName:(struct __CFString *)arg0 size:(float)arg1;
+ (struct __CFString *)platformCreateCssFontFamilyStringFromFontName:(struct __CFString *)arg0;
+ (char)platformGetDefaultLineHeight:(struct __CFString *)arg0 fontSize:(float)arg1 defLineHeight:(int *)arg2;
+ (char *)name;

@end
