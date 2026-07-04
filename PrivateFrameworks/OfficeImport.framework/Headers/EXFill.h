/* Runtime dump - EXFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXFill : NSObject

+ (void)initialize;
+ (NSObject *)edFillFromXmlFillElement:(struct _xmlNode *)arg0 differentialFill:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)edPatternFillFromXmlElement:(struct _xmlNode *)arg0 differentialFill:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)edGradientFillFromXmlElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (int)edPatternTypeFromXmlPatternTypeString:(NSString *)arg0;
+ (int)edGradientTypeFromXmlGradientTypeString:(NSString *)arg0 state:(NSObject *)arg1;
+ (NSObject *)edStopFromXmlGradientElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edFillFromXmlFillElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
