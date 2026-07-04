/* Runtime dump - DOMHTMLTableElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTableElement : DOMHTMLElement

@property (retain) DOMHTMLTableCaptionElement * caption;
@property (retain) DOMHTMLTableSectionElement * tHead;
@property (retain) DOMHTMLTableSectionElement * tFoot;
@property (readonly) DOMHTMLCollection * rows;
@property (readonly) DOMHTMLCollection * tBodies;
@property (copy) NSString * align;
@property (copy) NSString * bgColor;
@property (copy) NSString * border;
@property (copy) NSString * cellPadding;
@property (copy) NSString * cellSpacing;
@property (copy) NSString * frameBorders;
@property (copy) NSString * rules;
@property (copy) NSString * summary;
@property (copy) NSString * width;

- (NSString *)width;
- (void)setWidth:(NSString *)arg0;
- (DOMHTMLCollection *)rows;
- (int)structuralComplexityContribution;
- (void)setCellPadding:(NSString *)arg0;
- (NSString *)cellPadding;
- (void)setCaption:(DOMHTMLTableCaptionElement *)arg0;
- (DOMHTMLTableCaptionElement *)caption;
- (NSString *)bgColor;
- (NSString *)border;
- (void)setBorder:(NSString *)arg0;
- (NSString *)rules;
- (NSString *)align;
- (void)setAlign:(NSString *)arg0;
- (void)setBgColor:(NSString *)arg0;
- (DOMHTMLTableSectionElement *)tHead;
- (void)setTHead:(DOMHTMLTableSectionElement *)arg0;
- (DOMHTMLTableSectionElement *)tFoot;
- (void)setTFoot:(DOMHTMLTableSectionElement *)arg0;
- (DOMHTMLCollection *)tBodies;
- (NSString *)cellSpacing;
- (void)setCellSpacing:(NSString *)arg0;
- (NSString *)frameBorders;
- (void)setFrameBorders:(NSString *)arg0;
- (void)setRules:(NSString *)arg0;
- (NSString *)summary;
- (void)setSummary:(NSString *)arg0;
- (id)createTHead;
- (void)deleteTHead;
- (id)createTFoot;
- (void)deleteTFoot;
- (NSObject *)createTBody;
- (id)createCaption;
- (void)deleteCaption;
- (id)insertRow:(int)arg0;
- (void)deleteRow:(int)arg0;

@end
