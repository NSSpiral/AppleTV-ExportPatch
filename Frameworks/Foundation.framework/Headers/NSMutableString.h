/* Runtime dump - NSMutableString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableString : NSString

+ (void)initialize;
+ (NSMutableString *)allocWithZone:(struct _NSZone *)arg0;
+ (NSMutableString *)stringWithCapacity:(unsigned int)arg0;

- (void)tswp_replaceBreaksWithPlainTextVersions;
- (void)tsce_replaceCharactersInSet:(NSSet *)arg0 withString:(NSString *)arg1;
- (void)tsce_appendSpaces:(int)arg0;
- (void)tsce_appendWhitespace:(char *)arg0 startingIndex:(int *)arg1;
- (void)tsu_indentBy:(unsigned int)arg0;
- (void)tsu_appendCharacter:(unsigned short)arg0;
- (void)tsu_insertCharacter:(unsigned short)arg0 atIndex:(unsigned int)arg1;
- (void)tsu_appendSeparator:(id)arg0 format:(NSString *)arg1;
- (void)gqd_insertCharacter:(unsigned short)arg0 atIndex:(unsigned short)arg1;
- (char)replaceSubstr:(id)arg0 with:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceAllSubstr:(id)arg0 with:(id)arg1 escStr:(id)arg2;
- (void)replaceAllSubstr:(id)arg0 with:(id)arg1 escStr:(id)arg2 range:(struct _NSRange)arg3;
- (char)replaceSubstr:(id)arg0 with:(id)arg1;
- (void)replaceAllSubstr:(id)arg0 with:(id)arg1;
- (void)replaceAllSubstr:(id)arg0 with:(id)arg1 range:(struct _NSRange)arg2;
- (void)indentBy:(unsigned int)arg0;
- (void)appendCharacter:(unsigned short)arg0;
- (void)appendSeparator:(id)arg0 format:(NSString *)arg1;
- (void)insertCharacter:(unsigned short)arg0 atIndex:(unsigned int)arg1;
- (void)dd_appendSpaces:(unsigned int)arg0;
- (void)addMathIndicators;
- (void)appendPrettyObject:(NSObject *)arg0 withName:(NSString *)arg1 andIndent:(int)arg2;
- (void)appendPrettyInt:(int)arg0 withName:(NSString *)arg1 andIndent:(int)arg2;
- (void)appendPrettyBOOL:(char)arg0 withName:(NSString *)arg1 andIndent:(int)arg2;
- (void)replaceOccurrencesOfString:(NSString *)arg0 withString:(NSString *)arg1;
- (void)searchAndReplaceInString:(NSString *)arg0 withString:(NSString *)arg1;
- (void)standardizeWhitespace;
- (void)_removeCharactersFromSet:(struct __CFCharacterSet *)arg0;
- (void)_replaceOccurrencesOfCharacter:(unsigned long)arg0 withCharacter:(unsigned long)arg1;
- (void)_removeOccurrencesOfCharacter:(unsigned long)arg0;
- (void)replaceNewlinesWithSpaces;
- (void)_ICSStripControlChracters;
- (void)_ICSEscapePropertyValue;
- (void)_ICSEscapeParameterValue;
- (void)_ICSEscapeParameterQuotedValue;
- (void)_ICSRemoveCharactersFromSet:(NSSet *)arg0;
- (void)_ICSStringAppendingParameterName:(NSString *)arg0;
- (void)_ICSStringParameterName:(NSString *)arg0 value:(NSObject *)arg1;
- (void)appendCharacters:(unsigned short *)arg0 length:(unsigned short)arg1;
- (void)_cfAppendCString:(char *)arg0 length:(int)arg1;
- (void)_cfPad:(struct __CFString *)arg0 length:(unsigned int)arg1 padIndex:(unsigned int)arg2;
- (void)_cfTrim:(struct __CFString *)arg0;
- (void)_cfTrimWS;
- (void)_cfLowercase:(void *)arg0;
- (void)_cfUppercase:(void *)arg0;
- (void)_cfCapitalize:(void *)arg0;
- (void)_cfNormalize:(long)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withCharacters:(unsigned short *)arg1 length:(unsigned short)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withCString:(char *)arg1 length:(unsigned int)arg2;
- (void)_trimWithCharacterSet:(NSSet *)arg0;
- (unsigned int)_replaceOccurrencesOfRegularExpressionPattern:(NSObject *)arg0 withTemplate:(IKMenuBarTemplate *)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (NSMutableString *)initWithCapacity:(unsigned int)arg0;
- (void)appendString:(NSString *)arg0;
- (void)appendFormat:(NSString *)arg0;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange)arg0;
- (unsigned int)replaceOccurrencesOfString:(NSString *)arg0 withString:(NSString *)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (void)setString:(NSString *)arg0;
- (void)insertString:(NSString *)arg0 atIndex:(unsigned int)arg1;

@end
