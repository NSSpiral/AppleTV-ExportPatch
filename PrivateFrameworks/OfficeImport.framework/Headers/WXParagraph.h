/* Runtime dump - WXParagraph
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXParagraph : NSObject

+ (void)readFrom:(struct _xmlNode *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readRunsTo:(id)arg0 state:(NSObject *)arg1;
+ (void)readRFrom:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 targetRun:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readSimpleFieldFrom:(struct _xmlNode *)arg0 paragraphNamespace:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readTrackingFrom:(struct _xmlNode *)arg0 paragraphNamespace:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readAnnotationFrom:(struct _xmlNode *)arg0 paragraphNamespace:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readFromString:(NSString *)arg0 to:(NSObject *)arg1;
+ (void)readRunsFrom:(struct _xmlNode *)arg0 paragraphNamespace:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 targetRun:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;

@end
