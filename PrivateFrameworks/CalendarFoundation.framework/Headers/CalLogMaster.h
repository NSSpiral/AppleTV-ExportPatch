/* Runtime dump - CalLogMaster
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogMaster : NSObject
{
    NSArray * _topLevelNodes;
    CalLogNode * _aslNode;
    CalLogNode * _rootConfigurationNode;
    CalLogNode * _standardOutNode;
    CalLogNode * _userNotificationNode;
    NSObject<OS_dispatch_group> * _dispatchGroup;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int _notificationRegistrationToken;
    char _hasValidNotificationRegistrationToken;
    char _autoFlush;
}

@property (retain, nonatomic) NSArray * topLevelNodes;
@property (retain, nonatomic) CalLogNode * aslNode;
@property (retain, nonatomic) CalLogNode * standardOutNode;
@property (retain, nonatomic) CalLogNode * rootConfigurationNode;
@property (retain, nonatomic) CalLogNode * userNotificationNode;
@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic) char hasValidNotificationRegistrationToken;
@property (nonatomic) char autoFlush;

+ (CalLogMaster *)sharedLogMaster;

- (void)dealloc;
- (CalLogMaster *)init;
- (char)flush;
- (CalLogMaster *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)processEnvelope:(id)arg0;
- (void)loadPreferredConfiguration;
- (void)registerForConfigUpdateNotifications;
- (void)configureASLNode;
- (void)configureStandardOutNode;
- (void)configureUserNotificationNode;
- (void)configureRootConfigurationNode;
- (void)setAutoFlush:(char)arg0;
- (void)reloadTopLevelNodes;
- (int)findMinimumLevel;
- (NSArray *)findWhiteList;
- (CalLogNode *)aslNode;
- (void)setAslNode:(CalLogNode *)arg0;
- (CalLogNode *)standardOutNode;
- (void)setStandardOutNode:(CalLogNode *)arg0;
- (void)setUserNotificationNode:(CalLogNode *)arg0;
- (id)copyLegacyLoggingDefaultsConvertedToNamespaces;
- (void)setRootConfigurationNode:(CalLogNode *)arg0;
- (CalLogNode *)userNotificationNode;
- (CalLogNode *)rootConfigurationNode;
- (void)setTopLevelNodes:(NSArray *)arg0;
- (void)setHasValidNotificationRegistrationToken:(char)arg0;
- (void)setNotificationRegistrationToken:(int)arg0;
- (NSArray *)topLevelNodes;
- (char)autoFlush;
- (int)notificationRegistrationToken;
- (char)hasValidNotificationRegistrationToken;

@end
