/* Runtime dump - DOMHTMLElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLElement : DOMElement

@property (copy) NSString * idName;
@property (copy) NSString * title;
@property (copy) NSString * lang;
@property (copy) NSString * dir;
@property int tabIndex;
@property (copy) NSString * accessKey;
@property (copy) NSString * innerHTML;
@property (copy) NSString * innerText;
@property (copy) NSString * outerHTML;
@property (copy) NSString * outerText;
@property (readonly) DOMHTMLCollection * children;
@property (copy) NSString * contentEditable;
@property (readonly) char isContentEditable;
@property (readonly, copy) NSString * titleDisplayString;

- (void)setHidden:(char)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)setScrollXOffset:(int)arg0 scrollYOffset:(int)arg1;
- (void)setContentEditable:(NSString *)arg0;
- (void)setInnerHTML:(NSString *)arg0;
- (NSString *)innerHTML;
- (NSString *)innerText;
- (char)isContentEditable;
- (NSString *)idName;
- (int)structuralComplexityContribution;
- (void)setDraggable:(char)arg0;
- (char)hidden;
- (void)setScrollXOffset:(int)arg0 scrollYOffset:(int)arg1 adjustForIOSCaret:(char)arg2;
- (void)absolutePosition:(int *)arg0 :(int *)arg1 :(int *)arg2 :(int *)arg3;
- (NSString *)accessKey;
- (void)setAccessKey:(NSString *)arg0;
- (void)click;
- (NSString *)dir;
- (void)setDir:(NSString *)arg0;
- (void)setIdName:(NSString *)arg0;
- (NSString *)lang;
- (void)setLang:(NSString *)arg0;
- (char)translate;
- (void)setTranslate:(char)arg0;
- (int)tabIndex;
- (void)setTabIndex:(int)arg0;
- (char)draggable;
- (id)webkitdropzone;
- (void)setWebkitdropzone:(id)arg0;
- (void)setInnerText:(NSString *)arg0;
- (NSString *)outerHTML;
- (void)setOuterHTML:(NSString *)arg0;
- (NSString *)outerText;
- (void)setOuterText:(NSString *)arg0;
- (DOMHTMLCollection *)children;
- (NSString *)contentEditable;
- (char)spellcheck;
- (void)setSpellcheck:(char)arg0;
- (NSString *)titleDisplayString;
- (NSObject *)insertAdjacentElement:(NSObject *)arg0 element:(NSObject *)arg1;
- (void)insertAdjacentHTML:(id)arg0 html:(NSString *)arg1;
- (void)insertAdjacentText:(NSString *)arg0 text:(NSString *)arg1;

@end
