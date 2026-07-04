/* Runtime dump - MCConditionalAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCConditionalAction : MCAction
{
    NSString * _predicate;
    MCAction * _actionIfTrue;
    MCAction * _actionIfFalse;
}

@property (copy) NSString * predicate;
@property (retain) MCAction * actionIfTrue;
@property (retain) MCAction * actionIfFalse;

+ (MCConditionalAction *)conditionalActionWithPredicate:(NSString *)arg0;
+ (MCConditionalAction *)conditionalActionWithPredicate:(NSString *)arg0 actionIfTrue:(MCAction *)arg1 actionIfFalse:(MCAction *)arg2;

- (NSString *)description;
- (void)setPredicate:(NSString *)arg0;
- (NSString *)predicate;
- (MCAction *)actionIfTrue;
- (MCAction *)actionIfFalse;
- (void)setActionIfTrue:(MCAction *)arg0;
- (void)setActionIfFalse:(MCAction *)arg0;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCConditionalAction *)initWithImprint:(NSDictionary *)arg0;
- (NSObject *)setTransitionForTargetPlugObjectID:(NSObject *)arg0 withTransitionID:(NSString *)arg1 forCondition:(char)arg2;
- (NSObject *)setAnimationTriggerForTargetPlugObjectID:(NSObject *)arg0 withAnimationKey:(NSString *)arg1 forCondition:(char)arg2;
- (NSObject *)setGenericActionForTargetPlugObjectID:(NSObject *)arg0 withAttributes:(NSDictionary *)arg1 forCondition:(char)arg2;
- (id)setActionGroupForCondition:(char)arg0;
- (NSPredicate *)setConditionalActionWithPredicate:(NSString *)arg0 forCondition:(char)arg1;
- (NSDictionary *)imprint;

@end
