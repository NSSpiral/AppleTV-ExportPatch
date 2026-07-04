/* Runtime dump - UIDOMHTMLOptionSelectedItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate>
{
    char _selected;
    DOMHTMLOptionElement * _node;
}

@property (retain, nonatomic) DOMHTMLOptionElement * _node;

- (void)dealloc;
- (void)setSelected:(char)arg0;
- (char)selected;
- (void)set_node:(DOMHTMLOptionElement *)arg0;
- (DOMHTMLOptionElement *)node;
- (char)isGroup;
- (void)unselect;
- (UIDOMHTMLOptionSelectedItem *)initWithHTMLOptionNode:(NSObject *)arg0;
- (DOMHTMLOptionElement *)_node;

@end
