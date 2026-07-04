/* Runtime dump - EBString
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBString : NSObject

+ (NSString *)edStringFromXlString:(struct XlString *)arg0 edResources:(struct XlString)arg1;
+ (struct XlString *)xlStringFromEDString:(int)arg0 state:(short *)arg1;
+ (struct XlString *)xlStringWithIndex:(int)arg0;

@end
