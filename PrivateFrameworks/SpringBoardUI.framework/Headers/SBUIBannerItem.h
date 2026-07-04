/* Runtime dump - SBUIBannerItem
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSURL *)action;
- (NSString *)title;
- (NSString *)message;
- (NSDate *)sortDate;
- (unsigned int)priority;
- (char)isCritical;
- (NSString *)actionWithIdentifier:(NSString *)arg0;
- (char)shouldPlayLightsAndSirens;
- (char)inertWhenLocked;
- (NSURL *)sound;
- (id)subActions;
- (char)overridesQuietMode;
- (char)isSticky;
- (char)canShowInAssistant;
- (char)canShowWhileLocked;
- (NSNotification *)pullDownNotification;
- (char)shouldShowModalSubActions;
- (id)subActionLabels;
- (char)hasSubActions;
- (NSString *)defaultActionWithContext:(NSObject *)arg0;
- (NSString *)lockScreenActionContextWithContext:(NSObject *)arg0;

@end
