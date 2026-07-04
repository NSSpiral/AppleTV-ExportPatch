/* Runtime dump - DABehaviorOptions
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DABehaviorOptions : NSObject

+ (void)_startListeningForNotifications;
+ (char)CFNetworkLogging;
+ (void)initialize;
+ (char)isAppleInternalInstall;
+ (char)compressRequests;
+ (char)completelyIgnoreNotes;
+ (char)isInHoldingPattern;
+ (char)promptForAllCerts;
+ (NSString *)DAManagedDefaultForKey:(NSString *)arg0;
+ (char)babysitterEnabled;
+ (char)calDAVRemindersForAll;
+ (char)alwaysUseCalendarHomeSync;
+ (char)perfLogging;
+ (DABehaviorOptions *)APSEnv;
+ (char)ignoreSupportedCommands;
+ (char)writeOutBrokenCancelationRequests;
+ (double)defaultEASTaskTimeoutOutWasFound:(char *)arg0;
+ (char)cookiesEnabled;
+ (int)numForgivable401s;
+ (DABehaviorOptions *)whitelistedEASProtocols;
+ (char)isEASParsingLogEnabled;
+ (char)_shouldForceCookies:(char *)arg0;
+ (NSString *)_daManagedDefaultsPath;
+ (DABehaviorOptions *)DAManagedDefaults;
+ (char)setDAManagedDefaults:(id)arg0;
+ (int)refreshThrottleTime;
+ (char)ignoreBadLDAPCerts;
+ (double)defaultDAVProbeTimeout;
+ (char)useThunderhillBetaServers;
+ (char)allIMAPServersSupportNotesSearch;
+ (char)sendMeCardEverywhere;
+ (char)earlyPingEnabled;
+ (NSURL *)holidayCalendarURL;
+ (double)holidayCalendarRefreshInterval;
+ (char)orphanCheckEnabled;
+ (char)addDAManagedDefaults:(id)arg0;
+ (void)removeDAManagedDefaults:(id)arg0;
+ (char)isCustomerInstall;

@end
