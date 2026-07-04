/* Runtime dump - DOMHTMLLinkElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLLinkElement : DOMHTMLElement

@property char disabled;
@property (copy) NSString * charset;
@property (copy) NSString * href;
@property (copy) NSString * hreflang;
@property (copy) NSString * media;
@property (copy) NSString * rel;
@property (copy) NSString * rev;
@property (copy) NSString * target;
@property (copy) NSString * type;
@property (readonly) DOMStyleSheet * sheet;
@property (readonly, copy) NSURL * absoluteLinkURL;

- (void)setTarget:(NSString *)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)target;
- (NSURL *)absoluteLinkURL;
- (NSString *)href;
- (void)setHref:(NSString *)arg0;
- (NSString *)rel;
- (void)setRel:(NSString *)arg0;
- (char)_mediaQueryMatchesForOrientation:(int)arg0;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (char)_mediaQueryMatches;
- (NSString *)media;
- (NSString *)charset;
- (void)setCharset:(NSString *)arg0;
- (NSString *)hreflang;
- (void)setHreflang:(NSString *)arg0;
- (NSString *)rev;
- (void)setRev:(NSString *)arg0;
- (void)setMedia:(NSString *)arg0;
- (DOMStyleSheet *)sheet;

@end
