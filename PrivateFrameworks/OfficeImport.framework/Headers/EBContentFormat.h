/* Runtime dump - EBContentFormat
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBContentFormat : NSObject

+ (NSString *)edContentFormatFromXlFormat:(struct XlFormat *)arg0 edResources:(struct XlString *)arg1;
+ (EBContentFormat *)edContentFormatFromXlDXfUserFmt:(struct XlDXfUserFmt *)arg0 edResources:(NSArray *)arg1;

@end
