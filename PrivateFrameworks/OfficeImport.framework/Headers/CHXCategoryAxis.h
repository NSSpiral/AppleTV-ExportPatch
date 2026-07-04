/* Runtime dump - CHXCategoryAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXCategoryAxis : NSObject

+ (NSObject *)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdLabelAlignFromXmlLabelAlignElement:(struct _xmlNode *)arg0;
+ (CHXCategoryAxis *)stringFromLabelAlignment:(int)arg0;

@end
