/* Runtime dump - TCXmlEnumMap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCXmlEnumMap : NSObject
{
    struct __CFDictionary * mNameToValueMap;
}

- (void)dealloc;
- (char)readFromNode:(struct _xmlNode *)arg0 ns:(struct _xmlNode *)arg1 name:(struct _xmlNode *)arg2 value:(struct _xmlNode *)arg3;
- (TCXmlEnumMap *)initWithDescriptions:(struct TCXmlEnumDescription *)arg0;
- (long)readFromNode:(struct _xmlNode *)arg0 ns:(struct _xmlNode *)arg1 name:(struct _xmlNode *)arg2;
- (long)readFromNode:(struct _xmlNode *)arg0 ns:(struct _xmlNode *)arg1 name:(struct _xmlNode *)arg2 def:(struct _xmlNode *)arg3;

@end
