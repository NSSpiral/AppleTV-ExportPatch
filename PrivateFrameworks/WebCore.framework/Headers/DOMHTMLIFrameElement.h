/* Runtime dump - DOMHTMLIFrameElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLIFrameElement : DOMHTMLElement

@property (readonly, nonatomic) WebFrame * contentFrame;
@property (copy) NSString * align;
@property (copy) NSString * frameBorder;
@property (copy) NSString * height;
@property (copy) NSString * longDesc;
@property (copy) NSString * marginHeight;
@property (copy) NSString * marginWidth;
@property (copy) NSString * name;
@property (copy) NSString * scrolling;
@property (copy) NSString * src;
@property (copy) NSString * width;
@property (readonly) DOMDocument * contentDocument;
@property (readonly) DOMAbstractView * contentWindow;

- (WebFrame *)contentFrame;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)width;
- (NSString *)height;
- (void)setWidth:(NSString *)arg0;
- (int)structuralComplexityContribution;
- (void)setHeight:(NSString *)arg0;
- (NSString *)align;
- (void)setAlign:(NSString *)arg0;
- (NSString *)src;
- (void)setSrc:(NSString *)arg0;
- (NSString *)frameBorder;
- (void)setFrameBorder:(NSString *)arg0;
- (NSString *)longDesc;
- (void)setLongDesc:(NSString *)arg0;
- (NSString *)marginHeight;
- (void)setMarginHeight:(NSString *)arg0;
- (NSString *)marginWidth;
- (void)setMarginWidth:(NSString *)arg0;
- (NSString *)scrolling;
- (void)setScrolling:(NSString *)arg0;
- (DOMDocument *)contentDocument;
- (DOMAbstractView *)contentWindow;
- (id)sandbox;
- (void)setSandbox:(id)arg0;
- (id)srcdoc;
- (void)setSrcdoc:(id)arg0;

@end
