/* Runtime dump - PDAnimateEffectBehavior
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateEffectBehavior : PDAnimateBehavior
{
    NSString * mFilter;
    int mTransition;
}

- (void)dealloc;
- (PDAnimateEffectBehavior *)init;
- (void)setFilter:(NSObject *)arg0;
- (void)setTransition:(int)arg0;
- (int)transition;
- (CIFilter *)filter;

@end
