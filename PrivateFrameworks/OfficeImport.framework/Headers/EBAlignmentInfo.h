/* Runtime dump - EBAlignmentInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBAlignmentInfo : NSObject

+ (int)convertXlHorizAlignEnumToED:(int)arg0;
+ (int)convertXlVertAlignEnumToED:(int)arg0;
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)arg0;
+ (int)convertEDVerticalAlignmentEnumToXl:(int)arg0;
+ (EBAlignmentInfo *)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign *)arg0;
+ (void)writeAlignmentInfo:(NSDictionary *)arg0 toXlXf:(struct XlXf *)arg1;
+ (struct XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(NSDictionary *)arg0;
+ (void)writeAlignmentInfo:(NSDictionary *)arg0 toXlGraphicsInfo:(struct XlGraphicsInfo *)arg1;
+ (EBAlignmentInfo *)edAlignmentInfoFromXlXf:(struct XlXf *)arg0;
+ (NSDictionary *)edAlignmentInfoFromXlGraphicsInfo:(struct XlGraphicsInfo *)arg0;

@end
