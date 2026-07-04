/* Runtime dump - CHXChartType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXChartType : NSObject

+ (int)chdGroupingFromXmlGroupingElement:(struct _xmlNode *)arg0;
+ (NSObject *)chdChartTypeFromXmlChartTypeElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdShapeTypeFromXmlShapeTypeElement:(struct _xmlNode *)arg0;
+ (Class)chxChartTypeClassWithXmlElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (CHXChartType *)stringWithGroupingEnum:(int)arg0;
+ (void)resolveStyle:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)prepareChartTypeForWriting:(id)arg0;

@end
