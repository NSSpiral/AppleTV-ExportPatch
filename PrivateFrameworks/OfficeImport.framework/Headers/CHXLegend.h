/* Runtime dump - CHXLegend
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXLegend : NSObject

+ (NSObject *)chdLegendFromXmlLegendElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)chdLegendPositionFromXmlLegendPositionElement:(struct _xmlNode *)arg0;
+ (void)setDefaultLegendBounds:(id)arg0 legendPosition:(int)arg1;
+ (NSObject *)chdLegendEntryFromXmlLegendEntryElement:(struct _xmlNode *)arg0 defaultFont:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end
