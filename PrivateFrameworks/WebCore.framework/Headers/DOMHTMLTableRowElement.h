/* Runtime dump - DOMHTMLTableRowElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTableRowElement : DOMHTMLElement

@property (readonly) int rowIndex;
@property (readonly) int sectionRowIndex;
@property (readonly) DOMHTMLCollection * cells;
@property (copy) NSString * align;
@property (copy) NSString * bgColor;
@property (copy) NSString * ch;
@property (copy) NSString * chOff;
@property (copy) NSString * vAlign;

- (int)rowIndex;
- (NSString *)bgColor;
- (NSString *)align;
- (void)setAlign:(NSString *)arg0;
- (void)setBgColor:(NSString *)arg0;
- (NSString *)ch;
- (void)setCh:(NSString *)arg0;
- (NSString *)chOff;
- (void)setChOff:(NSString *)arg0;
- (NSString *)vAlign;
- (void)setVAlign:(NSString *)arg0;
- (int)sectionRowIndex;
- (DOMHTMLCollection *)cells;
- (NSObject *)insertCell:(int)arg0;
- (void)deleteCell:(int)arg0;

@end
