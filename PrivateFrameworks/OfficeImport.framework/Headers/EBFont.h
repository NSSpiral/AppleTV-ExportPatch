/* Runtime dump - EBFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBFont : NSObject

+ (int)convertXlScriptEnumToED:(int)arg0;
+ (int)convertXlUnderlineEnumToED:(int)arg0;
+ (UIFont *)edFontFromXlFont:(struct XlFont *)arg0 edResources:(struct XlString *)arg1;
+ (UIFont *)edFontFromXlDXfFont:(struct XlDXfFont *)arg0 edResources:(int)arg1;
+ (int)convertEDScriptEnumToXl:(int)arg0;
+ (int)convertEDUnderlineEnumToXl:(int)arg0;

@end
