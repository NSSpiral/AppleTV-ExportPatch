/* Runtime dump - TCEnumerationMultiMap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCEnumerationMultiMap : NSObject
{
    struct __CFDictionary * m_valueToString;
    struct __CFDictionary * m_stringToValue;
    char m_caseSensitive;
}

- (void)dealloc;
- (TCEnumerationMultiMap *)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(struct TCEnumerationStruct)arg1 caseSensitive:(int)arg2;
- (TCEnumerationMultiMap *)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(struct TCEnumerationStruct)arg1;
- (long)valueForString:(NSString *)arg0;
- (NSString *)stringForValue:(int)arg0;

@end
