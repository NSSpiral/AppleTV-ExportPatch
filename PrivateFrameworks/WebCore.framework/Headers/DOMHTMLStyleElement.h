/* Runtime dump - DOMHTMLStyleElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLStyleElement : DOMHTMLElement

@property char disabled;
@property (copy) NSString * media;
@property (copy) NSString * type;
@property (readonly) DOMStyleSheet * sheet;

- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (char)disabled;
- (void)setDisabled:(char)arg0;
- (NSString *)media;
- (void)setMedia:(NSString *)arg0;
- (DOMStyleSheet *)sheet;

@end
