/* Runtime dump - DOMHTMLProgressElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLProgressElement : DOMHTMLElement

@property double value;
@property double max;
@property (readonly) double position;
@property (readonly) DOMNodeList * labels;

- (double)value;
- (void)setValue:(double)arg0;
- (double)position;
- (DOMNodeList *)labels;
- (double)max;
- (void)setMax:(double)arg0;

@end
