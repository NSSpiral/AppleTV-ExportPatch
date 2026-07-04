/* Runtime dump - DOMHTMLTableCellElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLTableCellElement : DOMHTMLElement

@property (readonly) int cellIndex;
@property (copy) NSString * abbr;
@property (copy) NSString * align;
@property (copy) NSString * axis;
@property (copy) NSString * bgColor;
@property (copy) NSString * ch;
@property (copy) NSString * chOff;
@property int colSpan;
@property (copy) NSString * headers;
@property (copy) NSString * height;
@property char noWrap;
@property int rowSpan;
@property (copy) NSString * scope;
@property (copy) NSString * vAlign;
@property (copy) NSString * width;

- (NSString *)axis;
- (NSString *)width;
- (NSString *)height;
- (void)setScope:(NSString *)arg0;
- (NSString *)scope;
- (void)setWidth:(NSString *)arg0;
- (void)setAxis:(NSString *)arg0;
- (void)setHeight:(NSString *)arg0;
- (NSString *)bgColor;
- (id)_cellAbove;
- (NSString *)align;
- (void)setAlign:(NSString *)arg0;
- (void)setBgColor:(NSString *)arg0;
- (int)cellIndex;
- (NSString *)abbr;
- (void)setAbbr:(NSString *)arg0;
- (NSString *)ch;
- (void)setCh:(NSString *)arg0;
- (NSString *)chOff;
- (void)setChOff:(NSString *)arg0;
- (int)colSpan;
- (void)setColSpan:(int)arg0;
- (NSString *)headers;
- (void)setHeaders:(NSString *)arg0;
- (char)noWrap;
- (void)setNoWrap:(char)arg0;
- (int)rowSpan;
- (void)setRowSpan:(int)arg0;
- (NSString *)vAlign;
- (void)setVAlign:(NSString *)arg0;

@end
