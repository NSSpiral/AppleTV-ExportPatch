/* Runtime dump - IKDOMElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKJSDOMElement, IKJSDOMParentNode>

@property (retain, nonatomic) NSString * innerHTML;
@property (retain, nonatomic) NSString * outerHTML;
@property (readonly, retain, nonatomic) NSString * tagName;
@property (readonly, nonatomic) IKDOMHTMLCollection * children;
@property (readonly, nonatomic) IKDOMElement * firstElementChild;
@property (readonly, nonatomic) IKDOMElement * lastElementChild;
@property (readonly, nonatomic) unsigned long childElementCount;

- (void)setInnerHTML:(NSString *)arg0;
- (NSString *)innerHTML;
- (NSString *)tagName;
- (NSObject *)getAttribute:(struct __CFString *)arg0;
- (NSString *)getElementsByTagName:(NSString *)arg0;
- (IKDOMElement *)firstElementChild;
- (int)nodeType;
- (NSDictionary *)attributes;
- (id)childElements;
- (void)setAttributeValue:(KNBuildAttributeValue *)arg0 withName:(NSString *)arg1;
- (NSString *)childElementByTagName:(NSString *)arg0;
- (NSString *)childElementsByTagName:(NSString *)arg0;
- (void)insertAdjacentHTML:(id)arg0 :(id)arg1;
- (NSString *)nodeName;
- (IKDOMElement *)lastElementChild;
- (unsigned long)childElementCount;
- (void)setAttribute:(char *)arg0 :(id)arg1;
- (void)removeAttribute:(NSObject *)arg0;
- (char)hasAttribute:(char)arg0;
- (NSString *)outerHTML;
- (void)setOuterHTML:(NSString *)arg0;
- (IKDOMHTMLCollection *)children;
- (NSString *)textContent;
- (void)setTextContent:(NSString *)arg0;

@end
