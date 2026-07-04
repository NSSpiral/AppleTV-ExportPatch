/* Runtime dump - CHXString
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXString : NSObject

+ (void)readFromXmlTxElement:(struct _xmlNode *)arg0 formula:(struct _xmlNode *)arg1 lastCached:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (NSObject *)chdFormulaFromXmlStrRefElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edStringFromXmlStrCacheElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (NSObject *)edStringFromXmlRichElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;

@end
