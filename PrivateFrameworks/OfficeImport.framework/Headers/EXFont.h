/* Runtime dump - EXFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXFont : NSObject

+ (void)initialize;
+ (int)edUnderlineFromXmlUnderlineElement:(struct _xmlNode *)arg0;
+ (int)edScriptFromXmlVertAlignElement:(struct _xmlNode *)arg0;
+ (NSObject *)edFontFromXmlFontElement:(struct _xmlNode *)arg0 inConditionalFormat:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end
