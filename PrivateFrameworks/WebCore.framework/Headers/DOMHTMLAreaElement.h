/* Runtime dump - DOMHTMLAreaElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString * alt;
@property (copy) NSString * coords;
@property (copy) NSString * href;
@property char noHref;
@property (copy) NSString * shape;
@property (copy) NSString * target;
@property (copy) NSString * accessKey;
@property (readonly, copy) NSString * hashName;
@property (readonly, copy) NSString * host;
@property (readonly, copy) NSString * hostname;
@property (readonly, copy) NSString * pathname;
@property (readonly, copy) NSString * port;
@property (readonly, copy) NSString * protocol;
@property (readonly, copy) NSString * search;
@property (readonly, copy) NSURL * absoluteLinkURL;

- (NSObject *)absoluteQuadsAtPoint:(struct CGPoint)arg0;
- (void)setShape:(NSString *)arg0;
- (void)setTarget:(NSString *)arg0;
- (NSString *)target;
- (NSString *)host;
- (NSURL *)absoluteLinkURL;
- (NSString *)href;
- (void)setHref:(NSString *)arg0;
- (NSString *)shape;
- (NSObject *)absoluteQuadsWithOwner:(NSObject *)arg0;
- (NSString *)protocol;
- (NSString *)port;
- (id)ping;
- (NSString *)coords;
- (void)setCoords:(NSString *)arg0;
- (void)setPing:(id)arg0;
- (NSString *)accessKey;
- (void)setAccessKey:(NSString *)arg0;
- (NSString *)hashName;
- (NSString *)hostname;
- (NSString *)pathname;
- (NSString *)search;
- (NSString *)alt;
- (void)setAlt:(NSString *)arg0;
- (char)noHref;
- (void)setNoHref:(char)arg0;
- (struct CGRect)boundingBoxWithOwner:(NSObject *)arg0;
- (struct _WKQuad)absoluteQuadWithOwner:(struct CGPoint)arg0;
- (NSObject *)boundingBoxesWithOwner:(NSObject *)arg0;

@end
