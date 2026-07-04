/* Runtime dump - IKDOMDocumentFragment
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>

@property (readonly, nonatomic) IKDOMHTMLCollection * children;
@property (readonly, nonatomic) IKDOMElement * firstElementChild;
@property (readonly, nonatomic) IKDOMElement * lastElementChild;
@property (readonly, nonatomic) unsigned long childElementCount;

- (IKDOMElement *)firstElementChild;
- (int)nodeType;
- (NSString *)nodeName;
- (IKDOMElement *)lastElementChild;
- (unsigned long)childElementCount;
- (IKDOMHTMLCollection *)children;

@end
