/* Runtime dump - PDTimeNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDTimeNode : NSObject
{
    NSMutableArray * mStartTimeConditions;
    NSMutableArray * mEndTimeConditions;
    NSMutableArray * mChildTimeNodeList;
    NSMutableArray * mSubTimeNodeList;
    PDIterate * mIterate;
    int mType;
    int mAnimationPresetClass;
    int mPresetId;
    int mPresetSubType;
    int mRepeatCount;
    int mRepeatDuration;
    int mRestartType;
    char mHasDuration;
    double mDuration;
    double mSpeed;
    double mAcceleration;
    double mDeceleration;
    NSString * mGroupId;
}

- (void)setAcceleration:(double)arg0;
- (void)setRepeatDuration:(int)arg0;
- (int)repeatDuration;
- (void)dealloc;
- (PDTimeNode *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)setSpeed:(double)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg0;
- (double)speed;
- (double)acceleration;
- (char)hasType;
- (char)hasDuration;
- (int)animationPresetClass;
- (int)restartType;
- (int)presetId;
- (int)presetSubType;
- (double)deceleration;
- (id)startTimeConditions;
- (id)endTimeConditions;
- (NSArray *)childTimeNodeList;
- (NSArray *)subTimeNodeList;
- (PDIterate *)iterate;
- (void)setStartTimeConditions:(id)arg0;
- (void)setEndTimeConditions:(id)arg0;
- (void)setChildTimeNodeList:(NSArray *)arg0;
- (void)setSubTimeNodeList:(NSArray *)arg0;
- (void)setIterate:(PDIterate *)arg0;
- (char)hasPresetClass;
- (void)setAnimationPresetClass:(int)arg0;
- (void)setPresetSubType:(int)arg0;
- (void)setPresetId:(int)arg0;
- (char)hasRestartType;
- (void)setRestartType:(int)arg0;
- (void)setDeceleration:(double)arg0;
- (void)setGroupIdValue:(int)arg0;
- (NSString *)groupId;
- (void)setGroupId:(NSString *)arg0;

@end
