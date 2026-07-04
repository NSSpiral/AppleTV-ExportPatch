/* Runtime dump - DOMHTMLFrameElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (readonly, nonatomic) WebFrame * contentFrame;
@property (copy) NSString * frameBorder;
@property (copy) NSString * longDesc;
@property (copy) NSString * marginHeight;
@property (copy) NSString * marginWidth;
@property (copy) NSString * name;
@property char noResize;
@property (copy) NSString * scrolling;
@property (copy) NSString * src;
@property (readonly) DOMDocument * contentDocument;
@property (readonly) DOMAbstractView * contentWindow;
@property (copy) NSString * location;
@property (readonly) int width;
@property (readonly) int height;

- (WebFrame *)contentFrame;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)width;
- (int)height;
- (NSString *)location;
- (int)structuralComplexityContribution;
- (void)setLocation:(NSString *)arg0;
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
- (char)noResize;
- (void)setNoResize:(char)arg0;
- (NSString *)scrolling;
- (void)setScrolling:(NSString *)arg0;
- (DOMDocument *)contentDocument;
- (DOMAbstractView *)contentWindow;

@end
