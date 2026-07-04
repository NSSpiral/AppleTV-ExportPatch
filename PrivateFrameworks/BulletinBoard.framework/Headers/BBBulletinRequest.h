/* Runtime dump - BBBulletinRequest
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRequest : BBBulletin
{
    unsigned int _expirationEvents;
}

@property (copy, nonatomic) NSString * bulletinID;
@property (copy, nonatomic) NSString * sectionID;
@property (copy, nonatomic) NSSet * subsectionIDs;
@property (copy, nonatomic) NSString * recordID;
@property (copy, nonatomic) NSString * publisherBulletinID;
@property (copy, nonatomic) NSString * dismissalID;
@property (nonatomic) int addressBookRecordID;
@property (nonatomic) int sectionSubtype;
@property (nonatomic) unsigned int counter;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * message;
@property (retain, nonatomic) BBContent * modalAlertContent;
@property (nonatomic) char hasEventDate;
@property (retain, nonatomic) NSDate * date;
@property (retain, nonatomic) NSDate * endDate;
@property (retain, nonatomic) NSDate * recencyDate;
@property (nonatomic) int dateFormatStyle;
@property (nonatomic) char dateIsAllDay;
@property (retain, nonatomic) NSTimeZone * timeZone;
@property (retain, nonatomic) BBAccessoryIcon * accessoryIconMask;
@property (nonatomic) char clearable;
@property (retain, nonatomic) BBSound * sound;
@property (nonatomic) int primaryAttachmentType;
@property (nonatomic) char wantsFullscreenPresentation;
@property (copy, nonatomic) NSSet * alertSuppressionContexts;
@property (copy, nonatomic) BBAction * defaultAction;
@property (copy, nonatomic) BBAction * alternateAction;
@property (copy, nonatomic) BBAction * acknowledgeAction;
@property (copy, nonatomic) BBAction * dismissAction;
@property (copy, nonatomic) BBAction * snoozeAction;
@property (copy, nonatomic) BBAction * raiseAction;
@property (copy, nonatomic) NSArray * supplementaryActions;
@property (retain, nonatomic) NSDate * expirationDate;
@property (nonatomic) unsigned int expirationEvents;
@property (copy, nonatomic) BBAction * expireAction;
@property (nonatomic) char usesExternalSync;
@property (nonatomic) char loading;
@property (copy, nonatomic) NSArray * buttons;
@property (retain, nonatomic) BBContent * starkBannerContent;
@property (nonatomic) char expiresOnPublisherDeath;
@property (copy, nonatomic) NSString * section;
@property (nonatomic) unsigned int realertCount;
@property (nonatomic) char showsUnreadIndicator;
@property (nonatomic) char tentative;

- (NSString *)description;
- (char)tentative;
- (void)publish;
- (unsigned int)expirationEvents;
- (void)setExpirationEvents:(unsigned int)arg0;
- (void)addAttachmentOfType:(int)arg0;
- (void)publish:(char)arg0;
- (void)setSupplementaryActions:(NSArray *)arg0 forLayout:(int)arg1;
- (void)_updateSupplementaryAction:(NSObject *)arg0;
- (void)setContextValue:(id)arg0 forKey:(NSString *)arg1;
- (void)setPrimaryAttachmentType:(int)arg0;
- (void)addButton:(UIButton *)arg0;
- (void)withdraw;
- (void)setSupplementaryActions:(NSArray *)arg0;
- (void)setUnlockActionLabel:(NSString *)arg0;
- (unsigned int)realertCount;
- (void)setRealertCount:(unsigned int)arg0;
- (void)addAlertSuppressionAppID:(NSObject *)arg0;
- (void)generateBulletinID;
- (void)setShowsUnreadIndicator:(char)arg0;
- (char)showsUnreadIndicator;
- (void)setTentative:(char)arg0;
- (char)hasContentModificationsRelativeTo:(id)arg0;
- (void)generateNewBulletinID;

@end
