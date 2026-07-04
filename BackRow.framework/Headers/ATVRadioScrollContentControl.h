/* Runtime dump - ATVRadioScrollContentControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVRadioStationsView;
@interface ATVRadioScrollContentControl : BRControl
{
    ATVRadioStationsView * _stationsView;
    <CAAction> * _positionAction;
}

@property (weak, nonatomic) ATVRadioStationsView * stationsView;
@property (retain, nonatomic) <CAAction> * positionAction;

- (ATVRadioStationsView *)stationsView;
- (void)setStationsView:(ATVRadioStationsView *)arg0;
- (<CAAction> *)positionAction;
- (void)setPositionAction:(<CAAction> *)arg0;
- (void)setCenter:(struct CGPoint)arg0;
- (void).cxx_destruct;
- (void)setActions:(TSTLayoutProcessChangesActions *)arg0;

@end
