/* Runtime dump - MPConditionalAction
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPConditionalAction : MPAction <MPActionSupport>
{
    NSString * _predicate;
    MPAction * _actionIfTrue;
    MPAction * _actionIfFalse;
}

@property (copy, nonatomic) NSString * predicate;
@property (readonly) MPAction * actionIfTrue;
@property (readonly) MPAction * actionIfFalse;

+ (MPConditionalAction *)conditionalAction;

- (void)dealloc;
- (MPConditionalAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPConditionalAction *)init;
- (MPConditionalAction *)copyWithZone:(struct _NSZone *)arg0;
- (void)setAction:(MCAction *)arg0;
- (void)setPredicate:(NSString *)arg0;
- (NSString *)predicate;
- (void)configureTarget;
- (void)setAction:(NSObject *)arg0 forCondition:(char)arg1;
- (MPAction *)actionIfTrue;
- (MPAction *)actionIfFalse;
- (void)configureActions;

@end
