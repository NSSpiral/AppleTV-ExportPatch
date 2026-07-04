/* Runtime dump - NSUndoManager
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUndoManager : NSObject
{
    id _undoStack;
    id _redoStack;
    NSArray * _runLoopModes;
    unsigned long long _NSUndoManagerPrivate1;
    id _target;
    id _proxy;
    void * _NSUndoManagerPrivate2;
    void * _NSUndoManagerPrivate3;
}

@property (readonly) int groupingLevel;
@property (readonly) char undoRegistrationEnabled;
@property char groupsByEvent;
@property unsigned int levelsOfUndo;
@property (copy) NSArray * runLoopModes;
@property (readonly) char canUndo;
@property (readonly) char canRedo;
@property (readonly) char undoing;
@property (readonly) char redoing;
@property (readonly) char undoActionIsDiscardable;
@property (readonly) char redoActionIsDiscardable;
@property (readonly, copy) NSString * undoActionName;
@property (readonly, copy) NSString * redoActionName;
@property (readonly, copy) NSString * undoMenuItemTitle;
@property (readonly, copy) NSString * redoMenuItemTitle;

+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(char)arg0;
+ (void)_endTopLevelGroupings;

- (char)isRedoing;
- (void)enableUndoRegistration;
- (void)removeAllActionsWithTarget:(NSObject *)arg0;
- (NSString *)_methodSignatureForTargetSelector:(SEL)arg0;
- (void)_forwardTargetInvocation:(NSObject *)arg0;
- (CAStateControllerUndo *)_undoStack;
- (char)_endUndoGroupRemovingIfEmpty:(char)arg0;
- (void)undoNestedGroup;
- (void)_commitUndoGrouping;
- (void)_rollbackUndoGrouping;
- (void)_delayAutomaticTermination:(double)arg0;
- (NSArray *)runLoopModes;
- (void)_scheduleAutomaticTopLevelGroupEnding;
- (void)_prepareEventGrouping;
- (void)_postCheckpointNotification;
- (void)_cancelAutomaticTopLevelGroupEnding;
- (void)_registerUndoObject:(NSObject *)arg0;
- (void)_setGroupIdentifier:(NSString *)arg0;
- (NSString *)undoActionName;
- (NSString *)undoMenuTitleForUndoActionName:(NSString *)arg0;
- (NSString *)redoActionName;
- (NSString *)redoMenuTitleForUndoActionName:(NSString *)arg0;
- (void)setLevelsOfUndo:(unsigned int)arg0;
- (unsigned int)levelsOfUndo;
- (void)setRunLoopModes:(NSArray *)arg0;
- (void)setActionIsDiscardable:(char)arg0;
- (char)undoActionIsDiscardable;
- (char)redoActionIsDiscardable;
- (void)dealloc;
- (NSUndoManager *)init;
- (char)canUndo;
- (char)canRedo;
- (NSString *)redoMenuItemTitle;
- (NSString *)undoMenuItemTitle;
- (void)undo;
- (void)redo;
- (char)isUndoRegistrationEnabled;
- (void)removeAllActions;
- (void)disableUndoRegistration;
- (char)groupsByEvent;
- (void)setGroupsByEvent:(char)arg0;
- (void)beginUndoGrouping;
- (void)endUndoGrouping;
- (void)_processEndOfEventNotification:(NSNotification *)arg0;
- (int)groupingLevel;
- (char)_shouldCoalesceTypingForText:(NSString *)arg0 :(id)arg1;
- (void)registerUndoWithTarget:(NSObject *)arg0 selector:(SEL)arg1 object:(NSObject *)arg2;
- (void)setActionName:(NSString *)arg0;
- (char)isUndoing;
- (NSObject *)prepareWithInvocationTarget:(NSObject *)arg0;
- (void)finalize;

@end
