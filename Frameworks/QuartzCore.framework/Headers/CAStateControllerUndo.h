/* Runtime dump - CAStateControllerUndo
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateControllerUndo : NSObject <CAStateRecorder>
{
    CAStateControllerUndo * _next;
    CAState * _state;
    NSMutableArray * _elements;
    NSMutableArray * _transitions;
}

@property (readonly) CAStateControllerUndo * next;
@property (retain, nonatomic) CAState * state;
@property (retain, nonatomic) NSMutableArray * elements;
@property (retain, nonatomic) NSMutableArray * transitions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)willAddLayer:(CALayer *)arg0;
- (void)addTransition:(NSObject *)arg0;
- (NSMutableArray *)transitions;
- (void)setTransitions:(NSMutableArray *)arg0;
- (CAStateControllerUndo *)next;
- (void)dealloc;
- (CAState *)state;
- (void)setState:(CAState *)arg0;
- (NSMutableArray *)elements;
- (void)setElements:(NSMutableArray *)arg0;
- (void)addElement:(NSObject *)arg0;

@end
