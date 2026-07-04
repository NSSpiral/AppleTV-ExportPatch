/* Runtime dump - TCEnumerationMap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCEnumerationMap : NSObject
{
    struct __CFDictionary * m_valueToString;
    struct __CFDictionary * m_stringToValue;
    char m_caseSensitive;
}

- (void)dealloc;
- (TCEnumerationMap *)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(struct TCEnumerationStruct)arg1 caseSensitive:(int)arg2;
- (TCEnumerationMap *)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(struct TCEnumerationStruct)arg1;
- (long)valueForString:(NSString *)arg0;
- (NSString *)stringForValue:(int)arg0;

@end
