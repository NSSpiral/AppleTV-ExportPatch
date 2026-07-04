/* Runtime dump - CHXSeries
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXSeries : NSObject

+ (NSObject *)readFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)resolveSeriesStyle:(NSObject *)arg0 state:(NSObject *)arg1;
+ (NSObject *)chdSeriesFromXmlSeriesElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (Class)chxSeriesClassWithState:(NSObject *)arg0;

@end
