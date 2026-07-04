/* Runtime dump - ATVContainerView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVContainerView : BRControl
{
    NSMutableArray * _absSubviewsAndOrigins;
}

@property (retain) NSMutableArray * absSubviewsAndOrigins;

- (void)layoutSubcontrols;
- (void)setAbsoluteOriginForSubview:(id)arg0 origin:(struct ?)arg1;
- (NSMutableArray *)absSubviewsAndOrigins;
- (void)setAbsSubviewsAndOrigins:(NSMutableArray *)arg0;
- (void)willRemoveSubview:(_UIVisualEffectSubview *)arg0;
- (void).cxx_destruct;

@end
