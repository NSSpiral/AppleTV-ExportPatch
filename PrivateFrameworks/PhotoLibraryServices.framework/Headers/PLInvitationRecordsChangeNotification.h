/* Runtime dump - PLInvitationRecordsChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification
{
    char _invitationRecordsDidChange;
    NSDictionary * _userInfo;
}

@property (readonly, retain, nonatomic) PLGenericAlbum * album;
@property (readonly, nonatomic) char invitationRecordsDidChange;

+ (PLInvitationRecordsChangeNotification *)notificationWithAlbum:(PLGenericAlbum *)arg0 snapshot:(NSObject *)arg1;

- (NSString *)name;
- (NSDictionary *)userInfo;
- (void)_calculateDiffs;
- (struct NSObject *)album;
- (char)invitationRecordsDidChange;

@end
