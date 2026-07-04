/* Runtime dump - MPActionGroup
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPActionGroup : MPAction <MPActionSupport>
{
    NSMutableArray * _actions;
}

+ (MPActionGroup *)actionGroup;

- (void)dealloc;
- (MPActionGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPActionGroup *)init;
- (NSMutableArray *)actions;
- (MPActionGroup *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (void)removeAllActions;
- (void)addAction:(NSObject *)arg0;
- (void)configureTarget;
- (void)copyActions:(id)arg0;
- (void)insertActions:(id)arg0 atIndex:(int)arg1;
- (void)configureAction:(NSObject *)arg0 atIndex:(int)arg1;
- (void)removeActionsAtIndices:(id)arg0;
- (void)insertAction:(NSObject *)arg0 atIndex:(int)arg1;
- (unsigned int)numberOfActions;
- (void)addActions:(TSTLayoutProcessChangesActions *)arg0;

@end
