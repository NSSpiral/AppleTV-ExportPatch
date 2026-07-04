/* Runtime dump - MKPlaceHeaderBackgroundView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHeaderBackgroundView : UIView <MKPlaceHeaderViewCinematics>
{
    int _backgroundType;
    MKMapItem * _mapItem;
    <MKPlaceHeaderBackgroundViewDelegate> * _delegate;
    int _preparationState;
}

@property (weak, nonatomic) <MKPlaceHeaderBackgroundViewDelegate> * delegate;
@property (nonatomic) int backgroundType;
@property (nonatomic) int preparationState;
@property (retain, nonatomic) MKMapItem * mapItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)classForBackgroundType:(int)arg0;
+ (int)backgroundTypeForMapItem:(NSObject *)arg0;
+ (NSObject *)backgroundViewForBackgroundType:(int)arg0 mapItem:(MKMapItem *)arg1 headerView:(NSObject *)arg2;
+ (NSObject *)backgroundViewForMapItem:(NSObject *)arg0 headerView:(NSObject *)arg1;

- (void)prepareForPresentation;
- (MKPlaceHeaderBackgroundView *)initWithFrame:(struct CGRect)arg0 mapItem:(struct CGSize)arg1;
- (void)setBackgroundType:(int)arg0;
- (int)preparationState;
- (void)setPreparationState:(int)arg0;
- (int)backgroundType;
- (MKPlaceHeaderBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)setDelegate:(<MKPlaceHeaderBackgroundViewDelegate> *)arg0;
- (<MKPlaceHeaderBackgroundViewDelegate> *)delegate;
- (void)reset;
- (void)resume;
- (void)present;
- (void).cxx_destruct;
- (void)pause;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;

@end
