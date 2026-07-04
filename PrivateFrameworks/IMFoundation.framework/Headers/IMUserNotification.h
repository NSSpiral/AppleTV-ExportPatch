/* Runtime dump - IMUserNotification
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMUserNotification : NSObject
{
    id _reserved;
}

@property (readonly, retain, nonatomic) id identifier;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) unsigned int displayFlags;
@property (readonly, retain, nonatomic) NSDictionary * displayInformation;
@property (nonatomic) char showInLockScreen;
@property (nonatomic) char usesNotificationCenter;
@property (retain, nonatomic) NSString * representedApplicationBundle;
@property (readonly, nonatomic) unsigned int response;
@property (readonly, nonatomic) unsigned int responseFlags;
@property (readonly, retain, nonatomic) NSDictionary * responseInformation;
@property (retain, nonatomic) NSDictionary * userInfo;

+ (NSString *)userNotificationWithIdentifier:(NSString *)arg0 timeout:(double)arg1 alertLevel:(unsigned int)arg2 displayFlags:(unsigned int)arg3 displayInformation:(NSDictionary *)arg4;
+ (NSString *)userNotificationWithIdentifier:(NSString *)arg0 title:(NSString *)arg1 message:(NSString *)arg2 defaultButton:(SSDialogButton *)arg3 alternateButton:(id)arg4 otherButton:(id)arg5;

- (void)dealloc;
- (NSString *)identifier;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (unsigned int)response;
- (NSString *)_initWithIdentifier:(NSString *)arg0 timeout:(double)arg1 displayFlags:(unsigned int)arg2 displayInformation:(NSDictionary *)arg3;
- (unsigned int)responseFlags;
- (NSDictionary *)displayInformation;
- (unsigned int)displayFlags;
- (NSString *)representedApplicationBundle;
- (void)setRepresentedApplicationBundle:(NSString *)arg0;
- (char)showInLockScreen;
- (void)setShowInLockScreen:(char)arg0;
- (char)usesNotificationCenter;
- (void)setUsesNotificationCenter:(char)arg0;
- (NSDictionary *)responseInformation;
- (void)_setResponseFlags:(unsigned int)arg0 responseInformation:(NSDictionary *)arg1;
- (double)timeout;

@end
