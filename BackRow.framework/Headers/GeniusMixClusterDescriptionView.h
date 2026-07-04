/* Runtime dump - GeniusMixClusterDescriptionView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMarqueeTextControl, BRTextControl;
@interface GeniusMixClusterDescriptionView : BRControl
{
    BRTextControl * _clusterNameControl;
    BRTextControl * _basedOnLabelControl;
    BRMarqueeTextControl * _basedOnTextControl;
}

@property (copy, nonatomic) NSString * clusterName;
@property (copy, nonatomic) NSString * basedOnText;

- (void)layoutSubcontrols;
- (void)setClusterName:(NSString *)arg0;
- (NSString *)clusterName;
- (NSString *)basedOnText;
- (void)setBasedOnText:(NSString *)arg0;
- (void)dealloc;
- (GeniusMixClusterDescriptionView *)init;

@end
