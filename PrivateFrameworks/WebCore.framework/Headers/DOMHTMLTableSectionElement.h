/* Runtime dump - DOMHTMLTableSectionElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString * align;
@property (copy) NSString * ch;
@property (copy) NSString * chOff;
@property (copy) NSString * vAlign;
@property (readonly) DOMHTMLCollection * rows;

- (DOMHTMLCollection *)rows;
- (NSString *)align;
- (void)setAlign:(NSString *)arg0;
- (NSString *)ch;
- (void)setCh:(NSString *)arg0;
- (NSString *)chOff;
- (void)setChOff:(NSString *)arg0;
- (NSString *)vAlign;
- (void)setVAlign:(NSString *)arg0;
- (id)insertRow:(int)arg0;
- (void)deleteRow:(int)arg0;

@end
