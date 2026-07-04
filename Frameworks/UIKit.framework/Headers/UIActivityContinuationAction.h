/* Runtime dump - UIActivityContinuationAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityContinuationAction : BSAction

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * activityTypeIdentifier;
@property (readonly, nonatomic) NSString * originatingDeviceType;
@property (readonly, nonatomic) NSString * originatingDeviceName;
@property (readonly, nonatomic) NSString * activityType;
@property (readonly, nonatomic) NSDate * lastUpdateTime;

- (int)UIActionType;
- (NSString *)identifier;
- (NSString *)activityTypeIdentifier;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (UIActivityContinuationAction *)initWithSettings:(NSDictionary *)arg0;
- (NSString *)activityType;
- (NSString *)originatingDeviceType;
- (NSString *)originatingDeviceName;
- (NSDate *)lastUpdateTime;

@end
