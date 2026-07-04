/* Runtime dump - DOMHTMLDocument
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLDocument : DOMDocument

@property (readonly) DOMHTMLCollection * embeds;
@property (readonly) DOMHTMLCollection * plugins;
@property (readonly) DOMHTMLCollection * scripts;
@property (readonly) int width;
@property (readonly) int height;
@property (copy) NSString * dir;
@property (copy) NSString * designMode;
@property (readonly, copy) NSString * compatMode;
@property (copy) NSString * bgColor;
@property (copy) NSString * fgColor;
@property (copy) NSString * alinkColor;
@property (copy) NSString * linkColor;
@property (copy) NSString * vlinkColor;

+ (DOMHTMLDocument *)mf_listElements;

- (NSObject *)mf_createMessageQuoteElement;
- (int)width;
- (int)height;
- (void)close;
- (void)clear;
- (NSString *)designMode;
- (void)setDesignMode:(NSString *)arg0;
- (void)open;
- (void)write:(char *)arg0;
- (NSString *)bgColor;
- (NSString *)compatMode;
- (NSString *)createDocumentFragmentWithMarkupString:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (NSString *)createDocumentFragmentWithText:(NSString *)arg0;
- (NSString *)_createDocumentFragmentWithMarkupString:(NSString *)arg0 baseURLString:(NSString *)arg1;
- (NSString *)_createDocumentFragmentWithText:(NSString *)arg0;
- (void)setBgColor:(NSString *)arg0;
- (DOMHTMLCollection *)embeds;
- (DOMHTMLCollection *)plugins;
- (DOMHTMLCollection *)scripts;
- (NSString *)dir;
- (void)setDir:(NSString *)arg0;
- (NSString *)fgColor;
- (void)setFgColor:(NSString *)arg0;
- (NSString *)alinkColor;
- (void)setAlinkColor:(NSString *)arg0;
- (NSString *)linkColor;
- (void)setLinkColor:(NSString *)arg0;
- (NSString *)vlinkColor;
- (void)setVlinkColor:(NSString *)arg0;
- (void)writeln:(id)arg0;
- (void)captureEvents;
- (void)releaseEvents;

@end
