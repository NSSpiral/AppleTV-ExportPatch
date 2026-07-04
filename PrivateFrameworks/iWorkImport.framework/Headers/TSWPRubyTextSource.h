/* Runtime dump - TSWPRubyTextSource
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRubyTextSource : NSObject <TSWPTextSource>
{
    struct vector<unsigned int, std::__1::allocator<unsigned int> > _spaceCharIndexes;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > _bidiCharIndexes;
    struct vector<bool, std::__1::allocator<bool> > _bidiDirectionMarkIsRTLVector;
    <TSWPTextSource> * _source;
    TSWPRangeMap * _rangeMap;
    unsigned int _length;
    unsigned int _storageLength;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)characterStyleAtCharIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (NSObject *)paragraphStyleAtCharIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (NSObject *)attachmentAtCharIndex:(unsigned int)arg0;
- (unsigned int)charIndexMappedToStorage:(unsigned int)arg0;
- (unsigned int)charIndexMappedFromStorage:(unsigned int)arg0;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg0;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg0;
- (TSWPRubyTextSource *)initWithSource:(<TSWPTextSource> *)arg0 subRange:(struct _NSRange)arg1;
- (struct _NSRange)wordAtCharIndex:(unsigned int)arg0 includePreviousWord:(char)arg1;
- (NSObject *)attachmentOrFootnoteAtCharIndex:(unsigned int)arg0;
- (char)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned int)arg0;
- (NSObject *)smartFieldAtCharIndex:(unsigned int)arg0 attributeKind:(int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)smartFieldsWithAttributeKind:(int)arg0 intersectingRange:(struct _NSRange)arg1;
- (char)hasColumnBreakAtCharIndex:(unsigned int)arg0;
- (void)attributesAtCharIndex:(unsigned int)arg0 attributesOfInterest:(id)arg1 attributesTable:(char)arg2 effectiveRange:(struct _NSRange *)arg3;
- (NSObject *)footnoteReferenceAtCharIndex:(unsigned int)arg0;
- (char)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned int)arg0;
- (long)hyphenationLocationBeforeIndex:(long)arg0 inRange:(struct _NSRange)arg1 locale:(struct __CFLocale *)arg2 hyphenChar:(unsigned int *)arg3;
- (NSObject *)objectAtLocationPriorToMappedCharIndex:(unsigned int)arg0 forAttributeKind:(int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned int)charIndexRemappedFromStorage:(unsigned int)arg0;
- (char)adjustRangesByDelta:(int)arg0;
- (unsigned int)storageLength;
- (unsigned long)composedCharacterAtCharIndex:(unsigned int)arg0 isSurrogatePair:(char *)arg1;
- (void)dealloc;
- (unsigned int)length;
- (NSString *)string;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void).cxx_construct;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (void).cxx_destruct;

@end
