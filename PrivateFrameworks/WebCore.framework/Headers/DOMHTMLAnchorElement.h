/* Runtime dump - DOMHTMLAnchorElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (copy) NSString * charset;
@property (copy) NSString * coords;
@property (copy) NSString * href;
@property (copy) NSString * hreflang;
@property (copy) NSString * name;
@property (copy) NSString * rel;
@property (copy) NSString * rev;
@property (copy) NSString * shape;
@property (copy) NSString * target;
@property (copy) NSString * type;
@property (copy) NSString * accessKey;
@property (readonly, copy) NSString * hashName;
@property (readonly, copy) NSString * host;
@property (readonly, copy) NSString * hostname;
@property (readonly, copy) NSString * pathname;
@property (readonly, copy) NSString * port;
@property (readonly, copy) NSString * protocol;
@property (readonly, copy) NSString * search;
@property (readonly, copy) NSString * text;
@property (readonly, copy) NSURL * absoluteLinkURL;

- (char)alwaysAttemptToShowTapHighlight;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setShape:(NSString *)arg0;
- (void)setTarget:(NSString *)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)text;
- (NSString *)target;
- (NSString *)host;
- (NSURL *)absoluteLinkURL;
- (NSString *)href;
- (void)setHref:(NSString *)arg0;
- (NSString *)rel;
- (void)setRel:(NSString *)arg0;
- (NSString *)shape;
- (NSString *)protocol;
- (NSString *)port;
- (id)ping;
- (NSString *)charset;
- (void)setCharset:(NSString *)arg0;
- (NSString *)coords;
- (void)setCoords:(NSString *)arg0;
- (NSString *)hreflang;
- (void)setHreflang:(NSString *)arg0;
- (void)setPing:(id)arg0;
- (NSString *)rev;
- (void)setRev:(NSString *)arg0;
- (NSString *)accessKey;
- (void)setAccessKey:(NSString *)arg0;
- (NSString *)hashName;
- (NSString *)hostname;
- (NSString *)pathname;
- (NSString *)search;

@end
