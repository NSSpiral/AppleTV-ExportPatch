/* Runtime dump - DOMHTMLScriptElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString * text;
@property (copy) NSString * htmlFor;
@property (copy) NSString * event;
@property (copy) NSString * charset;
@property char defer;
@property (copy) NSString * src;
@property (copy) NSString * type;

- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setEvent:(NSString *)arg0;
- (NSString *)event;
- (NSString *)charset;
- (void)setCharset:(NSString *)arg0;
- (NSString *)src;
- (void)setSrc:(NSString *)arg0;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)arg0;
- (NSString *)htmlFor;
- (void)setHtmlFor:(NSString *)arg0;
- (char)async;
- (void)setAsync:(char)arg0;
- (char)defer;
- (void)setDefer:(char)arg0;

@end
