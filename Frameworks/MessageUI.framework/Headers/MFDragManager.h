/* Runtime dump - MFDragManager
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFDragManager : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableArray * _dragContextValues;
    NSMutableArray * _dragDestinations;
    NSMutableArray * _dragSources;
    NSMutableDictionary * _gestureRecognizersForSource;
    NSMutableDictionary * _sourceForGestureRecognizer;
    <MFDraggableItem> * _draggedItem;
    UIView * _draggedItemView;
    <MFDragDestination> * _currentDestination;
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

+ (MFDragManager *)sharedInstance;

- (void)addDragContext:(NSObject *)arg0;
- (void)removeDragContext:(NSObject *)arg0;
- (void)_handleLongPress:(id)arg0;
- (void)enumerateDragContextsUsingBlock:(id /* block */)arg0;
- (void)_processGestureUpdate;
- (void)_cleanUpAfterDragCompleted;
- (void)_scrollViewIfNecessary;
- (void)addDragDestination:(NSObject *)arg0;
- (void)removeDragDestination:(NSObject *)arg0;
- (void)addDragSource:(NSObject *)arg0;
- (void)removeDragSource:(NSObject *)arg0;
- (void)cancelCurrentDragOperation;
- (void)dealloc;
- (MFDragManager *)init;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)_gestureRecognizer:(NSObject *)arg0 shouldBeRequiredToFailByGestureRecognizer:(NSObject *)arg1;

@end
