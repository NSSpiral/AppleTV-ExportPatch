/* Runtime dump - IKDOMHTMLCollection
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection>
{
    IKDOMNode * _parentNode;
}

@property (weak, nonatomic) IKDOMNode * parentNode;
@property (readonly) unsigned long length;

- (void)setParentNode:(IKDOMNode *)arg0;
- (unsigned long)length;
- (IKDOMNode *)parentNode;
- (NSObject *)item:(unsigned long)arg0;
- (void).cxx_destruct;
- (IKDOMHTMLCollection *)initWithAppContext:(<IKApplication> *)arg0 node:(BWNode *)arg1;

@end
