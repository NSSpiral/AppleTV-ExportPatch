/* Runtime dump - EXPageSetup
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXPageSetup : NSObject

+ (void)initialize;
+ (int)edPageOrientationFromPageOrientationString:(NSString *)arg0;
+ (int)edPageOrderFromPageOrderString:(NSString *)arg0;
+ (NSObject *)edPageSetupFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edPageMarginsFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
