/* Runtime dump - BBActionGroup
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBActionGroup : BBAction
{
    NSArray * _actions;
}

@property (copy, nonatomic) NSArray * actions;

+ (BBActionGroup *)actionGroupWithActions:(NSArray *)arg0;

- (void)dealloc;
- (BBActionGroup *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSArray *)actions;
- (void)setActions:(NSArray *)arg0;

@end
