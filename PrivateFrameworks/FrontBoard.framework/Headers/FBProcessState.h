/* Runtime dump - FBProcessState
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessState : NSObject <NSCopying>
{
    int _pid;
    char _running;
    char _foreground;
    int _taskState;
    int _visibility;
    int _effectiveVisibility;
}

@property (nonatomic) int pid;
@property (nonatomic) char running;
@property (nonatomic) char foreground;
@property (nonatomic) int taskState;
@property (nonatomic) int visibility;
@property (nonatomic) int effectiveVisibility;

- (FBProcessState *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (FBProcessState *)copyWithZone:(struct _NSZone *)arg0;
- (char)isRunning;
- (char)isForeground;
- (int)pid;
- (int)taskState;
- (FBProcessState *)initWithPid:(int)arg0;
- (void)setTaskState:(int)arg0;
- (void)setEffectiveVisibility:(int)arg0;
- (int)effectiveVisibility;
- (void)setPid:(int)arg0;
- (void)setForeground:(char)arg0;
- (void)setRunning:(char)arg0;
- (int)visibility;
- (void)setVisibility:(int)arg0;

@end
