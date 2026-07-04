/* Runtime dump - MCActionGroup
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCActionGroup : MCAction
{
    NSMutableArray * _actions;
}

@property (readonly, nonatomic) NSArray * actions;
@property (readonly, nonatomic) unsigned int countOfActions;

+ (MCActionGroup *)actionGroup;

- (MCActionGroup *)init;
- (NSString *)description;
- (NSArray *)actions;
- (void)removeAllActions;
- (void)addAction:(NSObject *)arg0;
- (void)insertActions:(id)arg0 atIndex:(unsigned int)arg1;
- (void)removeActionsAtIndices:(id)arg0;
- (void)insertAction:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCActionGroup *)initWithImprint:(NSDictionary *)arg0;
- (unsigned int)countOfActions;
- (NSObject *)actionAtIndex:(unsigned int)arg0;
- (void)moveActionsAtIndices:(id)arg0 toIndex:(unsigned int)arg1;
- (void)addActions:(TSTLayoutProcessChangesActions *)arg0;
- (NSDictionary *)imprint;

@end
