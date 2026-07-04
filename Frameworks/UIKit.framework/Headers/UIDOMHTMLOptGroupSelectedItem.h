/* Runtime dump - UIDOMHTMLOptGroupSelectedItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>
{
    DOMHTMLOptGroupElement * _node;
}

@property (retain, nonatomic) DOMHTMLOptGroupElement * _node;

- (void)dealloc;
- (void)setSelected:(char)arg0;
- (char)selected;
- (void)set_node:(DOMHTMLOptGroupElement *)arg0;
- (DOMHTMLOptGroupElement *)node;
- (char)isGroup;
- (void)unselect;
- (DOMHTMLOptGroupElement *)_node;
- (UIDOMHTMLOptGroupSelectedItem *)initWithHTMLOptGroupNode:(NSObject *)arg0;

@end
