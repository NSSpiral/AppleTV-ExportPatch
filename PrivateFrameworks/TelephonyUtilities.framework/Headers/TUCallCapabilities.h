/* Runtime dump - TUCallCapabilities
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilities : NSObject

+ (char)supportsTelephonyCalls;
+ (char)supportsFaceTimeAudioCalls;
+ (NSString *)debugDescription;
+ (char)supportsDisplayingFaceTimeAudioCalls;
+ (char)areRelayCallingFeaturesEnabled;
+ (int)telephonyCallSupport;
+ (char)supportsDisplayingTelephonyCalls;
+ (int)faceTimeAudioCallSupport;
+ (int)faceTimeVideoCallSupport;
+ (char)supportsDisplayingFaceTimeVideoCalls;
+ (char)isWiFiCallingCurrentlyAvailable;
+ (char)supportsHostingTelephonyCalls;
+ (char)supportsHostingFaceTimeAudioCalls;
+ (char)supportsHostingFaceTimeVideoCalls;
+ (void)_initializeCTCapabilitiesSupport;
+ (char)isWiFiCallingEnabled;
+ (void)_setCTCapability:(struct __CFString *)arg0 value:(char)arg1;
+ (char)canEnableWiFiCalling;
+ (void)setWiFiCallingProvisioningURL:(NSURL *)arg0;
+ (void)_sendNecessaryNotificationsAfterRunningBlock:(id /* block */)arg0;
+ (struct __CTServerConnection *)_createServerConnection;
+ (void)_setUpRelayCallingListeners;
+ (char)_supportsRelayCallingDefault;
+ (char)_canEnableRelayCallingDefault;
+ (char)_relayCallingEnabledDefault;
+ (char)_relayCallingFeaturesEnabledDefault;
+ (char)isRelayCallingEnabled;
+ (void)setRelayCallingEnabled:(char)arg0;
+ (char)supportsRelayCalling;
+ (NSURL *)wiFiCallingProvisioningURL;
+ (void)_tearDownRelayCallingListeners;
+ (void)_tearDownCTCapabilitiesNotifications;
+ (void)setWiFiCallingCapabilityInformation:(id)arg0;
+ (TUCallCapabilities *)wiFiCallingCapabilityInformation;
+ (void)_setUpCTCapabilitiesNotifications;
+ (char)supportsFaceTimeVideoCalls;
+ (char)supportsSimultaneousVoiceAndData;
+ (char)canEnableRelayCalling;
+ (char)canAttemptTelephonyCallsInAirplaneMode;
+ (void)setWiFiCallingEnabled:(char)arg0;
+ (void)invalidateAndRefreshProvisioningURLs;
+ (char)isProvisioningURLValid:(id)arg0;
+ (void)_initializeState;
+ (void)_setSupportsRelayCallingDefault:(char)arg0;
+ (void)_setCanEnableRelayCallingDefault:(char)arg0;
+ (void)_setRelayCallingEnabledDefault:(char)arg0;
+ (void)_setRelayCallingFeaturesEnabledDefault:(char)arg0;
+ (void)invalidateCachedValues;

@end
