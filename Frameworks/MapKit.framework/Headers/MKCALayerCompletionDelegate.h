/* Runtime dump - MKCALayerCompletionDelegate
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCALayerCompletionDelegate : NSObject
{
    id _completion;
}

@property (copy, nonatomic) id completion;

+ (MKCALayerCompletionDelegate *)delegateWithCompletion:(id /* block */)arg0;

- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void).cxx_destruct;

@end
