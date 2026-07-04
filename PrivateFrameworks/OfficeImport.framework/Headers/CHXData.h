/* Runtime dump - CHXData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHXData : NSObject

+ (void)readStrDataFromXmlStrDataElement:(struct _xmlNode *)arg0 data:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readStrDataFromXmlMultiLevelStrDataElement:(struct _xmlNode *)arg0 data:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readNumDataFromXmlNumDataElement:(struct _xmlNode *)arg0 data:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSObject *)chdDataFromXmlDataElement:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (BOOL)isHiddenDataElement:(struct _xmlNode *)arg0 data:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;

@end
