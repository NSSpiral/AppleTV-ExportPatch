/* Runtime dump - VKLabelMarker
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelMarker : NSObject <MKCalloutSource>
{
    struct shared_ptr<vk::LabelManager> _manager;
    struct shared_ptr<vk::InfoLabel> _label;
    float _contentScale;
    unsigned long long _featureID;
    int _featureType;
    struct _retain_ptr<GEOVectorTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _featureTile;
    NSString * _subtitle;
}

@property (retain, nonatomic) UIView * leftCalloutAccessoryView;
@property (retain, nonatomic) UIView * rightCalloutAccessoryView;
@property (retain, nonatomic) UIView * detailCalloutAccessoryView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * subtitle;

- (void)setLeftCalloutAccessoryView:(UIView *)arg0;
- (UIView *)leftCalloutAccessoryView;
- (void)setRightCalloutAccessoryView:(UIView *)arg0;
- (UIView *)rightCalloutAccessoryView;
- (void)setDetailCalloutAccessoryView:(UIView *)arg0;
- (UIView *)detailCalloutAccessoryView;
- (void)dealloc;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_construct;
- (struct ?)_bounds;
- (void).cxx_destruct;
- (char)isSelectable;
- (GEOMapRegion *)mapRegion;
- (struct ?)coordinate;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg0 canvasScale:(float)arg1 snapToPixels:(char)arg2;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg0 canvasScale:(float)arg1;
- (NSString *)debugAnchorPointString;
- (int)featureType;
- (unsigned long long)animationID;
- (VKLabelMarker *)initWithManager:(struct shared_ptr<vk::LabelManager> *)arg0 infoLabel:(struct shared_ptr<vk::LabelManager>)arg1 contentScale:(struct __shared_weak_count *)arg2 featureInfo:(NSDictionary *)arg3;
- (struct shared_ptr<vk::InfoLabel>)infoLabel;
- (NSString *)iconName;
- (struct CGRect)calloutAnchorRect;
- (char)isOneWayArrow;
- (char)isTrafficIncident;
- (char)isFlyoverTour;
- (char)hasBusinessID;
- (unsigned long long)businessID;
- (unsigned long long)featureID;
- (struct _retain_ptr<GEOVectorTile *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>)featureTile;
- (id)incident;
- (NSMutableArray *)featureHandles;
- (void)setLabelSelected:(char)arg0;
- (void)setLabelPressed:(char)arg0;
- (int)selectionType;
- (char)shouldActivateFeatureSelectionMode;

@end
