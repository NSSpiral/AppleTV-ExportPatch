/* Runtime dump - VKAnnotationMarkerLayer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnnotationMarkerLayer : NSObject
{
    VKAnnotationModel * _model;
    VKAnnotationMarkerLayer * _superlayer;
    NSMutableArray * _sublayers;
    VKAnnotationMarker * _annotationMarker;
    struct CGPoint _centerOffset;
    struct CGPoint _accumulatedCenterOffset;
    char _hasScreenRect;
    struct ? _screenRect;
    char _hasMass;
    int _styleType;
    float _contentScale;
}

@property (nonatomic) VKAnnotationMarkerLayer * superlayer;
@property (readonly, copy, nonatomic) NSArray * sublayers;
@property (nonatomic) int styleType;
@property (nonatomic) struct CGPoint centerOffset;
@property (nonatomic) char hasMass;
@property (readonly, nonatomic) float contentScale;
@property (nonatomic) VKAnnotationModel * model;
@property (nonatomic) VKAnnotationMarker * annotationMarker;
@property (nonatomic) struct CGPoint accumulatedCenterOffset;
@property (readonly, nonatomic) char hasScreenRect;
@property (nonatomic) struct ? screenRect;

- (void)dealloc;
- (VKAnnotationMarkerLayer *)init;
- (void)addSublayer:(id)arg0;
- (VKAnnotationMarkerLayer *)superlayer;
- (NSArray *)sublayers;
- (void)removeFromSuperlayer;
- (void)_updateStyle;
- (VKAnnotationModel *)model;
- (void).cxx_construct;
- (float)contentScale;
- (void)setModel:(VKAnnotationModel *)arg0;
- (void)runAnimation:(VKAnimation *)arg0;
- (void)layoutWithContext:(NSObject *)arg0;
- (void)stylesheetDidChange;
- (int)_vectorType;
- (void)willLayoutWithContext:(NSObject *)arg0;
- (void)appendCommandsToBuffer:(struct CommandBuffer *)arg0 inContext:(struct ClearItem *)arg1;
- (float)distanceFromPoint:(struct VKPoint)arg0 canvasSize:(struct CGSize)arg1;
- (void)setAnnotationMarker:(VKAnnotationMarker *)arg0;
- (struct ?)screenRect;
- (void)setStyleType:(int)arg0;
- (void)setScreenRect:(struct ?)arg0;
- (void)updateWithStyleQuery:(struct shared_ptr<md::StyleQuery> *)arg0;
- (void)setSuperlayer:(VKAnnotationMarkerLayer *)arg0;
- (void)setAccumulatedCenterOffset:(struct CGPoint)arg0;
- (void)removeSublayer:(id)arg0;
- (void)updateWithContentScale:(float)arg0;
- (char)shouldSnapToPixelsWithContext:(NSObject *)arg0;
- (char)hasMass;
- (char)hasScreenRect;
- (int)styleType;
- (VKAnnotationMarker *)annotationMarker;
- (NSDictionary *)_styleAttributes;
- (void)insertSublayer:(id)arg0 belowSublayer:(id)arg1;
- (void)insertSublayer:(id)arg0 aboveSublayer:(id)arg1;
- (void)setCenterOffset:(struct CGPoint)arg0;
- (struct CGPoint)centerOffset;
- (struct CGPoint)accumulatedCenterOffset;
- (void)setHasMass:(char)arg0;

@end
