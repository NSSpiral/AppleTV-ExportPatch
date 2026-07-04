/* Runtime dump - MRGestureRecognizer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRGestureRecognizer : NSObject
{
    MRRenderer * _renderer;
    MRAction * _automaticStartAction;
    MRAction * _automaticUpdateAction;
    MRAction * _automaticEndAction;
    MRAction * _automaticCancelAction;
    MRAction * _startAction;
    MRAction * _updateAction;
    MRAction * _endAction;
    MRAction * _cancelAction;
    NSObject * _sender;
    NSObject * _target;
    NSArray * _matrixChain;
    int _state;
    struct CGSize _referenceSize;
    MRTouchSet * _touchSet;
    struct CGPoint _centroidStartLocation;
    struct CGPoint _centroidLocation;
    struct CGPoint _previousCentroidLocation;
    struct CGPoint _offsetFromCentroid;
    float _scale;
    float _previousScale;
    float _ratioFromScale;
    float _rotation;
    float _previousRotation;
    float _offsetFromRotation;
    double _startTime;
    double _hitTime;
    double _previousHitTime;
}

@property (retain) MCAction * startAction;
@property (retain) MCAction * updateAction;
@property (retain) MCAction * endAction;
@property (retain) MCAction * cancelAction;
@property (readonly) id sender;
@property (retain) NSArray * matrixChain;
@property (nonatomic) int state;
@property (nonatomic) struct CGSize referenceSize;
@property (readonly) NSSet * touches;

- (void)dealloc;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (void)setCancelAction:(MCAction *)arg0;
- (MCAction *)cancelAction;
- (NSObject *)sender;
- (void)touchMoved:(id)arg0;
- (NSSet *)touches;
- (MCAction *)updateAction;
- (void)setStartAction:(MCAction *)arg0;
- (struct CGPoint)_localPointFromTouchPoint:(struct CGPoint)arg0;
- (void)_sendCancelActions;
- (void)_sendAction:(NSObject *)arg0;
- (void)_addSpecificObjectToAction:(NSObject *)arg0;
- (MRGestureRecognizer *)initWithRenderer:(MRRenderer *)arg0 startAction:(MCAction *)arg1 andSender:(NSObject *)arg2;
- (MCAction *)startAction;
- (void)setUpdateAction:(MCAction *)arg0;
- (MCAction *)endAction;
- (void)setEndAction:(MCAction *)arg0;
- (void)touchBegan:(id)arg0;
- (void)touchEnded:(id)arg0;
- (void)_sendStartActions;
- (void)_sendUpdateActions;
- (void)_sendEndActions;
- (NSArray *)matrixChain;
- (void)setMatrixChain:(NSArray *)arg0;
- (struct CGSize)referenceSize;
- (void)setReferenceSize:(struct CGSize)arg0;
- (void)abort;

@end
