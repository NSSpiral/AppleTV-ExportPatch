/* Runtime dump - HMDBulletinBoard
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinBoard : NSObject <NSSecureCoding>
{
    char _enabled;
    NSArray * _categories;
}

@property (nonatomic) char enabled;
@property (readonly, nonatomic) NSArray * categories;

+ (char)supportsSecureCoding;
+ (HMDBulletinBoard *)sharedBulletinBoard;
+ (HMDBulletinBoard *)unarchive;
+ (void)archive;

- (HMDBulletinBoard *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (NSArray *)categories;
- (void).cxx_destruct;
- (void)configureHomeManager:(NSObject *)arg0;
- (void)removeBulletinsForAccessory:(id)arg0;
- (void)insertBulletinsForChangedCharacteristics:(id)arg0 completion:(id /* block */)arg1;
- (void)removeBulletinsForService:(NSObject *)arg0;
- (NSString *)insertBulletinWithTitle:(NSString *)arg0 message:(NSString *)arg1;
- (void)removeBulletinsForHome:(id)arg0;
- (void)removeAllBulletins;
- (void)refreshHomeConfiguration;
- (void)reloadDefaultSectionInfo;
- (id)insertBulletinForIncomingInvitation:(id)arg0;
- (void)removeBulletinWithRecordID:(NSObject *)arg0;
- (void)postFollowUpItemForIncomingInvitations;
- (void)clearFollowUpItems;

@end
