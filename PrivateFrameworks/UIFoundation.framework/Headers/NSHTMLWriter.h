/* Runtime dump - NSHTMLWriter
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSHTMLWriter : NSObject
{
    NSAttributedString * _attrStr;
    NSDictionary * _documentAttrs;
    NSData * _htmlData;
    NSMutableString * _bodyStr;
    NSFileWrapper * _fileWrapper;
    NSMutableDictionary * _subresources;
    NSData * _webArchiveData;
    NSMutableArray * _paraStyleStrings;
    NSMutableArray * _paraStyleArrays;
    NSMutableIndexSet * _paraStyleIndexes;
    NSMutableIndexSet * _listItemStyleIndexes;
    NSMutableOrderedSet * _charStyleStrings;
    NSMutableArray * _charStyleArrays;
    NSMutableArray * _fontStrings;
    NSMutableArray * _tableStyleStrings;
    NSMutableArray * _tableCellStyleStrings;
    NSMutableArray * _blockStyleStrings;
    NSMutableArray * _olistStyleStrings;
    NSMutableArray * _ulistStyleStrings;
    NSMutableDictionary * _fontNames;
    NSMutableDictionary * _fontDescriptions;
    int _level;
    int _prefixSpaces;
    NSString * _textEncodingName;
    unsigned int _characterEncoding;
    NSURL * _outputBaseURL;
    id _resourceHandler;
    unsigned int _excludedElements1;
    unsigned int _excludedElements2;
    struct ? _flags;
}

- (void)dealloc;
- (NSHTMLWriter *)initWithAttributedString:(NSAttributedString *)arg0;
- (void)setDocumentAttributes:(NSMutableDictionary *)arg0;
- (NSData *)HTMLData;
- (WebArchive *)webArchive;
- (NSData *)webArchiveData;
- (NSObject *)HTMLFileWrapper;
- (void)readDocumentFragment:(id)arg0;
- (NSMutableDictionary *)subresources;
- (NSObject *)documentFragmentForDocument:(NSObject *)arg0;
- (Class)_webArchiveClass;
- (NSObject *)_defaultValueForAttribute:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (NSString *)_prefix;
- (void)_writeDocumentProperty:(NSObject *)arg0 value:(NSObject *)arg1 toString:(NSString *)arg2;
- (unsigned int)_blockClassForBlock:(id /* block */)arg0;
- (id)_prefixUp;
- (id)_prefixDown;
- (unsigned int)_listClassForList:(NSArray *)arg0;
- (char)_isStrictByParsingExcludedElements;
- (unsigned int)_spanClassForAttributes:(NSDictionary *)arg0 inParagraphClass:(unsigned int)arg1 spanClass:(unsigned int)arg2 flags:(unsigned int *)arg3;
- (void)_closeFlags:(unsigned int)arg0 openFlags:(unsigned int)arg1 inString:(NSAttributedString *)arg2;
- (unsigned int)_paragraphClassforParagraphStyle:(NSObject *)arg0 range:(struct _NSRange)arg1 isEmpty:(char)arg2 isCompletelyEmpty:(char)arg3 headerString:(id *)arg4 alignmentString:(id *)arg5 directionString:(id *)arg6;
- (void)_openBlocksForParagraphStyle:(NSObject *)arg0 atIndex:(unsigned int)arg1 inString:(NSAttributedString *)arg2;
- (void)_openListsForParagraphStyle:(NSObject *)arg0 atIndex:(unsigned int)arg1 inString:(NSAttributedString *)arg2 isStrict:(char)arg3;
- (void)_appendAttachment:(NSObject *)arg0 atIndex:(unsigned int)arg1 toString:(NSString *)arg2;
- (char)_closeListsForParagraphStyle:(NSObject *)arg0 atIndex:(unsigned int)arg1 inString:(NSAttributedString *)arg2;
- (char)_closeBlocksForParagraphStyle:(NSObject *)arg0 atIndex:(unsigned int)arg1 inString:(NSAttributedString *)arg2;
- (void)_writeDocumentPropertiesToString:(NSString *)arg0;
- (void)_prepareString:(NSString *)arg0 forConversionToEncoding:(unsigned int)arg1;
- (void)_generateHTML;
- (void)_createWebArchiveData;

@end
