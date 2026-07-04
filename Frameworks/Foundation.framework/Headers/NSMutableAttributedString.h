/* Runtime dump - NSMutableAttributedString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString

+ (NSMutableAttributedString *)allocWithZone:(struct _NSZone *)arg0;

- (void)dd_offsetResultsBy:(int)arg0;
- (void)dd_chopResults;
- (void)dd_appendAttributedString:(NSString *)arg0;
- (void)appendString:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)scrcAppendFormat:(NSString *)arg0;
- (void)mf_addAttribute:(NSObject *)arg0 value:(NSObject *)arg1;
- (void)mf_removeAttribute:(NSObject *)arg0;
- (void)mf_setString:(NSString *)arg0;
- (void)appendString:(NSString *)arg0 withAttributes:(NSDictionary *)arg1;
- (void)_ui_restoreOriginalFontAttributes;
- (char)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (char)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(char)arg0;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange)arg0;
- (void)fixFontAttributeInRange:(struct _NSRange)arg0;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange)arg0;
- (void)fixAttachmentAttributeInRange:(struct _NSRange)arg0;
- (void)_fixGlyphInfo:(NSDictionary *)arg0 inRange:(struct _NSRange)arg1;
- (void)_changeIntAttribute:(NSObject *)arg0 by:(int)arg1 range:(struct _NSRange)arg2;
- (char)readFromURL:(NSURL *)arg0 options:(NSDictionary *)arg1 documentAttributes:(id *)arg2 error:(id *)arg3;
- (char)readFromData:(NSData *)arg0 options:(NSDictionary *)arg1 documentAttributes:(id *)arg2 error:(id *)arg3;
- (void)setBaseWritingDirection:(int)arg0 range:(struct _NSRange)arg1;
- (struct _NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg0;
- (struct _NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg0;
- (void)fixAttributesInRange:(struct _NSRange)arg0;
- (void)setAlignment:(int)arg0 range:(struct _NSRange)arg1;
- (void)superscriptRange:(struct _NSRange)arg0;
- (void)subscriptRange:(struct _NSRange)arg0;
- (void)unscriptRange:(struct _NSRange)arg0;
- (char)readFromFileURL:(NSURL *)arg0 options:(NSDictionary *)arg1 documentAttributes:(id *)arg2 error:(id *)arg3;
- (char)readFromURL:(NSURL *)arg0 options:(NSDictionary *)arg1 documentAttributes:(id *)arg2;
- (char)readFromData:(NSData *)arg0 options:(NSDictionary *)arg1 documentAttributes:(id *)arg2;
- (void)convertWritingDirectionToBidiControlCharacters;
- (void)trimWhitespace;
- (void)replaceNewlinesWithSpaces;
- (void)replaceAttribute:(NSObject *)arg0 value:(NSObject *)arg1 withValue:(NSValue *)arg2;
- (void)removeCharactersWithAttribute:(NSObject *)arg0;
- (void)insertAttributedString:(NSString *)arg0 atIndex:(unsigned int)arg1;
- (void)addAttributesWeakly:(id)arg0 range:(struct _NSRange)arg1;
- (void)deleteCharactersInRange:(struct _NSRange)arg0;
- (void)addAttribute:(struct __CFString *)arg0 value:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (void)removeAttribute:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (NSMutableString *)mutableString;
- (void)beginEditing;
- (void)endEditing;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (void)setAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (void)addAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (void)appendAttributedString:(NSString *)arg0;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withAttributedString:(NSAttributedString *)arg1;

@end
