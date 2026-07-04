/* Runtime dump - TSWPDocumentRoot
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex>

@property (readonly, nonatomic) char changeTrackingEnabled;
@property (readonly, nonatomic) char supportHeaderFooterParagraphAlignmentInInspectors;

- (void)documentDidLoad;
- (id)unavailableDocumentFonts;
- (char)useLigatures;
- (char)shouldHyphenate;
- (struct __CFLocale *)hyphenationLocale;
- (id)changeVisibility;
- (NSObject *)changeSessionManagerForModel:(NSObject *)arg0;
- (id)documentFonts;
- (char)isChangeTrackingEnabled;
- (int)naturalAlignmentAtCharIndex:(unsigned int)arg0 inTextStorage:(NSTextStorage *)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg0;
- (char)supportHeaderFooterParagraphAlignmentInInspectors;
- (void)dealloc;

@end
