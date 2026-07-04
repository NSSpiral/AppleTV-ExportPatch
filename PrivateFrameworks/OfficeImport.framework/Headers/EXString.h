/* Runtime dump - EXString
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXString : NSObject

+ (NSObject *)readStringWithAsciiCodeFromXmlStringElement:(struct _xmlNode *)arg0;
+ (void)buildEDString:(NSString *)arg0 fromNode:(struct _xmlNode *)arg1 edFont:(struct _xmlNode *)arg2 keepWhitespace:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;
+ (void)parseStringWithAsciiCode:(id)arg0;
+ (NSObject *)edTextFromXmlStringElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edStringWithRunsFromXmlStringElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edStringWithRunsFromXmlDivElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)replaceEscapeAsciiCodes:(id)arg0;
+ (void)buildEDString:(NSString *)arg0 fromText:(NSString *)arg1 edFont:(UIFont *)arg2 keepWhitespace:(BOOL)arg3 state:(NSObject *)arg4;
+ (void)buildEDString:(NSString *)arg0 fromChildrenOfNode:(struct _xmlNode *)arg1 edFont:(struct _xmlNode *)arg2 keepWhitespace:(struct _xmlNode *)arg3 state:(struct _xmlNode *)arg4;
+ (EXString *)cleanupWhitespace:(id)arg0;
+ (NSString *)stringInEDString:(NSString *)arg0 start:(unsigned int)arg1 end:(unsigned int)arg2;
+ (NSString *)stringInEDString:(NSString *)arg0 forRunIndex:(unsigned int)arg1;

@end
