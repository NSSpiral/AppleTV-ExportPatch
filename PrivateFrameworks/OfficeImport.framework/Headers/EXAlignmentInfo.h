/* Runtime dump - EXAlignmentInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXAlignmentInfo : NSObject

+ (void)initialize;
+ (int)edHorizontalAlignFromHorizontalAlignString:(NSString *)arg0;
+ (int)edVerticalAlignFromVerticalAlignString:(NSString *)arg0;
+ (NSObject *)edAlignmentInfoFromXmlAlignmentInfoElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edAlignmentInfoFromVmlAlignmentInfoElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
