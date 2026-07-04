/* Runtime dump - CHXAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXAxis : NSObject

+ (Class)chxAxisClassWithXmlAxisElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readScalingFromXmlScalingElement:(struct _xmlNode *)arg0 axis:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (int)chdAxisPositionFromXmlAxisElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdTickMarkFromXmlTickMarkElement:(struct _xmlNode *)arg0;
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(struct _xmlNode *)arg0;
+ (int)chdCrossesFromXmlAxisElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (Class)chxAxisClassWithChdAxis:(id)arg0;
+ (NSObject *)stringWithAxisPosition:(int)arg0;
+ (NSObject *)stringWithTickMarkType:(int)arg0;
+ (NSObject *)stringWithTickLabelPosition:(int)arg0;
+ (CHXAxis *)stringWithCrosses:(int)arg0;

@end
