/* Runtime dump - TSKAnimatedGIFLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnimatedGIFLayer : CALayer
{
    TSKAnimatedGIFController * mController;
}

@property (nonatomic) TSKAnimatedGIFController * controller;

+ (TSKAnimatedGIFLayer *)defaultActionForKey:(NSString *)arg0;

- (void)dealloc;
- (void)display;
- (TSKAnimatedGIFController *)controller;
- (void)setController:(TSKAnimatedGIFController *)arg0;
- (void)teardown;

@end
