/* Runtime dump - MFMultiDragManager
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMultiDragManager : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableArray * _dragContextValues;
    NSMutableArray * _dragDestinations;
    NSMutableArray * _dragSources;
    NSMutableDictionary * _gestureRecognizersForSource;
    NSMutableDictionary * _sourceForGestureRecognizer;
    NSArray * _draggedItems;
    UIView * _draggedItemsContainerView;
    NSMutableDictionary * _draggedItemsIndexToViewRepresentation;
    <MFMultiDragDestination> * _currentDestination;
    UIGestureRecognizer * _currentGestureBeingProcessed;
    UIWindow * _dragWindow;
    MFGobblerGestureRecognizer * _gobblerGestureRecognizer;
    NSTimer * _scrollTimer;
    struct CGPoint _offsetCenterOfDraggedView;
    struct CGPoint _previousGestureLocation;
    double _timeOfLastBigUpdate;
    struct CGRect _draggedItemOriginalFrame;
    char _dragWasSuccessful;
    char _scrollingForDrag;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MFMultiDragManager *)sharedInstance;

- (void)addDragContext:(NSObject *)arg0;
- (void)removeDragContext:(NSObject *)arg0;
- (void)_handleLongPress:(id)arg0;
- (void)enumerateDragContextsUsingBlock:(id /* block */)arg0;
- (void)_processGestureUpdate;
- (void)_cleanUpAfterDragCompleted;
- (void)_beginGobblingAllDisruptiveEventsForWindow:(NSObject *)arg0;
- (void)_scrollViewIfNecessary;
- (void)_longPressGestureMoved:(id)arg0;
- (void)_longPressGestureBegan:(id)arg0;
- (void)_longPressGestureEnded:(id)arg0;
- (void)addDragDestination:(NSObject *)arg0;
- (void)removeDragDestination:(NSObject *)arg0;
- (void)addDragSource:(NSObject *)arg0;
- (void)removeDragSource:(NSObject *)arg0;
- (void)cancelCurrentDragOperation;
- (void)dealloc;
- (MFMultiDragManager *)init;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)_gestureRecognizer:(NSObject *)arg0 shouldBeRequiredToFailByGestureRecognizer:(NSObject *)arg1;

@end
