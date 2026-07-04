/* Runtime dump - NSHTMLReader
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSHTMLReader : NSObject
{
    NSMutableAttributedString * _attrStr;
    NSMutableDictionary * _documentAttrs;
    NSData * _data;
    NSURL * _baseURL;
    NSDictionary * _options;
    WebView * _webView;
    id _webDelegate;
    DOMDocument * _document;
    DOMRange * _domRange;
    NSMutableArray * _domStartAncestors;
    WebDataSource * _dataSource;
    NSString * _standardFontFamily;
    float _textSizeMultiplier;
    float _webViewTextSizeMultiplier;
    float _defaultTabInterval;
    float _defaultFontSize;
    float _minimumFontSize;
    NSMutableArray * _textLists;
    NSMutableArray * _textBlocks;
    NSMutableArray * _textTables;
    NSMutableDictionary * _textTableFooters;
    NSMutableArray * _textTableSpacings;
    NSMutableArray * _textTablePaddings;
    NSMutableArray * _textTableRows;
    NSMutableArray * _textTableRowArrays;
    NSMutableArray * _textTableRowBackgroundColors;
    NSMutableDictionary * _computedStylesForElements;
    NSMutableDictionary * _specifiedStylesForElements;
    NSMutableDictionary * _stringsForNodes;
    NSMutableDictionary * _floatsForNodes;
    NSMutableDictionary * _colorsForNodes;
    NSMutableDictionary * _attributesForElements;
    NSMutableDictionary * _elementIsBlockLevel;
    NSMutableDictionary * _fontCache;
    NSMutableArray * _writingDirectionArray;
    int _domRangeStartIndex;
    int _indexingLimit;
    int _thumbnailLimit;
    int _errorCode;
    int _quoteLevel;
    struct ? _flags;
}

+ (void)initialize;
+ (NSHTMLReader *)defaultParagraphStyle;

- (void)dealloc;
- (NSHTMLReader *)initWithDOMRange:(NSObject *)arg0;
- (NSAttributedString *)attributedString;
- (NSHTMLReader *)initWithData:(NSData *)arg0 options:(NSDictionary *)arg1;
- (void)_load;
- (NSMutableDictionary *)documentAttributes;
- (NSHTMLReader *)initWithPath:(NSString *)arg0 options:(NSDictionary *)arg1;
- (void)setMutableAttributedString:(NSMutableAttributedString *)arg0;
- (NSObject *)_computedStyleForElement:(NSObject *)arg0;
- (NSObject *)_specifiedStyleForElement:(NSObject *)arg0;
- (NSObject *)_stringForNode:(NSObject *)arg0 property:(NSObject *)arg1;
- (NSObject *)_computedStringForNode:(NSObject *)arg0 property:(NSObject *)arg1;
- (char)_getFloat:(float *)arg0 forNode:(NSObject *)arg1 property:(NSObject *)arg2;
- (char)_getComputedFloat:(float *)arg0 forNode:(NSObject *)arg1 property:(NSObject *)arg2;
- (char)_elementIsBlockLevel:(id)arg0;
- (NSObject *)_blockLevelElementForNode:(NSObject *)arg0;
- (char)_elementHasOwnBackgroundColor:(UIColor *)arg0;
- (NSObject *)_colorForNode:(NSObject *)arg0 property:(NSObject *)arg1;
- (NSObject *)_computedColorForNode:(NSObject *)arg0 property:(NSObject *)arg1;
- (NSObject *)_computedAttributesForElement:(NSObject *)arg0;
- (NSObject *)_attributesForElement:(NSObject *)arg0;
- (Class)_WebMessageDocumentClass;
- (Class)_DOMHTMLTableCellElementClass;
- (NSObject *)_childrenForNode:(NSObject *)arg0;
- (void)_processMetaElementWithName:(NSString *)arg0 content:(char *)arg1;
- (void)_processHeadElement:(NSObject *)arg0;
- (void)_newParagraphForElement:(NSObject *)arg0 tag:(NSString *)arg1 allowEmpty:(char)arg2 suppressTrailingSpace:(char)arg3 isEntering:(char)arg4;
- (void)_fillInBlock:(id /* block */)arg0 forElement:(NSObject *)arg1 backgroundColor:(UIColor *)arg2 extraMargin:(float)arg3 extraPadding:(float)arg4 isTable:(char)arg5;
- (void)_addTableCellForElement:(NSObject *)arg0;
- (void)_addTableForElement:(NSObject *)arg0;
- (char)_addAttachmentForElement:(NSObject *)arg0 URL:(NSString *)arg1 needsParagraph:(char)arg2 usePlaceholder:(char)arg3;
- (void)_traverseNode:(NSObject *)arg0 depth:(int)arg1 embedded:(char)arg2;
- (void)_newLineForElement:(NSObject *)arg0;
- (void)_addQuoteForElement:(NSObject *)arg0 opening:(char)arg1 level:(int)arg2;
- (void)_addValue:(NSValue *)arg0 forElement:(NSObject *)arg1;
- (void)_newTabForElement:(NSObject *)arg0;
- (void)_traverseFooterNode:(NSObject *)arg0 depth:(int)arg1;
- (void)_addMarkersToList:(NSArray *)arg0 range:(struct _NSRange)arg1;
- (char)_enterElement:(NSObject *)arg0 tag:(NSString *)arg1 display:(NSObject *)arg2 depth:(int)arg3 embedded:(char)arg4;
- (char)_processElement:(NSObject *)arg0 tag:(NSString *)arg1 display:(NSObject *)arg2 depth:(int)arg3;
- (void)_exitElement:(NSObject *)arg0 tag:(NSString *)arg1 display:(NSObject *)arg2 depth:(int)arg3 startIndex:(unsigned int)arg4;
- (void)_processText:(NSString *)arg0;
- (char)_sanitizeWebArchiveDictionary:(NSDictionary *)arg0;
- (char)_sanitizeWebArchiveArray:(NSArray *)arg0;
- (Class)_webArchiveClass;
- (Class)_webViewClass;
- (NSData *)_createWebArchiveForData:(NSData *)arg0;
- (id)_webPreferences;
- (void)_parseNode:(NSObject *)arg0;
- (void)_adjustTrailingNewline;
- (void)_loadUsingWebKit;
- (void)_loadFromDOMRange;
- (void)_loadUsingWebKitOnMainThread;

@end
