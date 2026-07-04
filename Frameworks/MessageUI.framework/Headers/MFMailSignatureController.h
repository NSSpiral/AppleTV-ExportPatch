/* Runtime dump - MFMailSignatureController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailSignatureController : NSObject
{
    NSString * _currentSignatureString;
    char _hasSignature;
    char _firstSignaturePassComplete;
}

+ (MFMailSignatureController *)_htmlConvertToWhitespace:(id)arg0;
+ (MFMailSignatureController *)_regexEscape:(id)arg0;
+ (MFMailSignatureController *)_wordsAndNewlinesArrayFromContents:(id)arg0;
+ (NSArray *)_arrayNOT:(NSArray *)arg0 notArray:(NSArray *)arg1;
+ (NSArray *)_regexStringFromArray:(NSArray *)arg0;
+ (NSObject *)_lineWiseRegexStringForSignature:(NSObject *)arg0 usingContentWords:(id)arg1;

- (void)clearSignatureState;
- (void)addSignatureForSender:(NSObject *)arg0 bodyField:(MFComposeBodyField *)arg1 prepend:(char)arg2;
- (void)updateSignatureForSender:(NSObject *)arg0 bodyField:(MFComposeBodyField *)arg1;
- (char)isDefaultSignatureForSender:(NSObject *)arg0;
- (void)removeSignatureForSender:(NSObject *)arg0 bodyField:(MFComposeBodyField *)arg1;
- (NSObject *)_signatureStringForSender:(NSObject *)arg0;
- (id)_domDocumentForComposeBodyField:(id)arg0;
- (NSObject *)_createSignatureForSender:(NSObject *)arg0 document:(NSObject *)arg1 prepend:(char)arg2 node:(BWNode *)arg3 usingMarkup:(char)arg4;
- (NSObject *)_signatureMarkupStringForSender:(NSObject *)arg0;
- (NSObject *)_createSignatureElement:(NSObject *)arg0 prepend:(char)arg1 node:(BWNode *)arg2;
- (NSObject *)_regexForSignature:(NSObject *)arg0;
- (struct _NSRange)_locateLeadingMarkupForContents:(id)arg0 withRange:(struct _NSRange)arg1;
- (struct _NSRange)_locateTrailingMarkupForContents:(id)arg0 withRange:(struct _NSRange)arg1;
- (struct _NSRange)_preciseSearchForSignature:(NSObject *)arg0 inContents:(UIKBKeyDisplayContents *)arg1;
- (struct _NSRange)_preciseSearchForSignatureForSender:(NSObject *)arg0 inContents:(UIKBKeyDisplayContents *)arg1;
- (struct _NSRange)_fuzzySearchForSignature:(NSObject *)arg0 inContents:(UIKBKeyDisplayContents *)arg1;
- (struct _NSRange)_preciseSearchForDefaultSignatureInContents:(id)arg0;
- (char)_isEmptyHTMLElement:(NSObject *)arg0;
- (struct _NSRange)_locateSignatureForSender:(NSObject *)arg0 oldSignature:(NSObject *)arg1 withSignature:(NSObject *)arg2 inContents:(UIKBKeyDisplayContents *)arg3;
- (NSObject *)_updateSignatureElement:(NSObject *)arg0 withSignature:(NSObject *)arg1 inRange:(struct _NSRange)arg2;
- (char)_isDraftRestore:(id)arg0;
- (struct _NSRange)_replaceSignatureForSender:(NSObject *)arg0 oldSignature:(NSObject *)arg1 withSignature:(NSObject *)arg2 document:(NSObject *)arg3 backwardsFromNode:(NSObject *)arg4 maxParagraphs:(unsigned int)arg5;
- (NSObject *)_prependSignatureForSender:(NSObject *)arg0 document:(NSObject *)arg1 node:(BWNode *)arg2 includeMarkup:(char)arg3;
- (void)dealloc;
- (MFMailSignatureController *)init;

@end
