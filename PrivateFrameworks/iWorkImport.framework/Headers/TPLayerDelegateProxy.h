/* Runtime dump - TPLayerDelegateProxy
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPLayerDelegateProxy : NSObject
{
    <TPLayerDelegateProxyDelegate> * _delegate;
}

- (char)respondsToSelector:(SEL)arg0;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)layoutSublayersOfLayer:(CALayer *)arg0;
- (CALayer *)actionForLayer:(CALayer *)arg0 forKey:(NSString *)arg1;
- (void)clearDelegate;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (TPLayerDelegateProxy *)initWithDelegate:(<TPLayerDelegateProxyDelegate> *)arg0;

@end
